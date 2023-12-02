#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Starmie : public Pokemon, moves
{

public:
    Starmie()
    {
        (this->type).push_back("water");
        (this->type).push_back("psychic");
        this->name = "Starmie";
        this->hp = 60;
        this->atk = 75;
        this->def = 85;
        this->sp_atk = 100;
        this->sp_def = 85;
        this->speed = 115;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return surf(sp_atk);
    }
    container move2()
    {
        return psychic(atk);
    }
    container move3()
    {
        return thunder_wave();
    }
    container move4()
    {
        return recover();
    }
};
