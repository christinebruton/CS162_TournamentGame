/*********************************************************************
** Class: Utilities
** Abstraction the class represents: Allows access to menu and input validation methods.
** Purpose: Houses and allows access to menus, submenus and input validation methods.
** How to use: Create an instance of the class in order ao access methods.
** Summary of functionality: Menus store data members for user choices and use
 * switch statements to populate these members.
*********************************************************************/

#ifndef COMBATGAME_UTILITIES_H
#define COMBATGAME_UTILITIES_H
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <array>

using std::cout; using std::cin; using std::endl;  using std::string;


class Utilities {

private:
    //container for character choice int
    int characterCh=0;

public:
    //displays attacker menu
    int attackerMenu();
    //displays defineder menu
    int defenderMenu();
    //input validaton function
    bool inputValid(string userInputString);
};


#endif //COMBATGAME_UTILITIES_H
