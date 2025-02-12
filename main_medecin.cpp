#include "medecin.h"

int main() {
    Médecin médecin("Dr. Smith", 45, "Cardiologie");
    médecin.display();
    médecin.soigner();
    return 0;
}