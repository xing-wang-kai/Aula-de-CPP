#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {

    cout << endl << "===============================================================" << endl;
    cout << "============CALCULAR A TABUADA DO NUM com WHILE================" << endl;
    cout << "===============================================================" << endl << endl;
    /**
    NESTE EXERCICIO SERA PEGADO UM NUMERO DIGITADO PELO USUARIO E ENTAO ADICIONADO A UMA VARIAVEL NO SISTEMA
    COM O NUMERO ADICIONADO O SISTEMA SERA ORIENTADO A GERAR A TABUADA USANDO O LACO DE REPETICAO COM WHILE
    **/

    cout << setw(40) << "DIGITE UM NUMERO PARA GERAR A TABUADA: ";
    int tabu01;
    cin >> tabu01;
    cout << endl << endl;

    int contador = 1;
    while (contador <= 10){
        cout << tabu01 << " x " << contador << " = " << tabu01*contador<< endl;
        contador ++;
    }


    system("pause");
}
