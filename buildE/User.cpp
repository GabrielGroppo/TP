#include<iostream>
#include <list>
#include "FlightManager.h"
#include "Flight.h"
#include "User.h"
#include<vector>
    using namespace std;

user::user(){
    name = "";
    email = "";
    password = "";
    cpf = 0;
    credit_card = 0;
    tickets_;
}

void user::perfil(){
  cout << "Perfil " << endl
       << "Nome: " << name << endl
       << "CPF: " << cpf << endl
       << "Email: " << email << endl
       << "Senha: " << password << endl
       << "Cartão de Credito: " << credit_card << endl;
}

void user::addName (string name){
  if(name.empty()){
    name = name;
  }
  else{
 cout <<" Já existe um nome de usuário!" << endl;
  }
}
void user::changeName(string name){
 if(name.empty()){
  cout <<" Não existe nenhum nome de usuário!" << endl;
  }
 else{
   name = name;
     cout <<"Nome de usuário alterado!" << endl;
     }
}

void user::addCpf(long int cpf){
   if(cpf == 0 ){
   cpf = cpf;
  }
  else{
 cout <<" Já existe um cpf para esse usuário!" << endl;
  }
}
void user::addEmail(string email){
   if(email.empty()){
    email = email;
  }
  else{
 cout <<" Já existe um email para esse usuário!" << endl;
  }
}
void user::changeEmail(string email){
   if(email.empty()){
  cout <<" Não existe nenhum email para esse usuário!" << endl;
  }
 else{
  email = email;
  cout <<"Email foi alterado!" << endl;
     }
}
void user::addPassword(string password){
  if(password.empty()){
    password = password;
  }
  else{
 cout <<" Já existe uma senha para esse usuário!" << endl;
  }
}
void user::changePassword(string old_password,string new_password){
  if(password.empty()){
  cout <<" Não existe nenhuma senha para esse usuário!" << endl;
  }
 else{
  if(password == old_password){
      password = new_password;
  cout <<"Senha foi alterada!" << endl;
     }
     else{
          cout <<"Senha incorreta!" << endl;
        }
    }
}
void user:: addCredit_Card(int cc){
  if(credit_card == 0){
   credit_card = cc;
  }
  else{
 cout <<" Já existe um Cartão de Crédito para esse usuário" << endl;
  }
}

void user::checkTickets (){
    for(auto it=tickets_.begin();it!=tickets_.end();it++){
        std::cout<<"Passagem:" << endl
                 <<"Codigo do voo: "<<(*it).voo<< endl
                 <<"Origem: "<<(*it).origin.city<<", "<<(*it).origin.country << endl
                 <<"Destino: "<<(*it).destination.city<<", "<<(*it).destination.country<< endl
                 <<"Horario: "<<(*it).hour.hour<<":"<<(*it).hour.minutes << endl
                 <<"Assento: "<<(*it).seat <<"  Preço: $"<<(*it).price<<",00"<< endl;
    }
}

void user::cancelTicket(int codigo_voo, int seat, FlightManager& System){
    Flight &aux =System.returnFlight(codigo_voo);
    if(aux.seatCheck(seat)){
        for(auto itr = tickets_.begin(); itr != tickets_.end(); itr++){
            if(itr->seat == aux.seatCheck(seat)){
                aux.cancelSeat(seat);
                  tickets_.erase(itr);
                  break;
            }
            // MENSAGEM DE O ASSENTO NÃO É SEU
        }
    }
    else{
        std::cout<<"assento desocupado"<<endl;
    } 
}

void user::buyTicket(int codigo_voo, int seat, FlightManager& System){
    Flight &aux =System.returnFlight(codigo_voo);
      if(aux.seatCheck(seat) == 0){
          aux.getSeat(seat);
          tickets_.push_front(aux.getTicket(seat));
      }
      else{
          std::cout<<"assento ocupado"<<endl;
      }
}


