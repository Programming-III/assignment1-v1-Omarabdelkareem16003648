#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor {
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor(string name, int tickets)
        : visitorName(name), ticketsBought(tickets) {}

    void displayInfo() const {
      
    }
};








#endif
