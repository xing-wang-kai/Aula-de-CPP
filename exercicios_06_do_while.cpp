#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    cout << endl << "===============================================================" << endl;
    cout << "============CALCULANDO NUMERO INSERIDOS DO WHILE===============" << endl;
    cout << "===============================================================" << endl << endl;
    /**
    NESTE EXERCICIOS SERA FEITO UM CONTADOR VALORES ECONTANDO ELES COM O DO WHILE ENQUANTO A RESPOSTA DO
    USUARIO FOR SIM ELE CONTINUA PERGUNTANDO NUMEROS;
    **/

    int numero01, somanum = 0;
    char resposta;

    do {
        cout << "DIGITE UM NUMERO: ";
        cin >> numero01;
        cout << endl << endl;
        cout << "O NUMERO DIGITADO FOI " << numero01 << endl;
        somanum += numero01;
        cout << "A SOMA DOS NUMEROS DIGITADOS FOI: " << somanum << endl;
        cout << "DESEJA CONTINUAR [S/N]: ";
        cin >> resposta;
        cout << "VOE DIGITOU " << resposta<< endl;

    } while (resposta == 's');

    system("pause");

    return 0;
}
