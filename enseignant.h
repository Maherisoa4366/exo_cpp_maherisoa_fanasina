#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "person.h"
#include <string>
using namespace std;

class Enseignant : public Person {
public:
    string matière;

    Enseignant(const string& name, int age, const string& matière);
    void enseigner() const;
    void display() const override;
};

#endif // ENSEIGNANT_H