#include "person.h"

Person::Person(const string& name, int age) : name(name), age(age) {}

void Person::display() const {
    cout << "Nom: " << name << ", Âge: " << age << endl;
}