#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Nidoking : public Pokemon, moves
{
public:
    Nidoking()
    {
        (this->type).push_back("poison");
        (this->type).push_back("ground");
        this->name = "Nidoking";
        this->hp = 81;
        this->atk = 102;
        this->def = 77;
        this->sp_atk = 85;
        this->sp_def = 75;
        this->speed = 85;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return earthquake(atk);
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
        return rock_slide(atk);
    }
};
