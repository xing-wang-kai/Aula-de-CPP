#include <iostream>

using namespace std;

int main(){
// -==-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//definir tipos de var como SHORT LONG ou SIGNED ou UNSIGNED
// -==-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    cout << endl << "===============================================================" << endl;
    cout << "//DEFINIR TIPOS DE VARIAVEIS COM SHORT LONG OU SIGNED E UNSEGNED" << endl;
    cout << "===============================================================" << endl << endl << endl;

    int a = 0;
    short int b = 0;
    long int c = 0;

    signed int a2 = -10;
    unsigned int b2 = -10; //vai gerar um número sujo, porque a sintaxe unsigned significa que o número nao pode ser negativo
    cout << endl << endl << "AS VARIAVEIS IMPRESSAS SAO: " << endl
          << "variavel a: " << a << "  " << endl
          << "variavel b: " << b << "  " << endl
          << "variavel c: " << c << "  " << endl
          << "variavel a2: " << a2 << "  " << endl
          << "variavel b2: " << b2 << "  " << endl
          << endl << endl
          << "O tamanho dos valores impressos sao: " << endl << endl
          << "para a variavel a: " <<sizeof(a) << " "<< endl
          << "para a variavel b: " <<sizeof(b) << " "<< endl
          << "para a variavel c: " <<sizeof(c) << " "<< endl
          << "para a variavel a2: " <<sizeof(a2) << " "<< endl
          << "para a variavel b2: " <<sizeof(b2) << " "<< endl
          << endl;
    system("pausa");

}


