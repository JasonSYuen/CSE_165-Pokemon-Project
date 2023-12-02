#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Articuno : public Pokemon, moves
{

public:
    Articuno()
    {
        (this->type).push_back("ice");
        (this->type).push_back("flying");
        this->name = "Articuno";
        this->hp = 90;
        this->atk = 85;
        this->def = 100;
        this->sp_atk = 95;
        this->sp_def = 125;
        this->speed = 85;
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
        return double_edge(atk);
    }
    container move3()
    {
        return hyper_beam(atk);
    }
    container move4()
    {
        return agility();
    }
};
