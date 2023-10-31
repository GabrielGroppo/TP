#ifndef USER_H
#define USER_H
#include<iostream>
#include<string>
#include<list>
#include "flight.h"
#include "flightS.h"
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
        void addCredit_Card(string cc);
        void checkTickets ();// mostra todos os tickets que o usuario possui do mais proximo do voo ao mais distante
        void cancelTicket (int codigo_voo, int seat, Flights System);
        void pay(int n);
        void printDebit();
        void buyTicket(int codigo_voo, int seat, Flights System);
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
