/*
*Este são alguns exercicios de teste para a aulas de C++ estes exercicios são de conhecimentos básicos
*tanto para gerar variaveis e incluir algumas bibliotecas para usar está programção, tem como unico objetivo
*meu treinamento academico.
*/


#include <iostream> //incluir a primeira biblioteaca para iniciar o sistema.
#include <stdlib.h> //incluir a segunda biblioteca para pausar o programa. SYSTEM ("pause")
#include <iomanip> // para formatação de strings para usar HEX E SETW
#include <math.h> // para incluir a função pow()

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
    cout << somar( 3, 8)<< endl << endl; //nesta linha estou chamando a função declarada como somar,conforme acima a criação da função.

    cout << "Valor da váriavel do tipo inteiro é: " << varValor << " e ocupa o total da memória de "<< sizeof(varValor) << endl;
    cout << "Valor da Váriavel do tipo Char é: " << varChar << " e ocupa o total da memória de "<< sizeof(varChar) << endl;
    cout << "valor da váriavel do tipo float é: " << PointFloat << " e ocupa o total da memória de "<< sizeof(PointFloat) << endl;
    cout << "valor da váriavel do tipo bool é: " << varBool << "e ocupa o total da memória de "<< sizeof(varBool) <<endl;
    cout << "valor da váriavel do tipo double é: " <<varDouble << " e ocupa o total da memória de "<< sizeof(varDouble) <<endl;

    cout<< endl << "Estudando a entrada e saída de dados." << endl << endl;
    cout<< 10 + 15 << endl;
    //cout<< hex << 10 + 15 << endl;//imprimiu o valor em hexadecimal
    cout<< setw(50) << 10 + 15 << endl;// veem da bibliotéca iomanip coloca em casas decimais o número informado neste caso em 50 casas


    return 0;
}
