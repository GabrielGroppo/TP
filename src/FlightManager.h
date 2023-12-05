#ifndef FLIGHTMANAGER_H
#define FLIGHTMANAGER_H
#include<iostream>
#include<vector>
#include<string>
#include "Flight.h"

class FlightManager{
    public:
        FlightManager();
        void changeFlight(int codigo, int seat);
        void addFlight(Flight);
        void showFlights();
        Flight& returnFlight(int n);
        int manyFlights();
    private:
        std::vector<Flight> flights_;
};
#endif