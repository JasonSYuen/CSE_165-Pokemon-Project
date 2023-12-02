#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Gyarados : public Pokemon, moves
{

public:
    Gyarados()
    {
        (this->type).push_back("water");
        (this->type).push_back("flying");
        this->name = "Gyarados";
        this->hp = 95;
        this->atk = 125;
        this->def = 79;
        this->sp_atk = 60;
        this->sp_def = 100;
        this->speed = 81;
    };

    void speak() override
    {
        cout << name << endl;
    }
    container move1()
    {
        return body_slam(atk);
    }
    container move2()
    {
        return blizzard(sp_atk);
    }
    container move3()
    {
        return hydro_pump(sp_atk);
    }
    container move4()
    {
        return thunderbolt(atk);
    }
};
