#ifndef FLIGHT_H
#define FLIGHT_H
#include<iostream>
#include<vector>
#include<string>
struct location{
    std::string city;
    std::string country;
};

struct Time{
        int hour;
        int minutes;
};

struct ticket{
        int voo;
        location origin;
        location destination;
        Time hour;
        int seat;
        double price;
};

class Flight{
    private:
        int codigo_voo;
        location origin;
        location destination;
        Time hour;
        double price;
        int seats;
        std::vector<bool> seat;

    public:
        Flight();
        Flight(location o, location d, Time h, double p, int q);// construtores
        void addDestinationCity(std::string city);
        void addDestinationCountry(std::string country);
        void addOriginCity(std::string city);
        void addOriginCountry(std::string country);
        void addTimeHour(int hr);
        void addTimeMinute(int min);
        void addPrice(double p);
        void addFlightCode(int c);
        int code();
        void addSeat(int q);
        int returnSeats();
        bool seatCheck(int n);
        double returnPrice();
        void getSeat(int n);
        ticket getTicket(int n);
        void cancelSeat(int n);
        void printFlight();
        void printseats();// interface primaria entre usuario e o voo


};
#endif