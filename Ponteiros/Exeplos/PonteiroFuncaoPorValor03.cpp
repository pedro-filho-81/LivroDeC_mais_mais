/*
    eleva um valor ao cubo passando o valor para uma função por referência com
    um argumento *valorPtr
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
int cuboPorReferencia( int * );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // variável
    int valor = 5;
    int resposta = 0;

    cout << "O valor original é " << valor << endl;

    resposta = cuboPorReferencia(&valor); // passando o endereço da variável &valor

    cout << "O novo valor é " << resposta << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// cuboPorReferencia
// cria o ponteiro *valorPtr
int cuboPorReferencia(int *valorPtr)
{
    return *valorPtr * *valorPtr * *valorPtr;
} // final cuboPorReferencia
