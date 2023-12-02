#include <iostream>
using namespace std;
#include <vector>
#include <typeinfo>
#include "roster.h"
#pragma once

class trainer : public Roster
{
public:
    string name;
    Roster r;

    trainer()
    {

        name = "no name";
    }
    trainer(string n)
    {

        name = n;
    }

    void image()
    {
        // import image?
    }
};