#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    cout << endl << "===============================================================" << endl;
    cout << "============ARRAY PUXANDO VALORS COM FOR E USANDO===============" << endl;
    cout << "===============================================================" << endl << endl;

    int sarray[5];

    for (int i = 0; i <= 4; i++){
        cout << "DIGITE UM NUMERO NA " << i + 1 << "ª POSICAO:";
        cin >> sarray[i];
        cout << endl;
    }

    double media = 0;

    for (int i2 = 0; i2 <= 4; i2++ ){
        media += sarray[i2];
    }

    media = (media/5);
    cout << "A MEDIA TOTAL EH: " << media << endl;


    cout << endl << "===============================================================" << endl;
    cout << "========================FIM DO PROGRAMA========================" << endl;
    cout << "===============================================================" << endl << endl;

    system("pause");
    return 0;
}
