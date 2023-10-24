#include <iostream>
#include "stdlib.h"

class Client {

    public:
        Client(std::string _prenom, std::string _nom, int _age);
        std::string get_prenom;
        std::string get_nom;
        int get_age;

    private:
        std::string _prenom;
        std::string _nom;
        int _age;

};