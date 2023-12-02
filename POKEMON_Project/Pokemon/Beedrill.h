#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Beedrill : public Pokemon, moves
{

public:
    Beedrill()
    {
        (this->type).push_back("bug");
        (this->type).push_back("poison");
        this->name = "Beedrill";
        this->hp = 65;
        this->atk = 90;
        this->def = 40;
        this->sp_atk = 45;
        this->sp_def = 80;
        this->speed = 75;
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
        return swords_dance();
    }
    container move3()
    {
        return twineedle(atk);
    }
    container move4()
    {
        return hyper_beam(atk);
    }
};
