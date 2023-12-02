#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Gengar : public Pokemon, moves
{

public:
    Gengar()
    {
        (this->type).push_back("ghost");
        (this->type).push_back("poison");
        this->name = "Gengar";
        this->hp = 60;
        this->atk = 65;
        this->def = 60;
        this->sp_atk = 130;
        this->sp_def = 75;
        this->speed = 110;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return hypnosis();
    }
    container move2()
    {
        return thunderbolt(sp_atk);
    }
    container move3()
    {
        return psychic(sp_atk);
    }
    container move4()
    {
        return explosion(atk);
    }
};
