#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(const string& name, int age);
    virtual void display() const;
};

#endif // PERSON_H