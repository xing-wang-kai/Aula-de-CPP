#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>


using namespace std;

int main(){
    cout << endl << "===============================================================" << endl;
    cout << "=============USANDO OPERADORES TERNÁRIOS COMO SWICH=============" << endl;
    cout << "===============================================================" << endl << endl;

    cout << "DIGITE UM VALOR ENTRE [1 / 12] PARA RETORNAR UM MES RESPECTIVO: ";
    int num;
    cin >> num;
    cout << endl << endl;

    string mes = (num == 1)  ? "JANEIRO"  :
                 (num == 2)  ? "FEVERIRO" :
                 (num == 3)  ? "MARCO"    :
                 (num == 4)  ? "ABRIL"    :
                 (num == 5)  ? "MAIO"     :
                 (num == 6)  ? "JUNHO"    :
                 (num == 7)  ? "JULHO"    :
                 (num == 8)  ? "AGOSTO"   :
                 (num == 9)  ? "SETEMBRO" :
                 (num == 10) ? "OUTUBRO"  :
                 (num == 11) ? "NOVEMBRO" :
                 (num == 12) ? "DEZEMBRO" :
                                "O VALOR DIGITADO NAO ESTA ENTRE [0 - 10] CONFORME SOLICITADO";

    cout << "REFERENTE AO VALOR DIGITADO CORRESPONDE AO MES: " << mes <<endl << endl;





    return 0;
}
