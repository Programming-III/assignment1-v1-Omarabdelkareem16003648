#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal: {
private:
    string furColor;

public:
    Mammal(string n, int a, bool hungry, string color)
        : Animal(n, a, hungry), furColor(color) {}

    void display( {
        cout << "Animal Type: Mammal" << endl;
        Animal::display();
      
    }
};
#endif









#endif
