#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {

    cout << endl << "===============================================================" << endl;
    cout << "============EXEMPLO DE TEXTO PARA USAR NOS EX===============" << endl;
    cout << "===============================================================" << endl << endl;

    double warray[5][5]; // desta forma ser� gerado valores v�zios para cadas c�lula da planilha.

    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; x++){

            string totit = (y < 4) ? "|" : "\n";
            warray[x][y] = (double) rand();
            cout << setw(6) <<warray[x][y] << totit;
        }

    }

    cout << endl << "===============================================================" << endl;
    cout << "========================FIM DO PROGRAMA========================" << endl;
    cout << "===============================================================" << endl << endl;

    system("pause");
    return 0;


}


