
#include <iostream>
#include "Charmander.h"
#include "Bulbasaur.h"
#include "Roster.h"
using namespace std;

int main()
{
    Charmander *a = new Charmander();
    (*a).speak();
    (*a).stats();
    Bulbasaur *b = new Bulbasaur();
    (*b).speak();
    (*b).stats();

    Roster *list = new Roster();

    (*list).add(a);
    (*list).add(b);
    (*list).print();

    cout << (*a).move1().total_attack_damage << endl;
    cout << (*a).move1().damagetype << endl;
    cout << (*a).move1().special_or_not << endl;
};