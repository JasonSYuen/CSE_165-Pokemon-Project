
#include <iostream>
#include "IncludeEverything.h"
#include "Roster.h"
#include "trainer.h"

using namespace std;

int main()
{
    srand(time(NULL)); // makes srand

    Charmander *a = new Charmander(); // make a charmander
    (*a).speak();                     // see name
    (*a).stats();                     // see stats
    Bulbasaur *b = new Bulbasaur();
    (*b).speak();
    (*b).stats();

    Roster *list = new Roster(); // make roster

    (*list).add(a); // add to roster
    (*list).add(b);
    (*list).print(); // print out roster

    cout << (*a).move1().total_attack_damage << endl; // look at move damage (atk * pp)
    cout << (*a).move1().damagetype << endl;          // look at damage type (grass, water, etc)
    cout << (*a).move1().special_or_not << endl;      // what type of damage (special/not)

    Vileplume *v = new Vileplume();
    (*list).add(v);

    (*list).print();

    trainer *user = new trainer("george"); // make trainer   (trainers are pretty much just rosters)

    (*user).r.add(a); // add pokemon to trainer roster

    (*user).r.print(); // print trainer roster

    for (int i = 0; i < 10; i++)
    {
        cout << (*b).move2().status << endl; // checks to see if status goes off
    }
};