#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Tauros : public Pokemon, moves
{
public:
    Tauros()
    {
        (this->type).push_back("normal");
        this->name = "Tauros";
        this->hp = 75;
        this->atk = 100;
        this->def = 95;
        this->sp_atk = 40;
        this->sp_def = 70;
        this->speed = 110;
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
        return body_slam(atk);
    }
    container move3()
    {
        return earthquake(atk);
    }
    container move4()
    {
        return hyper_beam(atk);
    }
};
