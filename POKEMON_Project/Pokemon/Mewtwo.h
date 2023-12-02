#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Mewtwo : public Pokemon, moves
{

public:
    Mewtwo()
    {
        (this->type).push_back("psychic");
        this->name = "Mewtwo";
        this->hp = 106;
        this->atk = 110;
        this->def = 90;
        this->sp_atk = 154;
        this->sp_def = 90;
        this->speed = 130;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return amnesia();
    }
    container move2()
    {
        return thunderbolt(atk);
    }
    container move3()
    {
        return psychic(atk);
    }
    container move4()
    {
        return recover();
    }
};
