#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {

    cout << "DIGITE UM VALOR ENTRE [1-3]: ";
    int valor;
    cin >> valor;
    cout << endl << endl;

    if(valor == 1) {

        for (int i1 = 0; i1 <= 5; i1++){
            cout << "O VALOR DIGITADO i1 NA CONDICAO FOR EH: "<< i1 << endl;
        }
    }
    else {
        if(valor == 2){
            int i2 = 0;
            while(i2 <= 5){
                cout << "O VALOR DIGITADO i2 NA CONDICAO WHILE EH: " << i2 << endl;
                i2 ++;
            }
        }else {

            if(valor == 3){
            int i3 = 0;
            do {
                cout <<"O VALOR DIGITADO i3 NA CONDICAO DO WHILE EH: " <<i3 << endl;
                i3 ++;
            }while(i3 <= 5);
            } else {
                cout << "ERRO!! NENHUM VALOR SOLICITADO FOI ESCRITO"<< endl <<endl << endl;
            }
        }
    }


}
