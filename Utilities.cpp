/*********************************************************************
** Class: Utilities
** Abstraction the class represents: Allows access to menu and input validation methods.
** Purpose: Houses and allows access to menus, submenus and input validation methods.
** How to use: Create an instance of the class in order ao access methods.
** Summary of functionality: Menus store data members for user choices and use
 * switch statements to populate these members.
*********************************************************************/

#include "Utilities.h"

/*********************************************************************
** Function: attackerMenu()
** Purpose: menu choosing who will attach whom
** Arguments|Preconditions: none
** Return Type: int
*********************************************************************/

int Utilities::attackerMenu() {

    //variables used in input validation
    int userChoice=-99;
    bool temp = false;
    string inputStr = "";
    //display menu
    cout << "                                        " << endl;
    cout << " ==============  CHOOSE ATTACKER ============== " << endl;
    cout << "                                        " << endl;
    cout << "           [1] Barbarian        " << endl;
    cout << "           [2] Blue Men          " << endl;
    cout << "           [3] Harry Potter         " << endl;
    cout << "           [4] Medusa           "<< endl;
    cout << "           [5] Vampire                   "<< endl;
    cout << "                                        "<< endl;
    cout << " ============================================== " << endl;
    cout << "  Enter your selection:" << endl;
    //input validation: takes in choice as a string
    while (!temp || (userChoice !=1 && userChoice!=2 && userChoice !=3 && userChoice!=4 && userChoice !=5)){
        getline(cin, inputStr );
        //processes string through validation function and returns bool
        temp = inputValid(inputStr);
        if(temp){
            //converts to int if no letters detected
            userChoice = stoi(inputStr);
        }
        if(userChoice !=1 && userChoice!=2 && userChoice !=3 && userChoice!=4 && userChoice !=5){
            //error msg if int is out of range
            cout << "Enter a 1-5 number. Please try again: " << endl;
        }
    }
    switch (userChoice) {
        case 1: {
            cout << "Selection: Barbarian " << endl;
            cout << " " << endl;
            characterCh = 1;

        }
            break;
        case 2: {
            cout << "Selection: Blue Men  " << endl;
            cout << " " << endl;
            characterCh = 2;
        }
            break;

        case 3: {
            cout << "Selection: Harry Potter" << endl;
            characterCh = 3;
        }
            break;
        case 4: {
            cout << "Selection: Medusa" << endl;
            cout << " " << endl;
            characterCh = 4;
        }
            break;
        case 5: {
            cout << "Selection: Vampire" << endl;
            cout << " " << endl;
            characterCh = 5;
        }
            break;

    }
    return characterCh;
}
/*********************************************************************
** Function: defenderMenu()
** Purpose: menu choosing who will attach whom
** Arguments|Preconditions: none
** Return Type: int
*********************************************************************/

int Utilities::defenderMenu() {

    //variables used in input validation
    int userChoice=-99;
    bool temp = false;
    string inputStr = "";
    //display menu
    cout << "                                        " << endl;
    cout << " ==============  CHOOSE DEFENDER ============== " << endl;
    cout << "                                        " << endl;
    cout << "           [1] Barbarian        " << endl;
    cout << "           [2] Blue Men          " << endl;
    cout << "           [3] Harry Potter         " << endl;
    cout << "           [4] Medusa           "<< endl;
    cout << "           [5] Vampire                   "<< endl;
    cout << "                                        "<< endl;
    cout << " ============================================== " << endl;
    cout << "  Enter your selection:" << endl;
    //input validation: takes in choice as a string
    while (!temp || (userChoice !=1 && userChoice!=2 && userChoice !=3 && userChoice!=4 && userChoice !=5)){
        getline(cin, inputStr );
        //processes string through validation function and returns bool
        temp = inputValid(inputStr);
        if(temp){
            //converts to int if no letters detected
            userChoice = stoi(inputStr);
        }
        if(userChoice !=1 && userChoice!=2 && userChoice !=3 && userChoice!=4 && userChoice !=5){
            //error msg if int is out of range
            cout << "Enter a 1-5 number. Please try again: " << endl;
        }
    }
    switch (userChoice) {
        case 1: {
            cout << "Selection: Barbarian " << endl;
            cout << " " << endl;
            characterCh = 1;

        }
            break;
        case 2: {
            cout << "Selection: Blue Men  " << endl;
            cout << " " << endl;
            characterCh = 2;
        }
            break;

        case 3: {
            cout << "Selection: Harry Potter" << endl;
            cout << " " << endl;
            characterCh = 3;
        }
            break;
        case 4: {
            cout << "Selection: Medusa" << endl;
            cout << " " << endl;
            characterCh = 4;
        }
            break;
        case 5: {
            cout << "Selection: Vampire" << endl;
            cout << " " << endl;
            characterCh = 5;
        }
            break;

    }
    return characterCh;
}
/*********************************************************************
** Function: inputValid
** Purpose: Primary input validation that takes in a string, iterates through the
** characters in the array and places them in a different array.
** Arguments|Preconditions: String
** Return Type: Bool
*********************************************************************/

bool Utilities::inputValid(string userInputString) {

    bool validInput = false;//set flag to false as default
    //create a dynamic array to hold the array of chars from the string
    char *cstr = new char [userInputString.length()+1];
    //copy the contents of the old array to the new, bigger one
    strcpy (cstr, userInputString.c_str());
    unsigned long int size =userInputString.length()+1;
    //for loop that iterates across the entire array of chars. Use -1 so the NULL character is not scanned
    for  (unsigned int j=0; j<size-1; j++){
        //scan for only aphanumeric chars or spaces
        if ((char)(cstr[j]>='0' && cstr[j] <='9') ||cstr[j]== ' '){
            validInput = true;
        }else{
            validInput= false;
            cout<<"Invalid entry type!"<<endl;
            break;
        }//end else statement
    }//end for loop
    //free array memory
    delete [] cstr;
    //return bool to be used in menu logic in the main
    return validInput;
}


