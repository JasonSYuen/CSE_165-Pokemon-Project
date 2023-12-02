#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Tangela : public Pokemon, moves
{

public:
    Tangela()
    {
        (this->type).push_back("grass");
        this->name = "Tangela";
        this->hp = 65;
        this->atk = 55;
        this->def = 115;
        this->sp_atk = 100;
        this->sp_def = 40;
        this->speed = 60;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return sleep_powder();
    }
    container move2()
    {
        return stun_spore();
    }
    container move3()
    {
        return body_slam(atk);
    }
    container move4()
    {
        return recover();
    }
};
