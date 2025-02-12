#include "enseignant.h"

Enseignant::Enseignant(const string& name, int age, const string& matière)
    : Person(name, age), matière(matière) {}

void Enseignant::enseigner() const {
    cout << name << " est en train d'enseigner " << matière << "." << endl;
}

void Enseignant::display() const {
    Person::display();
    cout << "Matière enseignée: " << matière << endl;
}