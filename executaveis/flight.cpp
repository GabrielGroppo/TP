#include "flight.h"

Flight::Flight(){
    int voo=0;
    origin.city="";
    origin.country="";
    destination.city="";
    destination.country="";
    hour.hour=-1;
    hour.minutes=-1;
    price=0.0;
    int seats=0;
    std::vector<std::pair<bool,std::string>> seat;
    
}

Flight::Flight(int nome,location o, location d, Time h, double p, int q){
    voo=nome;
    origin=o;
    destination=d;
    hour=h;
    price=p;
    int seats=q;
    std::pair<bool,std::string> s{false,""};  
    seat.insert (seat.end(),q,s);
}

void Flight::addCodigoVoo(int nome){
    if(!voo){
        voo=nome;
    }
}

void Flight::addDestinationCity(std::string city){
    if((destination.city).size()==0){
        destination.city=city;
    }
}

void Flight::addDestinationCountry(std::string country){
    if((destination.country).size()==0){
        destination.country=country;
    }
}

void Flight::addOriginCity(std::string city){
    if((origin.city).size()==0){
        origin.city=city;
    }
}

void Flight::addOriginCountry(std::string country){
    if((origin.country).size()==0){
        origin.country=country;
    }
}

void Flight::addTimeHour(int hr){
    if(hour.hour==-1){
        hour.hour=hr;
    }
}

void Flight::addTimeMinute(int min){
    if(hour.minutes==-1){
        hour.minutes=min;
    }
}

void Flight::addPrice(double p){
    if(price==0){
        price=p;
    }
}

void Flight::addSeat(int q){
    if(seats==0){
        seats=q;
    }
    std::pair<bool,std::string> s{false,""};  
    seat.insert (seat.end(),q,s);
}

bool Flight::seatCheck(int n, std::string name){
    return (seat[n-1]).second==name;
}

bool Flight::flightCheck(int codigo){
    return voo==codigo;
}

double Flight::returnPrice(){
    return price;
}

ticket Flight::getSeat(int n,std::string name){
    if(0<=n-1&&n-1<=seats){
        if(!(seat[n-1].first)){
            seat[n-1].first=true;
            seat[n-1].second=name;
        }
    }
    return ticket {voo,origin,destination,hour,n,price};
}

void Flight::cancelSeat(int n,std::string name){
    if(0<=n-1&&n-1<=seats){
        if(seat[n-1].first&&(seat[n-1].second==name)){
            seat[n-1].first=false;
            seat[n-1].second="";
        } 
    }
    
}

void Flight::printFlight(std::string name){
    for(int i=0;i<seats;i++){
        
    }
}

std::vector<int> Flight::printseats(){
    std::vector<int> vec;
    for(int i=0;i<seats;i++){
        if((seat[i]).first==false){
            vec.push_back(i);
        }
    }
    return vec;
}