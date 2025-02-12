#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "person.h"
#include <string>
using namespace std;

class Étudiant : public Person {
public:
    string niveauÉtudes;

    Étudiant(const string& name, int age, const string& niveauÉtudes);
    void étudier() const;
    void display() const override;
};

#endif // ETUDIANT_H