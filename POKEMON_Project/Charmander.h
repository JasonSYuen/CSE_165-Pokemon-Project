#include <iostream>
#include <string>
#include <vector>
#include "BasePokemon.h"
#include "moves.h"

#pragma once

using namespace std;

class Charmander : public Pokemon, moves
{
    // string name = "Charmander";

public:
    Charmander()
    {
        (this->type).push_back("fire");
        this->name = "Charmander";
        this->hp = 39;
        this->atk = 52;
        this->def = 43;
        this->sp_atk = 60;
        this->sp_def = 50;
        this->speed = 65;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return scratch(atk);
    }
};
