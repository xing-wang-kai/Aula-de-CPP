#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {
    /*
OPERADORES DE COMPARAÇÃO COMPARAM SE UMA OPERAÇÃO É VERDADEIRA OU FALSA E RETORNA VALORES 1 PARA VERDADEIRO e 0 PARA FALSO

   ==  IGUALDADE
   !=  DIFERENÇA
   <   MENOR QUE
   >   MAIOR QUE
   <=  MENOR IGUAL QUE
   >=  MAIOR IGUAL QUE

   &&  REPRESENTA E
   ||  REPRESENTA OU
   ! inverta a operação ex !(x && Y) caso a resposta seja verdadeiro vai retornar como falso

*/

    cout << endl << "===============================================================" << endl;
    cout << "================USANDO CONDICOES IF E ELSE=====================" << endl;
    cout << "===============================================================" << endl << endl;

    int nota1, nota2, nota3, nota4;


    cout << setw(60) <<"DIGITE A PRIMEIRA NOTA DO ALUNO: ";
    cin >> nota1;
    cout << endl;

    cout << setw(60) <<"DIGITE A PRIMEIRA NOTA DO ALUNO: ";
    cin >> nota2;
    cout << endl;

    cout << setw(60) <<"DIGITE A PRIMEIRA NOTA DO ALUNO: ";
    cin >> nota3;
    cout << endl;

    cout << setw(60) <<s"DIGITE A PRIMEIRA NOTA DO ALUNO: ";
    cin >> nota4;
    cout << endl;

    double media = ((nota1 + nota2 + nota3 + nota4)/4);

    if (media >= 7){
        cout << setw(60) <<"a MEDIA FOI " << media <<endl;
        cout << setw(60) <<"VOCE FOI APROVADO: "   <<endl;
    }
    else{
        if (media >= 5){
            cout << setw(60) <<"a MEDIA FOI " << media  <<endl;
            cout << "VOCE ESTA DE RECUERACAO"<<endl;
        }
        else{
            cout << setw(60) <<"a MEDIA FOI " << media <<endl;
            cout << setw(60) <<"VOCE FOI REPROVADO"    <<endl;
        }
    }
    cout << endl << "===============================================================" << endl;
    cout << "================FIM DO PROGRAMA=====================" << endl;
    cout << "===============================================================" << endl << endl;
    system("pause");


}
