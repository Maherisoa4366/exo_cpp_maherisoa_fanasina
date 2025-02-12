#include "etablissement.h"

Établissement::Établissement(const string& nom, const string& adresse)
    : nom(nom), adresse(adresse) {}

void Établissement::display() const {
    cout << "Établissement: " << nom << ", Adresse: " << adresse << endl;
}