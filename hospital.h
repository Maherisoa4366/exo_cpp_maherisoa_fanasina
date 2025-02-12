#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "etablissement.h"
#include "medecin.h"
#include <vector>
using namespace std;

class Hospital : public Établissement {
public:
    vector<Médecin*> médecins;

    Hospital(const string& nom, const string& adresse);
    void ajouterMédecin(Médecin* médecin);
    void display() const override;
};

#endif // HOSPITAL_H