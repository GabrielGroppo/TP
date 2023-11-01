#include<iostream>
#include "src/FlightS.h"
#include "src/Flight.h"
#include<string>
#include<vector>
#include<fstream>

Flights::Flights(){
    std::ifstream arquivo;
        arquivo.open("Dados_Vôos/Voos.txt");
            if(!arquivo.is_open()){
                std::cerr << "Erro ao abrir o txt" << std::endl;
            }

                std::string aux;
                Flight aux_voo;
                int contador = 0;
                    while(arquivo >> aux){
                        if(contador == 0){
                            aux_voo.addFlightCode(std::stoi(aux));
                            contador++;
                            continue;
                        }
                        if(contador == 1){
                            aux_voo.addOriginCity(aux);
                            contador++;
                            continue;
                        }
                        else if(contador == 2){
                            aux_voo.addOriginCountry(aux);
                            contador++;
                            continue;
                        }
                        else if(contador == 3){
                            aux_voo.addDestinationCity(aux);
                            contador++;
                            continue;
                        }
                        else if(contador == 4){
                            aux_voo.addDestinationCountry(aux);
                            contador++;
                            continue;
                        }
                        else if(contador == 5){
                            aux_voo.addTimeHour(std::stoi(aux));
                            contador++;
                            continue;
                        }
                        else if(contador == 6){
                            aux_voo.addTimeMinute(std::stoi(aux));
                            contador++;
                            continue;
                        }
                        else if(contador == 7){
                            aux_voo.addPrice(std::stod(aux));
                            contador++;
                            continue;
                        }
                        else if(contador == 8){
                            aux_voo.addSeat(std::stoi(aux));
                            flights_.push_back(aux_voo);
                            contador = 0;
                            continue;
                        }

                    }
    arquivo.close();
}

void Flights::changeFlight(int codigo, int seat){
    flights_[codigo-1].getSeat(seat);
}

void Flights::addFlight(Flight x){
    flights_.push_back(x);
}

void Flights::showFlights(){
    for(int a = 0; a < flights_.size(); a++){
        flights_[a].printFlight();

    }
}

Flight Flights::returnFlight(int codigo){
    for(int a = 0; a < flights_.size(); a++){
        if(codigo == flights_[a].code()){
            return flights_[a];
        }
    }
    return flights_[codigo];
}