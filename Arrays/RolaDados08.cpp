/*
    rola dados 6000000 vezes
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int ArraySize = 7;

    int frequencia[ArraySize] = {0};

    srand( time(0) );

    // loop para rolar o dado
    for( int i = 0; i < 600000 ; i++)
        frequencia[1 + rand() % 6]++;

    // cabeçalho
    cout << "Valor" << setw(13) << "Freauência" << endl;

    // loop para ostrar frequência
    for( int face = 1; face < ArraySize; face++)
        cout << setw(4) << face << setw(13) << frequencia[face] << endl;

    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
