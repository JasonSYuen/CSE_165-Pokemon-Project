#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Nidoqueen : public Pokemon, moves
{
public:
    Nidoqueen()
    {
        (this->type).push_back("poison");
        (this->type).push_back("ground");
        this->name = "Nidoqueen";
        this->hp = 90;
        this->atk = 92;
        this->def = 87;
        this->sp_atk = 75;
        this->sp_def = 85;
        this->speed = 76;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return earthquake(atk);
    }
    container move2()
    {
        return thunderbolt(sp_atk);
    }
    container move3()
    {
        return blizzard(sp_atk);
    }
    container move4()
    {
        return fire_blast(sp_atk);
    }
};
