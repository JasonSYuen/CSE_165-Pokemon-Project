#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Arcanine : public Pokemon, moves
{

public:
    Arcanine()
    {
        (this->type).push_back("fire");
        this->name = "Arcanine";
        this->hp = 90;
        this->atk = 110;
        this->def = 80;
        this->sp_atk = 100;
        this->sp_def = 80;
        this->speed = 95;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return fire_blast(sp_atk);
    }
    container move2()
    {
        return hyper_beam(atk);
    }
    container move3()
    {
        body_slam(atk);
    }
    container move4()
    {
        reflect();
    }
};
