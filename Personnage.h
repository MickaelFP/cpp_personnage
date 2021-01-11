#include <iostream>
#include <string>

using namespace std;

class Personnage
{
private:
    int pv= 100;
    string nom = "Bob";
    int attack = 10;
    int defense = 10;
    float percentCrit = 0,1f;

public:
    int getPv();
    void setPv(int s);

    string getNom();
    void setNom();
    
    int getAttack();
    void setAttack(int a);

    int getDefense();
    void setDefense(int d);

    float getPercentCrit();
    void setPercentCrit(int c);

    void showInfos();
};