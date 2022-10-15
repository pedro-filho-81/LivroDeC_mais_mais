/*
    INICIALIZANDO array
*/

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[10]; // cria vetor para dez elementos

    // loop para adicionar valor no vetor
    for(int i = 0; i < 10; i++)
    {
        vetor[ i ] = 0;
    } // final for

    cout << "Elemento" << setw(13) << "Valor" << endl;

    // loop para mostrar os elementos
    for(int i = 0; i < 10; i++)
    {
        cout << setw(7) << i + 1 << setw(13) << vetor[1] << endl;
    }

    system("pause"); // pausa do programa

    return 0;

} // final principal
