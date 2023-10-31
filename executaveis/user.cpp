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