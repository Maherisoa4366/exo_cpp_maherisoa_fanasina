#include "hospital.h"

Hospital::Hospital(const string& nom, const string& adresse)
    : Établissement(nom, adresse) {}

void Hospital::ajouterMédecin(Médecin* médecin) {
    médecins.push_back(médecin);
}

void Hospital::display() const {
    Établissement::display();
    cout << "Médecins employés:" << endl;
    for (const auto& médecin : médecins) {
        médecin->display();
    }
}