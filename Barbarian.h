/*********************************************************************
* Class: Barbarian
* Abstraction the class represents: Character with special abilities
* Purpose: Implement character-specific attack and defense
* How to use: Pointer to character accessed in the main
* Summary of functionality: Enter pointer to character's enemy, and/or enemy
* attack points into character-specific function
*********************************************************************/

#ifndef COMBATGAME_BARBARIAN_H
#define COMBATGAME_BARBARIAN_H

#include <stdio.h>
#include "Character.h"
#include <cstdlib>


class Barbarian : public Character{

public:
    Barbarian();
    int Attack(Character *enemy) override;
    int Defense(Character *enemy, int damage) override;

    void checkForDeath();
};

#endif //COMBATGAME_BARBARIAN_H
