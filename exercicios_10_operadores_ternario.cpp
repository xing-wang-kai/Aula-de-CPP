#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>


using namespace std;

int main(){
    cout << endl << "===============================================================" << endl;
    cout << "==================USANDO OPERADORES TERN�RIOS==================" << endl;
    cout << "===============================================================" << endl << endl;

    /***
    OPERADORES TERN�RIOS LEMBRAM OS USADOS EM PHP E SEGUEM O MESMO FLUXO <VARIAVEL> = <CONDICAO> ? <SESIM> : <SENAO>;
    ***/

    cout << setw(30) << "digite um valor de [0-20]";
    int num;
    cin >> num;
    cout << endl << endl;

    string texto = (num <= 10) ? "o valor inserido no sistema � menor que 10" : "o valor inserido no sistema � maior que 10";

    cout << texto << " e o valor inserido foi " << num << endl;




    return 0;
}
