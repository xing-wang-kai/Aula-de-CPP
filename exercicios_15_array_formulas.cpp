#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main (){


    cout << endl << "===============================================================" << endl;
    cout << "============EXEMPLOS DE ARRAY BIDIMENSIONAL COM FORM===============" << endl;
    cout << "===============================================================" << endl << endl;


    double barray [10][10];

    for (int x = 0; x <= 9; x++){
        for (int y = 0; y <= 9; y++){

            string todoit = ( y < 9 ) ? " | " : "\n";
            barray [x][y] = (3*(x+1)+(y*y));
            cout << setw(4) <<barray [x][y] << todoit;
        }
    }





    cout << endl << "===============================================================" << endl;
    cout << "========================FIM DO PROGRAMA========================" << endl;
    cout << "===============================================================" << endl << endl;


    system("pause");
    return 0;
}
