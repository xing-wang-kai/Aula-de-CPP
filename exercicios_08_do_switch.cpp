#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){


    cout << endl << "===============================================================" << endl;
    cout << "============VERIFICANDO O DIA DA SEMANA COM SWITCH===============" << endl;
    cout << "===============================================================" << endl << endl;

    cout << setw(50) << "DIGITE UM DIA DA SEMANA" << endl << endl;
    cout << setw(50) <<"[1] = SEGUNDA" << endl;
    cout << setw(50) <<"[2] = TERCA FEIRA" << endl;
    cout << setw(50) <<"[3] = QUARTA FEIRA" << endl;
    cout << setw(50) <<"[4] = QUINTA FEIRA" << endl;
    cout << setw(50) <<"[5] = SEXTA FEIRA" << endl;
    cout << setw(50) <<"[6] = SABADO" << endl;
    cout << setw(50) <<"[7] = DOMINGO" << endl;
    int semana;
    cin >> semana;
    cout << endl << endl;

    switch (semana){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "HOJE E "<< semana << " VOCE PRECISA TABALHAR" << endl;
            break;
        case 6:
        case 7:
            cout << "HOJE E "<< semana << " VOCE ESTA DE FOLGA" << endl;
            break;
        default:
            cout << "VOCE DIGITOU UM VALOR INVALIDO E O PROGRAMA SERA ENCERRADO" << endl;
    }


    system("pause");
}

