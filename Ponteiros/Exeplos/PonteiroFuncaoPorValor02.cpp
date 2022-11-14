/*
    utilizando passage por valor
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
int passagemPorValor( int );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // variável
    int valor = 5;
    int resposta = 0;

    cout << "O valor original é " << valor << endl;

    resposta = passagemPorValor( valor ); // passa o valor para a função

    cout << "O novo valor da variável é " << resposta << endl;

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

