/*
*Este s�o alguns exercicios de teste para a aulas de C++ estes exercicios s�o de conhecimentos b�sicos
*tanto para gerar variaveis e incluir algumas bibliotecas para usar est� program��o, tem como unico objetivo
*meu treinamento academico.
*/


#include <iostream> //incluir a primeira biblioteaca para iniciar o sistema.
#include <stdlib.h> //incluir a segunda biblioteca para pausar o programa. SYSTEM ("pause")
#include <iomanip> // para formata��o de strings para usar HEX E SETW
#include <math.h> // para incluir a fun��o pow()

/**
    cout << endl << "===============================================================" << endl;
    cout << "============EXEMPLO DE TEXTO PARA USAR NOS EX===============" << endl;
    cout << "===============================================================" << endl << endl;

    cout << endl << "===============================================================" << endl;
    cout << "========================FIM DO PROGRAMA========================" << endl;
    cout << "===============================================================" << endl << endl;
    **/

using namespace std;

float somar(float c, float d){
    return c + d;
}

int main(){

    int varValor = 100;
    char varChar = 'r';
    float PointFloat = 534.54;
    bool varBool = true;
    double varDouble = 34.3445566;

    cout << "bem vindo ao meu primeiro programa" << endl << endl;
    cout << somar( 3, 8)<< endl << endl; //nesta linha estou chamando a fun��o declarada como somar,conforme acima a cria��o da fun��o.

    cout << "Valor da v�riavel do tipo inteiro �: " << varValor << " e ocupa o total da mem�ria de "<< sizeof(varValor) << endl;
    cout << "Valor da V�riavel do tipo Char �: " << varChar << " e ocupa o total da mem�ria de "<< sizeof(varChar) << endl;
    cout << "valor da v�riavel do tipo float �: " << PointFloat << " e ocupa o total da mem�ria de "<< sizeof(PointFloat) << endl;
    cout << "valor da v�riavel do tipo bool �: " << varBool << "e ocupa o total da mem�ria de "<< sizeof(varBool) <<endl;
    cout << "valor da v�riavel do tipo double �: " <<varDouble << " e ocupa o total da mem�ria de "<< sizeof(varDouble) <<endl;

    cout<< endl << "Estudando a entrada e sa�da de dados." << endl << endl;
    cout<< 10 + 15 << endl;
    //cout<< hex << 10 + 15 << endl;//imprimiu o valor em hexadecimal
    cout<< setw(50) << 10 + 15 << endl;// veem da bibliot�ca iomanip coloca em casas decimais o n�mero informado neste caso em 50 casas


    return 0;
}
