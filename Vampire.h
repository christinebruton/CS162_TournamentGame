/*********************************************************************
* Class: Vampire
* Abstraction the class represents: Character with special abilities
* Purpose: Implment character-specific attack and defense
* How to use: Pointer to character accessed in the main
* Summary of functionality: Enter pointer to character's enemy, and/or enemy
 * attack points into character-specific funtion
*********************************************************************/

#ifndef COMBATGAME_VAMPIRE_H
#define COMBATGAME_VAMPIRE_H

#include <stdio.h>
#include "Character.h"

class Vampire : public Character{

public:

    //constructor
    Vampire();
    //see function defintion in Character
    int Attack(Character *enemy) override;
    //see function defintion in Character
    int Defense(Character *enemy, int enemyAttackPts) override;
};




#endif //COMBATGAME_VAMPIRE_H
