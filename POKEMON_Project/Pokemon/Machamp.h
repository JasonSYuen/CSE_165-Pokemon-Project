#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Machamp : public Pokemon, moves
{

public:
    Machamp()
    {
        (this->type).push_back("fighting");
        this->name = "Machamp";
        this->hp = 90;
        this->atk = 130;
        this->def = 80;
        this->sp_atk = 65;
        this->sp_def = 85;
        this->speed = 55;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return submission(atk);
    }
    container move2()
    {
        return earthquake(atk);
    }
    container move3()
    {
        return body_slam(atk);
    }
    container move4()
    {
        return hyper_beam(atk);
    }
};
