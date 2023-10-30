#ifndef FLIGHT_H
#define FLIGHT_H
#include<iostream>
#include<string>
#include<vector>


class Flight{
    private:
        struct location{
            std::string city;
            std::string country;
        };

        struct time{
            int hour;
            int minutes;
        };

            location origin;
            location destination;
            time hour;
            double price;
            int seats;
            std::vector<bool> seat;

    public:
    Flight();
    Flight(location o, location d, time h, double p, int q);
    void addDestination(std::string city, std::string country);
    location printdestination();
    void addOrigin(std::string city, std::string country);
    location printorigin();
    void addTime(int hr, int min);
    time printtime();
    void addPrice(double p);
    double printprice();
    void addSeat(int q);
    void getSeat(int n);
    void cancelSeat(int n);
    std::vector<int> printseats();
};









#endif