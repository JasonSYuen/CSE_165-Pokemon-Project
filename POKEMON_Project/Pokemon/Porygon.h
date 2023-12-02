#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Porygon : public Pokemon, moves
{

public:
    Porygon()
    {
        (this->type).push_back("normal");
        this->name = "Porygon";
        this->hp = 65;
        this->atk = 60;
        this->def = 70;
        this->sp_atk = 85;
        this->sp_def = 75;
        this->speed = 40;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return blizzard(sp_atk);
    }
    container move2()
    {
        return psychic(sp_atk);
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
