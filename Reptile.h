#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile :{
private:
    bool isVenomous;

public:
    Reptile(string n, int a, bool hungry, bool venom)
        : Animal(n, a, hungry), isVenomous(venom) {}

    void display() const override {
        cout << "Animal Type: Reptile" << endl;
        Animal::display();
        cout << "Venomous: " << (isVenomous ? "Yes" : "No") << endl;
       
    }
};









#endif
