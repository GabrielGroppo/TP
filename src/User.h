#ifndef USER_H
#define USER_H
#include<iostream>
#include<string>
#include "Flight.h"
    using std::string;
class user {
    public:
        user();
        void addName(string);
        void addCpf(int);
        void addEmail(string);
        void addPassword(string);
        void addCredit_Card(string);
        void checkTickets ();
        void cancelTicket (Flight);
        Flight buyTicket(string origin, string destination, int hour, int min, int seat);
    private:
        string name;
        string email;
        string password;
        int cpf;
        int credit_card;
        Flight tickets;

};









#endif 