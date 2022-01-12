#include <iostream> // geral
#include <iomanip> // hex e setw
#include <stdlib.h> // system("pause")
#include <math.h> // pow()


using namespace std;

int main() {

    cout << endl << "===============================================================" << endl;
    cout << "=============USANDO BREAK E CONTINUE PARA REPETICAO=============" << endl;
    cout << "===============================================================" << endl << endl;


    string valor;

    while(true){
        cout<< "DIGITE UM VALOR [S / N]:  ";
        cin >> valor;
        cout << endl << endl;

        if (valor == "s" || valor == "n"){
            if (valor == "S"){
                    cout << "CONTINUANDO...." << endl << endl;
                    continue;
            }
            if (valor == "n"){
                    cout << "O PROGRAMA CHEOU AO FIM" << endl << endl;
                    break;
                    }
        }
        else {
            cout << "VALOR DIGITADO NAO EH S OU N DIGITE NOVAMENTE " << endl;
        }
    }

    cout << valor << endl;


    system("pause");
    return 0;
}

