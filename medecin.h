#ifndef MEDECIN_H
#define MEDECIN_H

#include "person.h"
#include <string>
using namespace std;

class Médecin : public Person {
public:
    string spécialité;

    Médecin(const string& name, int age, const string& spécialité);
    void soigner() const;
    void display() const override;
};

#endif // MEDECIN_H