#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {

    cout << endl << "===============================================================" << endl;
    cout << "============EXEMPLO DE TEXTO PARA USAR NOS EX===============" << endl;
    cout << "===============================================================" << endl << endl;

    int darray [5][5];
    for (int c = 0; c <= 4; c++){
        for (int l = 0; l <= 4; l++){
            darray[c][l] = 9;
            cout << "|" << darray[c][l] << "|";
        }
        cout << endl;
    }
     /** ESTE CODIGO GERA O SEGUINTE ARRAY DIMENSIONAL:
        |9|9|9|9|9
        |9|9|9|9|9
        |9|9|9|9|9
        |9|9|9|9|9
        |9|9|9|9|9 **/

    cout << endl << "===============================================================" << endl;
    cout << "========================FIM DO PROGRAMA========================" << endl;
    cout << "===============================================================" << endl << endl;


    system("pause");
    return 0;
}
