public 

#include <iostream>
#include <string>
using namespace std;


class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal(string n, int a, bool hungry)
        : name(n), age(a), isHungry(hungry) {}

     ~Animal() {} 

     void display()  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        
    }

     void feed() {
        if (isHungry) {
            cout << name << " is being fed. Now not hungry." << endl;
            isHungry = false;
        } else {
            cout << name << " is not hungry right now." << endl;
        }
    }
};
