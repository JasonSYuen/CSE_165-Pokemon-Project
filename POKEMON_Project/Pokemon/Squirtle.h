#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Squirtle : public Pokemon, moves
{

public:
    Squirtle()
    {
        (this->type).push_back("water");
        this->name = "Squirtle";
        this->hp = 44;
        this->atk = 48;
        this->def = 65;
        this->sp_atk = 50;
        this->sp_def = 64;
        this->speed = 43;
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
        return surf(sp_atk);
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
