#include "MainM.h"
#include <iostream>
using namespace std;

class MainM {
public:
    int Menu(void) {
        int select;
        do
        {
            system("CLS");
            cout << "Select an action:" << endl << endl;
            cout << "Press 1 - Figure Triangle" << endl;
            cout << "Press 2 - Figure Sexangle" << endl << endl;
            cout << "EXIT" << endl << endl;
            cout << "Press 111 - Exit the app" << endl << endl;
            cout << "Choice: ";
            cin >> select;
            cout << endl;
        } while ((select < 1) || (select > 111));

        return select;
    }
};