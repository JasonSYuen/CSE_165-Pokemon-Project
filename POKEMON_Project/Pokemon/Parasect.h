#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Parasect : public Pokemon, moves
{
public:
    Parasect()
    {
        (this->type).push_back("bug");
        (this->type).push_back("grass");
        this->name = "Parasect";
        this->hp = 60;
        this->atk = 95;
        this->def = 80;
        this->sp_atk = 60;
        this->sp_def = 80;
        this->speed = 30;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return swords_dance();
    }
    container move2()
    {
        return hyper_beam(atk);
    }
    container move3()
    {
        return spore();
    }
    container move4()
    {
        return stun_spore();
    }
};
