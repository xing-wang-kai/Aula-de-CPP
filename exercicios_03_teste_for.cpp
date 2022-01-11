#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
/**
OPERADORE COMPOSTO

    =  Atribui o valor a direita            x = 2
    += soma o valor + valor + outro         x = x + 2
    -= DIMINUI O VALOR DO VALOR E OUTRO     x = x - 2
    *= MULTIPLICA O VALOR DO VALOR E OUTRO  x = x * 2
    /= DIVIDE O VALOR DO VALOR E OUTRO      x = x / 2
    %= EXPONECIA O VALOR COM OUTRO          x = x % 2
    x ++ pros decremento
    x -- pros decremento
    ++ x pre decremento
    -- x Pre decremento
**/

/* REPETICAO COM O FOR
    FOR ( <VARIAVEL>, <CONDICAO>, <OCORRE A CADA LOOP
*/
    cout << endl << "===============================================================" << endl;
    cout << "====================REPETICAO COM FOR==========================" << endl;
    cout << "===============================================================" << endl << endl;

    for (int i = 0; i <= 10; i++){
        cout << setw(60) <<"--O VALOR IMPRESSO DE I NESTA LINHA E: " << i << endl;
    }
}
