#include <iostream>
using namespace std;
#include <vector>
#include <typeinfo>
#include "BasePokemon.h"
#pragma once
class Roster
{

    vector<Pokemon *> listOfPokemon;

public:
    Roster()
    {
    }

    void add(Pokemon *p)
    {
        listOfPokemon.push_back(p);
    }

    void print()
    {
        for (int i = 0; i < listOfPokemon.size(); i++)
        {
            listOfPokemon[i]->speak();
        }
    }
};