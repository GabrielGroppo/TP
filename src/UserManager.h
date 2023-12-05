#ifndef USERMANAGER_H
#define USERMANAGER_H
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include "Flight.h"
#include "User.h"

class UserManager{
    public:
        UserManager(FlightManager& System);
        void addUser(user& passenger);
        user& returnUser(std::string name, std::string password);
        void UpdatePassenger();
        bool validName(std::string name);
        //bool validCpf(long int cpf);
        bool validPassword(std::string name,std::string password);
    private:
        std::vector<user> users_;
        
};
#endif