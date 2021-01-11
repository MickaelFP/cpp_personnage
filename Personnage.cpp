#include "Personnage.h"

int Personnage::getPv()
{
    return pv;
}

void Personnage::setPv(int s) {
    if (s > 1000 || s < 0) {
        cerr << "pv non autorise" << endl;
        pv = 0
    }
    else {}
        pv = s;
    }
}

string Personnage::getNom()
{
    return nom;
}

void Personnage::setNom(int s) {  
        nom = 0
}

int Personnage::getAttack()
{
    return attack;
}

void Personnage::setAttack(int a) {
    if (a < 0) {
        cerr << "attack non autorise" << endl;
        attack = 0
    }
    else {}
        attack = a;
    }
}

int Personnage::getDefense()
{
    return defense;
}

void Personnage::setDefense(int d) {
    if (d < 0) {
        cerr << "defense non autorise" << endl;
        defense = 0
    }
    else {}
        defense = d;
    }
}

int Personnage::getPercentCrit()
{
    return defense;
}

void Personnage::setPercentCrit(int c) {
    if (c > 1 || c < 0) {
        cerr << "percentCrit non autorise" << endl;
        percentCrit = 0
    }
    else {}
        percentCrit = c;
    }
}

void Personnage::showInfos()
{
    cout << "nom : " << getNom() << endl;
    cout << "pv : " << getPv() << endl;
    cout << "attack : " << getAttack() << endl;
    cout << "defense : " << getDefense() << endl;
    cout << "crit : " << getPercentCrit() << endl;
}