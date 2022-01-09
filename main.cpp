/*
*Este são alguns exercicios de teste para a aulas de C++ estes exercicios são de conhecimentos básicos
*tanto para gerar variaveis e incluir algumas bibliotecas para usar está programção, tem como unico objetivo
*meu treinamento academico.
*/


#include <iostream> //incluir a primeira biblioteaca para iniciar o sistema.
#include <stdlib.h> //incluir a segunda biblioteca para pausar o programa. SYSTEM ("pause")
#include <iomanip> // para formatação de strings para usar HEX E SETW
#include <math.h> // para incluir a função pow()

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


// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// sistema de calculo com operadores aritimaticos
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    cout << endl << "===============================================================" << endl;
    cout << "================CALCULANDO COM ARITIMETICOS====================" << endl;
    cout << "===============================================================" << endl << endl;

    int num1, num2, soma, subtr, mult, exponeciacao;
    double divisao, raiz, resto;

    cout << "digite um número: ";
    cin >> num1;
    cout << endl;

    cout << "digite outro número: ";
    cin >> num2;
    cout << endl;

    cout << "OS NUMEROS DIGITADOS FORAM: "
         << num1
         << " e "
         << num2 << endl;

    soma = num1 + num2;
    cout << setw(20) <<" A SOMA: "        << soma         << " " << endl;
    subtr = num1 - num2;
    cout << setw(20) <<" A SUBTRACAO: "   << subtr        << " " << endl;
    mult = num1 * num2;
    cout << setw(20) <<" MULTIPLICACAO: " << mult         << " " << endl;
    divisao = num1 / num2;
    cout << setw(20) <<" A DIVISAO: "     << divisao      << " " << endl;
    exponeciacao = pow(num1, num2);
    cout << setw(20) <<" A EXPONECISAO: " << exponeciacao << " " << endl;
    raiz = pow(soma, 0.5);
    cout << setw(20) <<" A RAIZ: "        << raiz         << " " << endl;
    resto = num1 % num2;
    cout << setw(20) <<" A RESTO: "       << resto        << " " << endl
         << endl;


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

/*
Os blocos de condições comparam duas condições que foram atribuidas e retorna verdadeira ou falsa dependendo da condição.
nesse caso usaremos as condições if e Else para coletar as idades e determinar se a pessoa pode ou não votar.
*/
    cout << "QUANTOS ANOS VOCÊ TEM? ";
    int idade;
    cin >> idade;

    if (idade >= 18 && idade <= 65){
        cout << "O VOTO E OBRIGATORIO" << endl;
    }
    else{
            if (idade >= 16){
                cout << "O VOTO E OPCIONAL" << endl;
            }
            else{
                cout << "O VOTO NAO E OBRIGATORIO" << endl;
            }

    }
    cout << endl << "===============================================================" << endl;
    cout << "================USANDO CONDICOES IF E ELSE=====================" << endl;
    cout << "===============================================================" << endl << endl;

    int nota1, nota2, nota3, nota4;


    cout << "DIGITE A PRIMEIRA NOTA DO ALUNO: ";
    cin >> nota1;
    cout << endl;

    cout << "DIGITE A PRIMEIRA NOTA DO ALUNO: ";
    cin >> nota2;
    cout << endl;

    cout << "DIGITE A PRIMEIRA NOTA DO ALUNO: ";
    cin >> nota3;
    cout << endl;

    cout << "DIGITE A PRIMEIRA NOTA DO ALUNO: ";
    cin >> nota4;
    cout << endl;

    double media = ((nota1 + nota2 + nota3 + nota4)/4);

    if (media >= 7){
        cout << "a MEDIA FOI " << media <<endl;
        cout << "VOCE FOI APROVADO: "   <<endl;
    }
    else{
        if (media >= 5){
            cout << "a MEDIA FOI " << media  <<endl;
            cout << "VOCE ESTA DE RECUERACAO"<<endl;
        }
        else{
            cout << "a MEDIA FOI " << media <<endl;
            cout << "VOCE FOI REPROVADO"    <<endl;
        }
    }

/*
OPERADORE COMPOSTO

    =  Atribui o valor a direita            x = 2
    += soma o valor + valor + outro         x = x + 2
    -= DIMINUI O VALOR DO VALOR E OUTRO     x = x - 2
    *= MULTIPLICA O VALOR DO VALOR E OUTRO  x = x * 2
    /= DIVIDE O VALOR DO VALOR E OUTRO      x = x / 2
    %= EXPONECIA O VALOR COM OUTRO          x = x % 2
    x ++ pros decremento
    x -- pros decremento
    ++ x pre decremento
    -- x Pre decremento
*/

/* REPETICAO COM O FOR
    FOR ( <VARIAVEL>, <CONDICAO>, <OCORRE A CADA LOOP
*/
    cout << endl << "===============================================================" << endl;
    cout << "====================REPETICAO COM FOR==========================" << endl;
    cout << "===============================================================" << endl << endl;

    for (int i = 0; i <= 10; i++){
        cout << "--O VALOR IMPRESSO DE I NESTA LINHA E: " << i << endl;
    }

        cout << endl << "===============================================================" << endl;
    cout << "================CALCULAR A TABUADA DO NUM=====================" << endl;
    cout << "===============================================================" << endl << endl;

    cout << "DIGITE UM VALOR PARA GERAR A TABUADA: " << endl;
    int n;
    cin >> n;

    for (int i = 0; i <= 10; i++){
        cout << n << " x "<< i << " = "<< i * n << endl;
    }



    return 0;
}
