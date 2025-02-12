#include "enseignant.h"

int main() {
    Enseignant enseignant("Dr. Dupont", 40, "Mathématiques");
    enseignant.display();
    enseignant.enseigner();
    return 0;
}