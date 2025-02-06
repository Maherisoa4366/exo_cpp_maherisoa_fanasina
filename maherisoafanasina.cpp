#include <iostream>
using namespace std;

// Classe Rationnelle
class Rationnelle {
private:
    int numerateur;
    int denominateur;

    // Fonction pour simplifier la fraction
    void simplifier() {
        int pgcd = calculerPGCD(numerateur, denominateur);
        numerateur /= pgcd;
        denominateur /= pgcd;
        if (denominateur < 0) { // Assurer que le dénominateur est positif
            numerateur = -numerateur;
            denominateur = -denominateur;
        }
    }

    // Fonction pour calculer le PGCD (Plus Grand Commun Diviseur)
    int calculerPGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    // Constructeur
    Rationnelle(int num = 0, int den = 1) : numerateur(num), denominateur(den) {
        if (denominateur == 0) {
            throw invalid_argument("Le dénominateur ne peut pas être zéro.");
        }
        simplifier();
    }

    // Getters
    int getNumerateur() const { return numerateur; }
    int getDenominateur() const { return denominateur; }

    // Surcharge des opérateurs
    Rationnelle operator+(const Rationnelle& autre) const {
        int num = numerateur * autre.denominateur + autre.numerateur * denominateur;
        int den = denominateur * autre.denominateur;
        return Rationnelle(num, den);
    }

    Rationnelle operator-(const Rationnelle& autre) const {
        int num = numerateur * autre.denominateur - autre.numerateur * denominateur;
        int den = denominateur * autre.denominateur;
        return Rationnelle(num, den);
    }

    Rationnelle operator*(const Rationnelle& autre) const {
        int num = numerateur * autre.numerateur;
        int den = denominateur * autre.denominateur;
        return Rationnelle(num, den);
    }

    Rationnelle operator/(const Rationnelle& autre) const {
        if (autre.numerateur == 0) {
            throw invalid_argument("Division par zéro.");
        }
        int num = numerateur * autre.denominateur;
        int den = denominateur * autre.numerateur;
        return Rationnelle(num, den);
    }

    // Surcharge de l'opérateur de sortie
    friend ostream& operator<<(ostream& os, const Rationnelle& r) {
        os << r.numerateur << "/" << r.denominateur;
        return os;
    }
};

// Classe Complexe
class Complexe {
private:
    double reelle;  // Partie réelle
    double imaginaire;  // Partie imaginaire

public:
    // Constructeur
    Complexe(double re = 0.0, double im = 0.0) : reelle(re), imaginaire(im) {}

    // Getters
    double getReelle() const { return reelle; }
    double getImaginaire() const { return imaginaire; }

    // Surcharge des opérateurs
    Complexe operator+(const Complexe& autre) const {
        return Complexe(reelle + autre.reelle, imaginaire + autre.imaginaire);
    }

    Complexe operator-(const Complexe& autre) const {
        return Complexe(reelle - autre.reelle, imaginaire - autre.imaginaire);
    }

    Complexe operator*(const Complexe& autre) const {
        return Complexe(
            reelle * autre.reelle - imaginaire * autre.imaginaire,
            reelle * autre.imaginaire + imaginaire * autre.reelle
        );
    }

    Complexe operator/(const Complexe& autre) const {
        double denominateur = autre.reelle * autre.reelle + autre.imaginaire * autre.imaginaire;
        if (denominateur == 0) {
            throw invalid_argument("Division par zéro.");
        }
        return Complexe(
            (reelle * autre.reelle + imaginaire * autre.imaginaire) / denominateur,
            (imaginaire * autre.reelle - reelle * autre.imaginaire) / denominateur
        );
    }

    // Surcharge de l'opérateur de sortie
    friend ostream& operator<<(ostream& os, const Complexe& c) {
        os << c.reelle;
        if (c.imaginaire >= 0) {
            os << " + " << c.imaginaire << "i";
        } else {
            os << " - " << -c.imaginaire << "i";
        }
        return os;
    }
};

int main() {
    try {
        // Saisie des nombres rationnels
        int num1, den1, num2, den2;
        cout << "=== Saisie des nombres rationnels ===" << endl;
        cout << "Entrez le numérateur du premier nombre rationnel : ";
        cin >> num1;
        cout << "Entrez le dénominateur du premier nombre rationnel : ";
        cin >> den1;
        Rationnelle r1(num1, den1);

        cout << "Entrez le numérateur du deuxième nombre rationnel : ";
        cin >> num2;
        cout << "Entrez le dénominateur du deuxième nombre rationnel : ";
        cin >> den2;
        Rationnelle r2(num2, den2);

        // Affichage des nombres rationnels
        cout << "r1 = " << r1 << endl;
        cout << "r2 = " << r2 << endl;

        // Opérations sur les nombres rationnels
        cout << "r1 + r2 = " << r1 + r2 << endl;
        cout << "r1 - r2 = " << r1 - r2 << endl;
        cout << "r1 * r2 = " << r1 * r2 << endl;
        cout << "r1 / r2 = " << r1 / r2 << endl;

        // Saisie des nombres complexes
        double re1, im1, re2, im2;
        cout << "\n=== Saisie des nombres complexes ===" << endl;
        cout << "Entrez la partie réelle du premier nombre complexe : ";
        cin >> re1;
        cout << "Entrez la partie imaginaire du premier nombre complexe : ";
        cin >> im1;
        Complexe c1(re1, im1);

        cout << "Entrez la partie réelle du deuxième nombre complexe : ";
        cin >> re2;
        cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
        cin >> im2;
        Complexe c2(re2, im2);

        // Affichage des nombres complexes
        cout << "c1 = " << c1 << endl;
        cout << "c2 = " << c2 << endl;

        // Opérations sur les nombres complexes
        cout << "c1 + c2 = " << c1 + c2 << endl;
        cout << "c1 - c2 = " << c1 - c2 << endl;
        cout << "c1 * c2 = " << c1 * c2 << endl;
        cout << "c1 / c2 = " << c1 / c2 << endl;

    } catch (const invalid_argument& e) {
        cerr << "Erreur: " << e.what() << endl;
    }

    return 0;
}