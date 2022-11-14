/*
    utilizando passage por valor
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
int passagemPorValor( int );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vari�vel
    int valor = 5;
    int resposta = 0;

    cout << "O valor original � " << valor << endl;

    resposta = passagemPorValor( valor ); // passa o valor para a fun��o

    cout << "O novo valor da vari�vel � " << resposta << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// passagemPorValor
int passagemPorValor( int valor)
{
    // retorna o cubo do valor
    return valor * valor * valor;
} // final passagemPorValor

