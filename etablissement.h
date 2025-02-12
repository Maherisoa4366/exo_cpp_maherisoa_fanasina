#ifndef ETABLISSEMENT_H
#define ETABLISSEMENT_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Établissement {
public:
    string nom;
    string adresse;

    Établissement(const string& nom, const string& adresse);
    void display() const;
};

#endif // ETABLISSEMENT_H