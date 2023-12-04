#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include "UserManager.h"
#include "FlightManager.h"
#include "Flight.h"
#include "User.h"
using std::endl;

UserManager::UserManager(FlightManager& System){
    std::ifstream arquivo;
        arquivo.open("Passengers.txt",std::ios::app);
            if(!arquivo.is_open()){
                std::cerr << "Erro ao abrir o txt" << std::endl;
            }

                std::string aux;
                    while(arquivo >> aux){
                        int contador = 0;
                        user aux_user;
                        while(contador<6){
                        if(contador == 0){
                            aux_user.addName(aux);
                            arquivo >> aux;
                            contador++;
                            continue;
                        }
                        if(contador == 1){
                            aux_user.addEmail(aux);
                            arquivo >> aux;
                            contador++;
                            continue;
                        }
                        else if(contador == 2){
                            aux_user.addPassword(aux);
                            arquivo >> aux;
                            contador++;
                            continue;
                        }
                        else if(contador == 3){
                            aux_user.addCpf(std::stol(aux));
                            arquivo >> aux;
                            contador++;
                            continue;
                        }
                        else if(contador == 4){
                            aux_user.addCredit_Card(std::stol(aux));
                            arquivo >> aux;
                            contador++;
                            continue;
                        }
                        else if(contador == 5){
                            int tickets = std::stoi(aux);
                            for(int i=0;i<tickets;i++){
                                arquivo >> aux;
                                int codigo_voo = std::stoi(aux);
                                arquivo >> aux;
                                int seat = std::stoi(aux);
                                aux_user.buyTicket( codigo_voo, seat, System);
                            }
                            users_.push_back(aux_user);
                            contador++;
                            continue;
                        }
                        }
                    }
    arquivo.close();
}
void UserManager::addUser(user& passenger){
    users_.push_back(passenger);
}
user& UserManager::returnUser(std::string name, std::string password){
    for(int i=0;i<users_.size();i++){
        if(users_[i].checkName(name)){
            return users_[i];
        }
    }
    std::cout<<"Não existe o usuário"<<std::endl;
    throw "erro";
}
void UserManager::UpdatePassenger(){
    std::ofstream arquivo;
    arquivo.open("Passengers.txt");
         for(int i=0;i<users_.size();i++){
            profile copy=users_[i].ReturnProfile();
            arquivo<<copy.name<<endl;
            arquivo<<copy.email<<endl;
            arquivo<<copy.password<<endl;
            arquivo<<copy.cpf<<endl;
            arquivo<<copy.credit_card<<endl;
            arquivo<<copy.flight_info.size()<<endl;
            for(int j=0;j<copy.flight_info.size();j++){
                arquivo<<copy.flight_info[j].first<<' '<<copy.flight_info[j].second<<endl;
            }
         }
    arquivo.close();
}
bool UserManager::validName(std::string name){
    for(int i=0;i<users_.size();i++){
        if(users_[i].checkName(name)){
            return false;
        }
    }
    return true;
}
/*bool UserManager::validCpf(long int cpf){
    for(int i=0;i<users_.size();i++){
        if(users_[i].checkCpf(cpf)){
            return false;
        }
    }
    return true;
}*/
bool UserManager::validPasword(std::string name,std::string password){
    for(int i=0;i<users_.size();i++){
        if(users_[i].checkName(name)){
            if(users_[i].checkPassword(password)){
                return true;
            }else{
                return false;
            }
        }
    }
    return false;
}

        
        
        
        
        
        
        
        
        
        
        