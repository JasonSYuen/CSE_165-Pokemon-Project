#include <iostream>
#include <string>
#include <vector>
using namespace std;

#pragma once

class moves
{
public:
    struct container
    {
        int total_attack_damage;
        string special_or_not;
        string damagetype;
    };

    container fill_return_statement(int pp, int atk, string sp, string type)
    {
        container x;
        x.total_attack_damage = pp * atk;
        x.special_or_not = sp;
        x.damagetype = type;
        return x;
    }
    // move 1

    container scratch(int atk)
    {
        // accuracy is 100 might need to make a random func later
        return fill_return_statement(40, atk, "physical", "Normal");
    }
};