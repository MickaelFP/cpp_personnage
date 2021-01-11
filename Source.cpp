#include "Personnage.h"

int main() {
    string test;
    Personnage p1;
    p1.setPv(1000);
    p1.setAttack(100);
    p1.setDefense(100);
    p1.setPercentCrit(0;2);
    cout << "Pv du personnage 1 : " << p1.pv << endl;
    p1.showInfos();

    Personnage p2;
    p2.setPv(500);
    p2.setAttack(50);
    p2.setDefense(50);
    p2.setPercentCrit(0.5);
    cout << "Pv du personnage 2 : " << p2.pv << endl;
    p2.showInfos();
    return 0;
}