#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main() {
    cout << endl << "===============================================================" << endl;
    cout << "===================EXTRUTURA COM O SWITCH======================" << endl;
    cout << "===============================================================" << endl << endl;

    /**
    ULTILIZANDO A STRUTURA SWITCH EM UM PROGRAMA, ESTA ESTRUTURA PERMITE INTEGRAR DIVERSOS BASE DE FOR, ONDE OFERECE UMA CADEIA DE ACONCIMENTOS
    ENTAO DENTRO DA MESMA SE ALGUMA DAS CONDICOES FOR VERDADEIRA ENTAO PARA COM O BREAK
    **/
    cout << setw(30) << "INSIRA UM VALOR DE [1-12] PARA RETORNAR O MES CORRESPONDENTE: ";
    int num;
    cin >> num;
    cout << endl << endl;

    switch (num){
        case 1:
            cout << setw(30) <<"JANEIRO"<<endl;
            break;
        case 2:
            cout << setw(30) <<"FEVEREIRO"<<endl;
            break;
        case 3:
            cout << setw(30) <<"MARCO"<<endl;
            break;
        case 4:
            cout << setw(30) <<"ABRIL"<<endl;
            break;
        case 5:
            cout << setw(30) <<"MAIO"<<endl;
            break;
        case 6:
            cout << setw(30) <<"JUNHO"<<endl;
            break;
        case 7:
            cout << setw(30) <<"JULHO"<<endl;
            break;
        case 8:
            cout << setw(30) <<"AGOSTO"<<endl;
            break;
        case 9:
            cout << setw(30) <<"SETEMBRO"<<endl;
            break;
        case 10:
            cout << setw(30) <<"OUTUBRO"<<endl;
            break;
        case 11:
            cout << setw(30) <<"NOVEMBRO"<<endl;
            break;
        case 12:
            cout << setw(30) <<"DEZEMBRO"<<endl;
            break;
        default:
            cout << "O VALOR DIGITADO ESTA INCORRETO"<< endl;

    }



    system("pause");
    return 0;
    }
