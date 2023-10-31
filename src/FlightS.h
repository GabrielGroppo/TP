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
        Flights();
        void addFlight(Flight);
        void showFlights();
        Flight returnFlight(int n);
};
































#endif