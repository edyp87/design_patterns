
#include <iostream>
#include <string>

using namespace std;

/////////////////////// Singleton Design Pattern //////////////////////////
/*
 * Uzywany w sytuacji kiedy chcemy utworzyc najwyzej jeden obiekt danego typu.
 *   Na przyklad w sytuacji gdy chcemy gdzies przetrzymac jakies stale wartosci.
 *   Albo poszukujemy klasy bedacej menadzerem pewnego procesu.
 */


class Singleton {
public:
    static Singleton & getInstance() {
        static Singleton newSingleton;
        return newSingleton;
    }

private:
    Singleton() {}
};
