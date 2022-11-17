/*
    Tentativa de Modificar uM valor constante
    coM uM ponteiro n�o constante
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipo
void modificarValor( const int * );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vari�vel
    int vl = 5;

    modificarValor( &vl ); // erro na compila��o

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// modificarValor
void modificarValor(const int *valorPtr )
{
    *valorPtr = 100; // Erro: n�o � poss�vel modificar objeto constante
} // final modificarValor
