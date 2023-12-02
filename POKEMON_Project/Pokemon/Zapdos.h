#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Zapdos : public Pokemon, moves
{

public:
    Zapdos()
    {
        (this->type).push_back("electric");
        (this->type).push_back("flying");
        this->name = "Zapdos";
        this->hp = 90;
        this->atk = 90;
        this->def = 85;
        this->sp_atk = 125;
        this->sp_def = 90;
        this->speed = 100;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return thunderbolt(sp_atk);
    }
    container move2()
    {
        return thunder_wave();
    }
    container move3()
    {
        return agility();
    }
    container move4()
    {
        return drill_peck(atk);
    }
};
