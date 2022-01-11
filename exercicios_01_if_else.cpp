#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << endl << "===============================================================" << endl;
    cout << "================USANDO CONDICOES IF E ELSE=====================" << endl;
    cout << "===============================================================" << endl << endl;

/*
Os blocos de condições comparam duas condições que foram atribuidas e retorna verdadeira ou falsa dependendo da condição.
nesse caso usaremos as condições if e Else para coletar as idades e determinar se a pessoa pode ou não votar.
*/
    cout << "QUANTOS ANOS VOCÊ TEM? ";
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
