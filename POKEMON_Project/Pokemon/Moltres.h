#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Moltres : public Pokemon, moves
{
public:
    Moltres()
    {
        (this->type).push_back("fire");
        (this->type).push_back("flying");
        this->name = "Moltres";
        this->hp = 90;
        this->atk = 100;
        this->def = 90;
        this->sp_atk = 125;
        this->sp_def = 85;
        this->speed = 90;
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
        return peck(atk);
    }
    container move4()
    {
        return agility();
    }
};
