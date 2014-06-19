

#include <iostream>
#include <string>

using namespace std;

/////////////////////// Factory Design Pattern //////////////////////////
/*
 * Uzywamy gdy potrzebujemy sposobu na uzyskanie szeregu klas dziedziczacych
 * po jakiejs klasie bazowej. Klasa jest wybierana w czasie runtime'owym.
 */


class EnemyShip {
public:
    virtual string getName() { return name ; }
    virtual void   setName(string newName) { name = newName; }

    virtual double getDamage() { return amtDamage; }
    virtual void   setDamage(double newDamage) { amtDamage = newDamage; }

    virtual void followHeroShip() {
        cout << getName() << " is following the hero";
    }

    virtual void displayEnemyShip() {
        cout << getName() << " is on the screen";
    }

    virtual void enemyShipShoots() {
        cout << getName() << " attacks and does" << getDamage();
    }

private:
    string name;
    double amtDamage;
};

class UFOEnemyShip : public EnemyShip {
public:
    UFOEnemyShip() {
        setName("UFO Enemy Ship");
        setDamage(20.0);
    }
};

class RocketEnemyShip : public EnemyShip {
public:
    RocketEnemyShip() {
        setName("Rocket Enemy Ship");
        setDamage(10.0);
    }
};

class EnemyShipFactory {
public:
    static EnemyShip * makeEnemyShip(string newShipType) {
        if(newShipType == "U")
            return new UFOEnemyShip;
        else if(newShipType == "R")
            return new RocketEnemyShip;
        else return NULL;
    }
};

void factory_test() {
   string userInput;

   cout << "Jaki statek mam wyprodukowac? (U / R)" << endl;
   cin >> userInput;

   EnemyShip & theEnemy = *(EnemyShipFactory::makeEnemyShip(userInput));
    {
       cout << theEnemy.getName() << endl;
       cout << theEnemy.getDamage() << endl;
   }

}
