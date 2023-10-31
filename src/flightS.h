#ifndef FLIGHTS_H
#define FLIGHTS_H
#include<iostream>
#include<vector>
#include<string>
#include "flight.h"

class Flights{
    private:
    std::vector<Flight> flights_;

    public:
        void addFlight(Flight);
        Flight RetornaVoo(int codigo);
};
#endif