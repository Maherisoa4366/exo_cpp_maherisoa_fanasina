#include "etudiant.h"

Étudiant::Étudiant(const string& name, int age, const string& niveauÉtudes)
    : Person(name, age), niveauÉtudes(niveauÉtudes) {}

void Étudiant::étudier() const {
    cout << name << " est en train d'étudier." << endl;
}

void Étudiant::display() const {
    Person::display();
    cout << "Niveau d'études: " << niveauÉtudes << endl;
}