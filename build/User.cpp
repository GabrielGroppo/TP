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

void user::perfil(){
  cout << "Perfil " << endl
       << "Nome: " << name_ << endl
       << "CPF: " << cpf_ << endl
       << "Email: " << email_ << endl
       << "Senha: " << password_ << endl
       << "Cartão de Credito: " << credit_card << endl;
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
     cout <<"Nome de usuário alterado!" << endl;
     }
}

void user::addCpf(long int cpf){
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
        std::cout<<"Passagem:" << endl
                 <<"Codigo do voo: "<<(*it).voo<< endl
                 <<"Origem: "<<(*it).origin.city<<", "<<(*it).origin.country << endl
                 <<"Destino: "<<(*it).destination.city<<", "<<(*it).destination.country<< endl
                 <<"Horario: "<<(*it).hour.hour<<":"<<(*it).hour.minutes << endl
                 <<"Assento: "<<(*it).seat <<"  Preço: $"<<(*it).price<<",00"<< endl;
    }
}

void user::cancelTicket(int codigo_voo, int seat, Flights& System){
    if(System.returnFlight(codigo_voo).seatCheck(seat)){
        for(auto itr = tickets_.begin(); itr != tickets_.end(); itr++){
            if(itr->seat == System.flights_[codigo_voo-1].seatCheck(seat)){
                System.flights_[codigo_voo-1].cancelSeat(seat);
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

void user::buyTicket(int codigo_voo, int seat, Flights& System){
      if(System.returnFlight(codigo_voo).seatCheck(seat) == 0){
          System.flights_[codigo_voo-1].getSeat(seat);
          tickets_.push_front(System.returnFlight(codigo_voo).getTicket(seat));
      }
      else{
          std::cout<<"assento ocupado"<<endl;
      }
}


