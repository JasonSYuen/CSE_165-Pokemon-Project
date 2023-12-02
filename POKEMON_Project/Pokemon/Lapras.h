#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Lapras : public Pokemon, moves
{

public:
    Lapras()
    {
        (this->type).push_back("water");
        (this->type).push_back("ice");
        this->name = "Lapras";
        this->hp = 130;
        this->atk = 85;
        this->def = 80;
        this->sp_atk = 85;
        this->sp_def = 90;
        this->speed = 60;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return sing();
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
        return hyper_beam(atk);
    }
};
