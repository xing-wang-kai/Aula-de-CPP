#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct Pessoa {
        string nome;
        string cpf;
        int idade;
        double salario;
    };

int main() {

    cout << endl << "===============================================================" << endl;
    cout << "============DECLARANDO CLASS PARA COMPOR OBJ EM CPP===============" << endl;
    cout << "===============================================================" << endl << endl;

    Pessoa p1, p2;
    p1.nome = "Joaquim";
    p1.idade = 23;
    p1.cpf = "222.222.222-45";
    p1.salario = 2400.45;

    p2.cpf = "023.555.555-55";
    p2.nome = "maria";
    p2.idade = 33;
    p2.salario = 3000.54;

    cout << "A PESSOA 01 EH = " <<p1.nome << endl<< "A PESSOA 02 EH = " << p2.nome;

    cout << endl << "===============================================================" << endl;
    cout << "========================FIM DO PROGRAMA========================" << endl;
    cout << "===============================================================" << endl << endl;

    system("pause");
    return 0;
}
