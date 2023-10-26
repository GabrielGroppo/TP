#ifndef FLIGHTS_H
#define FLIGHTS_H
#include<iostream>
#include<vector>
#include<string>
#include "Flight.h"

class Flights{
    private:
    std::vector<Flight> flights_;

    public:
        void addFlight(Flight);
};
































#endif