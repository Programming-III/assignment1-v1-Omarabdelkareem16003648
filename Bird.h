#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird :  {
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
