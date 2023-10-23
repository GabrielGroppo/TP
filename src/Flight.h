#ifndef FLIGHT_H
#define FLIFHT_H
#include<iostream>
#include<string>
#include<vector>
    using std::string, std::vector;
class Flight{
    private:
        string origin;
        string destination;
        double price;
        int hour;
        int minutes;
        vector<int> seat;

    public:
        Flight(string origin, string destination, double price, int hoour, int min, int seat);
        void availableSeats();

};









#endif