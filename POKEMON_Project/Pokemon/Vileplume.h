#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Vileplume : public Pokemon, moves
{

public:
    Vileplume()
    {
        (this->type).push_back("grass");
        (this->type).push_back("poison");
        this->name = "Vileplume";
        this->hp = 75;
        this->atk = 80;
        this->def = 85;
        this->sp_atk = 110;
        this->sp_def = 90;
        this->speed = 50;
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
        return razor_leaf(sp_atk);
    }
};
