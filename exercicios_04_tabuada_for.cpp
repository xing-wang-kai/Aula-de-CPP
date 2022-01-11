#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {

    cout << endl << "===============================================================" << endl;
    cout << "=============CALCULAR A TABUADA DO NUM COM FOR=================" << endl;
    cout << "===============================================================" << endl << endl;

    cout << "DIGITE UM VALOR PARA GERAR A TABUADA: " << endl;
    int n;
    cin >> n;

    for (int i = 0; i <= 10; i++){
        cout << setw(15) << n <<setw(5) << " x "<<setw(5) << i <<setw(5) << " = "<<setw(5) <<setw(5) << i * n << endl;
    }

}
