#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << endl << "===============================================================" << endl;
    cout << "================USANDO CONDICOES IF E ELSE=====================" << endl;
    cout << "===============================================================" << endl << endl;

/*
Os blocos de condi��es comparam duas condi��es que foram atribuidas e retorna verdadeira ou falsa dependendo da condi��o.
nesse caso usaremos as condi��es if e Else para coletar as idades e determinar se a pessoa pode ou n�o votar.
*/
    cout << "QUANTOS ANOS VOC� TEM? ";
    int idade;
    cin >> idade;

    if (idade >= 18 && idade <= 65){
        cout << setw(60) <<"O VOTO E OBRIGATORIO" << endl;
    }
    else{
            if (idade >= 16){
                cout <<  setw(60) <<"O VOTO E OPCIONAL" << endl;
            }
            else{
                cout <<  setw(60) <<"O VOTO NAO E OBRIGATORIO" << endl;
            }

    }
}
