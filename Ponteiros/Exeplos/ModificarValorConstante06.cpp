/*
    Tentativa de Modificar uM valor constante
    coM uM ponteiro não constante
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
void modificarValor( const int * );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // variável
    int vl = 5;

    modificarValor( &vl ); // erro na compilação

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// modificarValor
void modificarValor(const int *valorPtr )
{
    *valorPtr = 100; // Erro: não é possível modificar objeto constante
} // final modificarValor
