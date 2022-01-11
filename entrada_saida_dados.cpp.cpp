#include <iostream>;


using namespace std;

int main{
    // -==-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    //Instruições para entrada e saída, quando solicita a saída de uma mensagem usamos << quando queremos coletar a entrada usamos >>
    // -==-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    cout << endl << "===============================================================" << endl;
    cout << "=====COLETANDO DADOS COM OPERADORES DE ENTREDA E SAIDA COUT CIN" << endl;
    cout << "===============================================================" << endl << endl << endl;

    cout << "digite um número: " << endl;
    int nun01 = 0;
    cin >> nun01;

    cout <<endl << "digite outro número: "<< endl;
    int nun02=0;
    cin >> nun02;

    cout << "o número digitado foi: "
         << nun01
         << " o outro foi: "
         << nun02
         << endl;

    cout << "a soma do número digitado é "
         << nun01 + nun02
         << endl;

}
