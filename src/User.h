// #ifndef USER_H
// #define USER_H
// #include<iostream>
// #include<string>
// #include "Flight.h"
//     using std::string;
// class user {
//     public:
//         user();
//         void addName(string);
//         void addCpf(int);
//         void addEmail(string);
//         void addPassword(string);
//         void addCredit_Card(string);
//         void checkTickets ();
//         void cancelTicket (Flight);
//         Flight buyTicket(string origin, string destination, int hour, int min, int seat);
//     private:
//         string name;
//         string email;
//         string password;
//         int cpf;
//         int credit_card;
//         Flight tickets;

// };









// #endif 

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
        void addName(string name);
        void changeName(string name);
        void addCpf(int cpf);
        void addEmail(string email);
        void changeEmail(string email);
        void addPassword(string password);
        void changePassword(string old_password,string new_password);
        void addCredit_Card(int cc);
        void checkTickets ();// mostra todos os tickets que o usuario possui do mais proximo do voo ao mais distante
        void cancelTicket (int codigo_voo, int seat, Flights System);
        void buyTicket(int codigo_voo, int seat, Flights System);
        void pay(int n);
        void printDebit();
    private:
        string name_;
        string email_;
        string password_;
        int cpf_;
        int credit_card;
        int credit_card_debit;
        std::list<ticket> tickets_;

};
#endif