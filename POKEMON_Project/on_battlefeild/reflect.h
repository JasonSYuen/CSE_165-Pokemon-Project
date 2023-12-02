#include <iostream>
#include <string>
#include <vector>
#include "../battlefeild_effect.h"
using namespace std;

#pragma once
class reflect : public battlefeild_effect
{

    // bool location    (your side or opponent side)
public:
    reflect()
    {
        this->timer = rand() % 5 + 2;
        // def *2
    }
};