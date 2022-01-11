#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// sistema de calculo com operadores aritimaticos
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    cout << endl << "===============================================================" << endl;
    cout << "================CALCULANDO COM ARITIMETICOS====================" << endl;
    cout << "===============================================================" << endl << endl;

    int num1, num2, soma, subtr, mult, exponeciacao;
    double divisao, raiz, resto;

    cout << "digite um número: ";
    cin >> num1;
    cout << endl;

    cout << "digite outro número: ";
    cin >> num2;
    cout << endl;

    cout << "OS NUMEROS DIGITADOS FORAM: "
         << num1
         << " e "
         << num2 << endl;

    soma = num1 + num2;
    cout << setw(20) <<" A SOMA: "        << soma         << " " << endl;
    subtr = num1 - num2;
    cout << setw(20) <<" A SUBTRACAO: "   << subtr        << " " << endl;
    mult = num1 * num2;
    cout << setw(20) <<" MULTIPLICACAO: " << mult         << " " << endl;
    divisao = num1 / num2;
    cout << setw(20) <<" A DIVISAO: "     << divisao      << " " << endl;
    exponeciacao = pow(num1, num2);
    cout << setw(20) <<" A EXPONECISAO: " << exponeciacao << " " << endl;
    raiz = pow(soma, 0.5);
    cout << setw(20) <<" A RAIZ: "        << raiz         << " " << endl;
    resto = num1 % num2;
    cout << setw(20) <<" A RESTO: "       << resto        << " " << endl
         << endl;


}
