#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Omastar : public Pokemon, moves
{

public:
    Omastar()
    {
        (this->type).push_back("rock");
        (this->type).push_back("water");
        this->name = "Omastar";
        this->hp = 70;
        this->atk = 60;
        this->def = 125;
        this->sp_atk = 115;
        this->sp_def = 70;
        this->speed = 55;
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
        return hydro_pump(sp_atk);
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
