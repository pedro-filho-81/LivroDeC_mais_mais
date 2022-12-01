/*
    inicializando array com uma lista de elementos
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // cria e inicializa array
    int valores[10] = {32,25, 54, 10, 9, 8, 44, 100, 15, 55};

    cout << "Índice" << setw(13) << "Elementos" << endl;

    // loop para exibir os valores
    for( int i = 0; i < 10; i++)
        cout << setw(2) << i << setw(13) << valores[ i ] << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
