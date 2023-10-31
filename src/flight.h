#ifndef FLIGHT_H
#define FLIGHT_H
#include<iostream>
#include<string>
#include<vector>
//#include<utility>

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
};// struct que permite interface entre usuario e voo
class Flight{
    private:
    int voo;
    location origin;
    location destination;
    Time hour;
    double price;
    int seats;
    std::vector<std::pair<bool,std::string>> seat;

    public:
    Flight();
    Flight(int nome,location o, location d, Time h, double p, int q);// construtores
    void addCodigoVoo(int nome);
    void addDestinationCity(std::string city);
    void addDestinationCountry(std::string country);
    void addOriginCity(std::string city);
    void addOriginCountry(std::string country);
    void addTimeHour(int hr);
    void addTimeMinute(int min);
    void addPrice(double p);
    void addSeat(int q);//aceptores de construção
    bool seatCheck(int n, std::string name);// true se for do name
    bool flightCheck(int codigo);// true se o codigo for igual
    double returnPrice();
    ticket getSeat(int n, std::string name);
    void cancelSeat(int n, std::string name);
    void printFlight(std::string name);
    std::vector<int> printseats();// interface primaria entre usuario e o voo


};
#endif