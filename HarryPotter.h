/*********************************************************************
* Class: Harry Potter
* Abstraction the class represents: Character with special abilities
* Purpose: Implment character-specific attack and defense
* How to use: Pointer to character accessed in the main
* Summary of functionality: Enter pointer to character's enemy, and/or enemy
* attack points into character-specific function
*********************************************************************/

#ifndef COMBATGAME_HARRYPOTTER_H
#define COMBATGAME_HARRYPOTTER_H

#include <stdio.h>
#include "Character.h"
#include <cstdlib>

class HarryPotter : public Character {
private:

    //used to determine if resurrection occurred already
    bool resurrected=false;

public:
    //constructor
    HarryPotter();
    //see function defintion in Character
    int Attack(Character *enemy) override;
    //see function defintion in Character
    int Defense(Character *enemy, int damage) override;
    //friend function used to check for 0 or neg strength and output death message
    void checkForDeath();
};


#endif //COMBATGAME_HARRYPOTTER_H
