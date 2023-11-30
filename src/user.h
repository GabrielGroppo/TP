#ifndef USER_H
#define USER_H
#include<iostream>
#include<string>
#include<list>
#include "flight.h"
#include "FlightManager.h"
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
        void cancelTicket (int codigo_voo, int seat, FlightManager& System);
        void buyTicket(int codigo_voo, int seat, FlightManager& System);
    private:
        string name;
        string email;
        string password;
        int cpf;
        int credit_card;
        int credit_card_debit;
        std::list<ticket> tickets_;

};
#endif
