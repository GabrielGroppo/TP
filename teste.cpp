#include<iostream>
#include "src/Flight.h"
#include "src/FlightS.h"
#include "src/User.h"
#include<vector>
#include<string>
    using std::endl, std::cout, std::cin;
int main(){
    Flights Sistema;
    user usuario;
        Sistema.showFlights();
        std::string aux;
        std::cin >> aux;
        usuario.addName(aux);
        std::cin >> aux;
        usuario.addCpf(std::stol(aux));
        std::cin >> aux;
        usuario.addEmail(aux);
        std::cin >> aux;
        usuario.addPassword(aux);
        std::cin >> aux;
        usuario.addCredit_Card(std::stol(aux));
        usuario.perfil();  
        usuario.buyTicket(50, 1, Sistema);
        usuario.checkTickets();
        usuario.cancelTicket(50, 1, Sistema);
        usuario.checkTickets();
        


    
















    return 0;
}