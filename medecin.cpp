#include "medecin.h"

Médecin::Médecin(const string& name, int age, const string& spécialité)
    : Person(name, age), spécialité(spécialité) {}

void Médecin::soigner() const {
    cout << name << " est en train de soigner des patients en " << spécialité << "." << endl;
}

void Médecin::display() const {
    Person::display();
    cout << "Spécialité: " << spécialité << endl;
}