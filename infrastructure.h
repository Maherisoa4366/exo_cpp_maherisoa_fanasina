#ifndef INFRASTRUCTURE_H
#define INFRASTRUCTURE_H

#include <iostream>
#include <string>
using namespace std;

class Infrastructure {
public:
    string type;
    string localisation;

    Infrastructure(const string& type, const string& localisation);
    void display() const;
};

#endif // INFRASTRUCTURE_H