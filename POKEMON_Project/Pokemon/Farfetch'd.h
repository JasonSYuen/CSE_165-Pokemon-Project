#include <iostream>
#include <string>
#include <vector>
#include "../BasePokemon.h"
#include "../moves.h"
#pragma once

using namespace std;

class Farfetch : public Pokemon, moves
{
public:
    Farfetch()
    {
        (this->type).push_back("normal");
        (this->type).push_back("flying");
        this->name = "Farfetch'd";
        this->hp = 52;
        this->atk = 90;
        this->def = 55;
        this->sp_atk = 58;
        this->sp_def = 62;
        this->speed = 60;
    };

    void speak() override
    {
        cout << name << endl;
    }

    container move1()
    {
        return agility();
    }
    container move2()
    {
        return slash(atk);
    }
    container move3()
    {
        return swords_dance();
    }
    container move4()
    {
        return body_slam(atk);
    }
};
