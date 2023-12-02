#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Bulbasaur : public Pokemon, moves
{

public:
    Bulbasaur()
    {
        (this->type).push_back("grass");
        this->name = "Bulbasaur";
        this->hp = 45;
        this->atk = 49;
        this->def = 49;
        this->sp_atk = 65;
        this->sp_def = 65;
        this->speed = 45;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return swords_dance();
    }
    container move2()
    {
        return sleep();
    }
    container move3()
    {
        return razor_leaf(sp_atk);
    }
    container move4()
    {
        return body_slam(atk);
    }
};

// 45	49	49	65	65	45