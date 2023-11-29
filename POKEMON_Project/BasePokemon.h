#include <iostream>
#include <string>
#include <vector>
using namespace std;

#pragma once
class Pokemon
{
public:
    vector<string> type;
    string name;
    int hp;
    int atk;
    int def;
    int sp_atk;
    int sp_def;
    int speed;
    virtual void speak() = 0;

    void stats()
    {
        cout << "hp: " << hp << endl;
        cout << "atk: " << atk << endl;
        cout << "def: " << def << endl;
        cout << "sp_atk: " << sp_atk << endl;
        cout << "sp_def: " << sp_def << endl;
        cout << "speed: " << speed << endl;
        for (string i : type)
        {
            cout << i << endl;
        }
    }
};