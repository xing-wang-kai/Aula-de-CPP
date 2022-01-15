#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(){


    cout << endl << "===============================================================" << endl;
    cout << "===================VARRENDO ARRAYS COM FOR=====================" << endl;
    cout << "===============================================================" << endl << endl;

    int sarray[10] = {1, 2, 3, 4};

    for( int i = 0; i <= 9; i++){
        cout << "item: " << sarray[i] << endl;
    }

    cout << endl << "===============================================================" << endl;
    cout << "========================FIM DO PROGRAMA========================" << endl;
    cout << "===============================================================" << endl << endl;


    system("pause");



    return 0;
}
