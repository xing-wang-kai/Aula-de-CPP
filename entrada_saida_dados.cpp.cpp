#include <iostream>;


using namespace std;

int main{
    // -==-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    //Instrui��es para entrada e sa�da, quando solicita a sa�da de uma mensagem usamos << quando queremos coletar a entrada usamos >>
    // -==-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    cout << endl << "===============================================================" << endl;
    cout << "=====COLETANDO DADOS COM OPERADORES DE ENTREDA E SAIDA COUT CIN" << endl;
    cout << "===============================================================" << endl << endl << endl;

    cout << "digite um n�mero: " << endl;
    int nun01 = 0;
    cin >> nun01;

    cout <<endl << "digite outro n�mero: "<< endl;
    int nun02=0;
    cin >> nun02;

    cout << "o n�mero digitado foi: "
         << nun01
         << " o outro foi: "
         << nun02
         << endl;

    cout << "a soma do n�mero digitado � "
         << nun01 + nun02
         << endl;

}
