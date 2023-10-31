#include<iostream>
#include <list>
#include "src/FlightS.h"
#include "src/Flight.h"
#include "src/User.h"
#include<vector>
    using namespace std;

user::user(){
    name_ = "";
    email_ = "";
    password_ = "";
    cpf_ = 0;
    credit_card = 0;
    credit_card_debit = 0;
    tickets_;
}

void user::addName (string name){
  if(name_.empty()){
    name_ = name;
  }
  else{
 cout <<" Já existe um nome de usuário!" << endl;
  }
}
void user::changeName(string name){
 if(name_.empty()){
  cout <<" Não existe nenhum nome de usuário!" << endl;
  }
 else{
   name_ = name;
     cout <<" Nome de usuário alterado!" << endl;
     }
}

void user::addCpf(int cpf){
   if(cpf_ == 0 ){
   cpf_ = cpf;
  }
  else{
 cout <<" Já existe um cpf para esse usuário!" << endl;
  }
}
void user::addEmail(string email){
   if(email_.empty()){
    email_ = email;
  }
  else{
 cout <<" Já existe um email para esse usuário!" << endl;
  }
}
void user::changeEmail(string email){
   if(email_.empty()){
  cout <<" Não existe nenhum email para esse usuário!" << endl;
  }
 else{
  email_ = email;
  cout <<"Email foi alterado!" << endl;
     }
}
void user::addPassword(string password){
  if(password_.empty()){
    password_ = password;
  }
  else{
 cout <<" Já existe uma senha para esse usuário!" << endl;
  }
}
void user::changePassword(string old_password,string new_password){
  if(password_.empty()){
  cout <<" Não existe nenhuma senha para esse usuário!" << endl;
  }
 else{
  if(password_ == old_password){
      password_ = new_password;
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
        std::cout<<"codigo do voo:"<<(*it).voo<<"  origem:"<<(*it).origin.city<<","<<(*it).origin.country;
        std::cout<<"  destino:"<<(*it).origin.city<<","<<(*it).origin.country<<endl;
        std::cout<<"horario:"<<(*it).hour.hour<<":"<<(*it).hour.minutes<<"  assento:"<<(*it).seat;
        std::cout<<"  preço:"<<(*it).price<<"dolares"<<endl;
    }
}

void user::cancelTicket (int codigo_voo, int seat, Flights System){
     if(System.returnFlight(codigo_voo).seatCheck(seat)){
        System.returnFlight(codigo_voo).cancelSeat(seat);
            for(auto itr = tickets_.begin(); itr != tickets_.end(); itr++){
                if(itr->voo == codigo_voo){
                    tickets_.erase(itr);
                    break;
                }
            }
    }else{
        std::cout<<"assento desocupado"<<endl;
    } 
}

void user::buyTicket(int codigo_voo, int seat, Flights System){
    if(!(System.returnFlight(codigo_voo)).seatCheck(seat)){
        System.returnFlight(codigo_voo).getSeat(seat);
    }else{
        std::cout<<"assento ocupado"<<endl;
    }
}


