
using namespace std;
#include <list>
#include "flightS.h"
#include "flight.h"
#include "user.h"

user::user(){
    string name;
    string email;
    string password;
    int cpf;
    int credit_card;
    int credit_card_debit;
    list<ticket> tickets_;
}
void user::buyTicket(int codigo_voo, int seat, Flights System){
    if((System.RetornaVoo(codigo_voo)).seatCheck(seat, " ")){
        System.RetornaVoo(codigo_voo).getSeat(seat, name);
    }else{
        std::cout<<"assento ocupado"<<endl;
    }
}
void user::cancelTicket (int codigo_voo, int seat, Flights System){
     if(System.RetornaVoo(codigo_voo).seatCheck(seat,name)){
        System.RetornaVoo(codigo_voo).cancelSeat(seat, name);
    }else{
        std::cout<<"assento ocupado"<<endl;
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
void user::addName (string name){
  if(name_.empty()){
    name_ = name;
  }
  else{
 cout <<" Já existe um nome de usuário" << endl;
  }
}
void user::changeName(string name){
 if(name_.empty()){
  cout <<" Não existe nenhum nome de usuário" << endl;
  }
 else{
   name_ = name;
     cout <<" Nome de usuário alterado" << endl;
     }
}
void user::addCpf(int cpf){
   if(cpf_.empty()){
   cpf_ = cpf;
  }
  else{
 cout <<" Já existe um cpf para esse usuário" << endl;
  }
}
void user::addEmail(string email){
   if(email_.empty()){
    email_ = email;
  }
  else{
 cout <<" Já existe um email para esse usuário" << endl;
  }
}
void user::changeEmail(string email){
   if(email_.empty()){
  cout <<" Não existe nenhum email para esse usuário" << endl;
  }
 else{
  email_ = email;
  cout <<"Email foi alterado" << endl;
     }
}
void user::addPassword(string password){
  if(password_.empty()){
    password_ = password;
  }
  else{
 cout <<" Já existe uma senha para esse usuário" << endl;
  }
}
void user::changePassword(string old_password,string new_password){
  if(password_.empty()){
  cout <<" Não existe nenhuma senha para esse usuário" << endl;
  }
 else{
  password_ = password;
  cout <<"Senha foi alterada" << endl;
     }
}
void user::addCredit_Card(string cc){
  if(credit_card.empty()){
   credit_card = cc;
  }
  else{
 cout <<" Já existe um Cartão de Crédito para esse usuário" << endl;
  }
}
