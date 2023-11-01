
#ifndef USER_H
#define USER_H
#include<iostream>
#include<string>
#include<list>
#include "Flight.h"
#include "FlightS.h"
using std::string;
class user{
    public:
        user();
        void perfil();
        void addName(string name);
        void changeName(string name);
        void addCpf(long int cpf);
        void addEmail(string email);
        void changeEmail(string email);
        void addPassword(string password);
        void changePassword(string old_password,string new_password);
        void addCredit_Card(int cc);
        void checkTickets ();// mostra todos os tickets que o usuario possui do mais proximo do voo ao mais distante
        void cancelTicket (int codigo_voo, int seat, Flights& System);
        void buyTicket(int codigo_voo, int seat, Flights& System);
    private:
        string name_;
        string email_;
        string password_;
        long int cpf_;
        long int credit_card;
        std::list<ticket> tickets_;

};
#endif