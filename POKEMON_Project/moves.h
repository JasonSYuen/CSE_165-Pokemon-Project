#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
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
        string status;
    };

    bool success(int Chance_Success)
    {
        int x = rand() % 100 + 1;
        if (x < Chance_Success)
        {
            return true;
        }
        else
            return false;
    }
    container fill_return(int pp, int atk, string sp, string type, string effect)
    {
        container x;
        x.total_attack_damage = pp * atk;
        x.special_or_not = sp;
        x.damagetype = type;
        x.status = effect;
        return x;
    }

    container fill_return(string miss)
    {
        container x;
        x.total_attack_damage = 0;
        x.special_or_not = "none";
        x.damagetype = "none";
        x.status = "miss";
        return x;
    }
    // move 1

    container scratch(int atk)
    {
        // accuracy is 100 might need to make a random func later
        return fill_return(40, atk, "physical", "normal", "none");
    }

    // move 2
    container sleep()
    {

        if (success(75) == true)
        {
            return fill_return(0, 0, "non damaging", "grass", "sleep"); // only "sleep" matters
        }
        return fill_return("miss");
    }

    container swords_dance()
    {
        return fill_return(0, 0, "non damaging", "normal", "double atk");
    }

    container razor_leaf(int sp_atk)
    {

        if (success(95) == true)
        {
            return fill_return(55, sp_atk, "special", "grass", "none");
        }
        return fill_return("miss");
    }

    container body_slam(int atk)
    {
        if (success(30) == true)
        {
            return fill_return(85, atk, "physical", "normal", "paralyze");
        }
        else
            return fill_return(85, atk, "physical", "normal", "none");
    }

    container fire_blast(int sp_atk)
    {
        if (success(85) == true)
        {
            if (success(30) == true)
            {
                return fill_return(120, sp_atk, "special", "fire", "burn");
            }
            else
            {
                return fill_return(120, sp_atk, "special", "fire", "none");
            }
        }
        else
        {
            return fill_return("miss");
        }
    }

    container hyper_beam(int atk)
    {
        if (success(90) == true)
        {
            return fill_return(150, atk, "physical", "normal", "skip turn if not KO");
        }
        else
        {
            return fill_return("miss");
        }
    }

    container reflect()
    {
        return fill_return(0, 0, "non damaging", "normal", "reflect");
    }

    container blizzard(int sp_atk)
    {
        if (success(90) == true)
        {
            if (success(10) == true)
            {
                return fill_return(120, sp_atk, "special", "ice", "freeze");
            }
            else
            {
                return fill_return(120, sp_atk, "special", "ice", "none");
            }
        }
        else
        {
            return fill_return("miss");
        }
    }

    container double_edge(int atk)
    {
        return fill_return(100, atk, "physical", "normal", "recoil");
    }

    container agility()
    {
        return fill_return(0, 0, "non damaging", "normal", "double speed");
    }

    container twineedle(int atk)
    {
        if (success(20) == true)
        {
            return fill_return(25, atk, "physical", "bug", "poison"); // call twice in game
        }
        else
        {
            return fill_return(25, atk, "physical", "bug", "none");
        }
    }

    container flamethrower(int sp_atk)
    {
        if (success(10) == true)
        {
            return fill_return(95, sp_atk, "special", "fire", "burn");
        }
        else
        {
            return fill_return(95, sp_atk, "special", "fire", "none");
        }
    }

    container slash(int atk)
    {
        return fill_return(70, atk, "physical", "normal", "none");
    }

    container submission(int atk)
    {
        return fill_return(80, atk, "physical", "fighting", "recoil");
    }
    container thunderbolt(int sp_atk)
    {
        if (success(10) == true)
        {
            return fill_return(95, sp_atk, "special", "electric", "paralyze");
        }
        else
        {
            return fill_return(95, sp_atk, "special", "electric", "none");
        }
    }
    container hypnosis()
    {
        if (success(60) == true)
        {
            return fill_return(0, 0, "non damaging", "psychic", "sleep");
        }
        else
        {
            return fill_return("miss");
        }
    }

    container psychic(int sp_atk)
    {
        if (success(33) == true)
        {
            return fill_return(90, sp_atk, "special", "psychic", "lower enemy sp_def");
        }
        else
        {
            return fill_return(90, sp_atk, "special", "psychic", "none");
        }
    }

    container explosion(int atk)
    {
        return fill_return(170, 0, "physical", "normal", "suicide");
    }

    container hydro_pump(int sp_atk)
    {
        if (success(80) == true)
        {
            return fill_return(120, sp_atk, "special", "water", "none");
        }
        else
        {
            return fill_return("miss");
        }
    }

    container sing()
    {
        if (success(55) == true)
        {
            return fill_return(0, 0, "non damaging", "normal", "sleep");
        }
        else
        {
            return fill_return("miss");
        }
    }

    container earthquake(int atk)
    {
        return fill_return(100, atk, "physical", "ground", "none");
    }

    container amnesia()
    {
        return fill_return(0, 0, "non damaging", "psychic", "double sp_atk");
    }
    container recover()
    {
        return fill_return(0, 0, "non damaging", "normal", "heal 50%");
    }

    container peck(int atk)
    {
        return fill_return(35, atk, "physical", "flying", "none");
    }
    container rock_slide(int atk)
    {
        if (success(90) == true)
        {
            return fill_return(75, atk, "physical", "rock", "none");
        }
        else
        {
            return fill_return("miss");
        }
    }

    container spore()
    {
        return fill_return(0, 0, "non damaging", "grass", "sleep");
    }

    container stun_spore()
    {
        if (success(75) == true)
        {
            return fill_return(0, 0, "non damaging", "grass", "paralyze");
        }
        else
        {
            return fill_return("miss");
        }
    }

    container thunder_wave()
    {
        return fill_return(0, 0, "non_damaging", "electric", "paralyze");
    }

    container surf(int sp_atk)
    {
        return fill_return(95, sp_atk, "special", "water", "none");
    }

    container sleep_powder()
    {
        if (success(75) == true)
        {
            return fill_return(0, 0, "non damaging", "grass", "sleep");
        }
        else
        {
            return fill_return("miss");
        }
    }

    container drill_peck(int atk)
    {
        return fill_return(80, atk, "physical", "flying", "none");
    }
};
