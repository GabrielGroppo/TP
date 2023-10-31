#include"src/Flight.h"
#include<iostream>
#include<string>
#include<vector>

Flight::Flight(){
        destination.city = " ";
        destination.country = " ";
        origin.city = " ";
        origin.country = " ";
        price = 0.00;
        seats = 0;
        codigo_voo = 0;
}

void Flight::addDestinationCity(std::string city){
        destination.city=city;    
}

void Flight::addDestinationCountry(std::string country){
        destination.country=country;    
}

void Flight::addOriginCity(std::string city){
        origin.city=city;
}

void Flight::addOriginCountry(std::string country){
        origin.country=country;
}

void Flight::addTimeHour(int hr){
        hour.hour=hr;
}

void Flight::addTimeMinute(int min){
        hour.minutes=min;
}

void Flight::addPrice(double p){
        price=p;
}

void Flight::addFlightCode(int c){
        codigo_voo = c;
}

int Flight::code(){
        return codigo_voo;
}

void Flight::addSeat(int q){
        seats = q;
        seat = std::vector<bool>(q,0);
}

bool Flight::seatCheck(int n){  // 0 : DISPONÍVEL || 1: OCUPADO
    return seat[n-1];
}


double Flight::returnPrice(){
    return price;
}

ticket Flight::getSeat(int n){
    if(0<=n-1&&n-1<=seats){
        if(!(seat[n-1])){
            seat[n-1] = 1;
        }
    }
    return ticket {codigo_voo,origin,destination,hour,n,price};
}

void Flight::cancelSeat(int n){
    if(0<=n-1&&n-1<=seats){
        if(seat[n-1]){
            seat[n-1] = 0;
        }
    }
    else{
        std::cout << "Assento Desocupado" << std:: endl;
    }
    
}

void Flight::printFlight(){
        std::cout << "Origem: " << origin.city << ", " << origin.country << std::endl
                  << "Destino: " << destination.city  << ", "      << destination.country << std::endl
                  << "Horario: " << hour.hour << ":"<< hour.minutes  << std::endl
                  << "preco: R$" << price << std::endl
                  << "Assentos: " << seats << std::endl
                  << std::endl << "-----------------------" << std::endl;

}

void Flight::printseats(){
   std::cout << " 0 : Disponivel" << std::endl
             << " 1 : Ocupado" << std::endl;

        for(int i=0;i<seats;i++){
                std::cout << i+1 <<" : " << seat[i] << " | "; 
        }

}