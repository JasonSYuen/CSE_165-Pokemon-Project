#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Dragonite : public Pokemon, moves
{

public:
    Dragonite()
    {
        (this->type).push_back("dragon");
        (this->type).push_back("flying");
        this->name = "Dragonite";
        this->hp = 91;
        this->atk = 134;
        this->def = 95;
        this->sp_atk = 100;
        this->sp_def = 100;
        this->speed = 80;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return agility();
    }
    container move2()
    {
        return blizzard(sp_atk);
    }
    container move3()
    {
        return body_slam(atk);
    }
    container move4()
    {
        return thunderbolt(sp_atk);
    }
};
