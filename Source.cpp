#include "Personnage.h"

int main() {

	Personnage p1;
	p1.setNom("Jean");
	p1.setAttack(50);
	p1.setDefense(20);
	p1.setPercentCrit(0.2);
	p1.showInfos();
	cout << endl;

	cout << "	personnage 2  " << endl;
	Personnage p2(p1);
	p2.showInfos();
	cout << endl;

	p1.~Personnage();

	cout << "	personnage 3  " << endl;
	Personnage p3(200,50,0.2);
    p3.showInfos();
	cout << endl;

	cout << "	personnage 4 " << endl;
	Personnage p4("Romain");
    p4.showInfos();
	cout << endl;

	cout << "Attack de p4 = "<<p4.getAttack()<<endl;
	cout << "PV de P3 = "<<p3.getPv()<<endl;

    cout <<"ATTACK"<<endl;
	p4.attackPlayer(&p3);

	cout << "Attack de p4 = "<<p4.getAttack()<<endl;
	cout << "PV de P3 = "<<p3.getPv()<<endl;

	cout << "heal de p2 = "<<p2.getHeal()<<endl;
	cout << "PV de P3 = "<<p3.getPv()<<endl;

    cout <<"HEAL"<<endl;
	p2.healPlayer(&p3);

	cout << "heal de p2 = "<<p2.getHeal()<<endl;
	cout << "PV de P3 = "<<p3.getPv()<<endl;

    return 0;
}
