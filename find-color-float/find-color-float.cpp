#include <iostream>
#include "windows.h"
using namespace std;



int main()
{
    setlocale(0, "rus");

    {
        char var = 'Y';

        while (var == 'Y' || 'y')
        {
            float a, b = 255, c;
            cout << (u8"Input RBG color int!\n\n");
            cin >> a;
            c = a / b;
            cout << "\n";
            cout << u8"Float: \n" << c << endl;
        
            cout << "Y/y (продолжить)\n\n" << endl;
            cin >> var;
        }
        // by GofMan3#4086


        
    }
}


