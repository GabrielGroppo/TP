#ifndef FLIGHTS_H
#define FLIGHTS_H
#include<iostream>
#include<vector>
#include<string>
#include "Flight.h"

class Flights{
    public:
        std::vector<Flight> flights_;
        Flights();
        void changeFlight(int codigo, int seat);
        void addFlight(Flight);
        void showFlights();
        Flight returnFlight(int n);
};
































#endif