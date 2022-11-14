/*
    eleva um valor ao cubo passando o valor para uma fun��o por refer�ncia com
    um argumento *valorPtr
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipo
int cuboPorReferencia( int * );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vari�vel
    int valor = 5;
    int resposta = 0;

    cout << "O valor original � " << valor << endl;

    resposta = cuboPorReferencia(&valor); // passando o endere�o da vari�vel &valor

    cout << "O novo valor � " << resposta << endl;

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
