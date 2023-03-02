#include "MenuSex.h"
#include <iostream>
using namespace std;

class MenuSex {
public:
    int Menu(void) {
        int select;
        do
        {
            system("CLS");
            cout << "Select an action:" << endl << endl;
            cout << "FIGURE Sexangle" << endl;
            cout << "Press 1 - Create figure" << endl;
            cout << "Press 2 - Delite figure" << endl;
            cout << "Press 3 - Show figure" << endl;
            cout << "Press 4 - Verification figure" << endl;
            cout << "Press 5 - MoveO figure" << endl;
            cout << "Press 6 - Intersect figure" << endl << endl;
            cout << "EXIT" << endl << endl;
            cout << "Press 22 - Exit in main menu" << endl << endl;
            cout << "Choice: ";
            cin >> select;
            cout << endl;
        } while ((select < 1) || (select > 111));

        return select;
    }
};