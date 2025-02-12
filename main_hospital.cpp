#include "hospital.h"
#include "medecin.h"

int main() {
    Hospital hôpital("Hôpital Général", "456 Rue de la Santé");
    Médecin médecin1("Dr. Johnson", 50, "Neurologie");
    Médecin médecin2("Dr. Lee", 55, "Pédiatrie");

    hôpital.ajouterMédecin(&médecin1);
    hôpital.ajouterMédecin(&médecin2);
    hôpital.display();
    return 0;
}