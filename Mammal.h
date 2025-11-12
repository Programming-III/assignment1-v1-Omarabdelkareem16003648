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


class Bird : public Animal {
private:
    float wingSpan;

public:
    Bird(string n, int a, bool hungry, float ws)
        : Animal(n, a, hungry), wingSpan(ws) {}

    void display()   {
        cout << "Animal Type: Bird" << endl;
        Animal::display();
        cout << "Wing Span: " << wingSpan << " meters" << endl;
        
    }
};






#endif
