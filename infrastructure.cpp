#include "infrastructure.h"

Infrastructure::Infrastructure(const string& type, const string& localisation)
    : type(type), localisation(localisation) {}

void Infrastructure::display() const {
    cout << "Infrastructure: " << type << ", Localisation: " << localisation << endl;
}