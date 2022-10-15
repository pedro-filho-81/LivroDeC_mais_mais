/*
    7.13 Escreva instruções simples que realizam as seguintes operações
    de um array unidimensional:
    a) Inicialize os 10 elementos do array de inteiros counts como zeros.
    b) Adicione 1 a cada um dos 15 elementos do array de inteiros bonus.
    c) Leia 12 valores para o array double monthlyTemperatures a partir do teclado.
    d) Imprima os 5 valores do array de inteiros bestScores em formato de coluna.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edição do Kindle.
    Pedro, 01/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // 7.13 Escreva instruções simples que realizam as seguintes operações
    // de um array unidimensional:
    // a) Inicialize os 10 elementos do array de inteiros counts como zeros.
    int counts[ 10 ] = {0};

    // b) Adicione 1 a cada um dos 15 elementos do array de inteiros bonus.
    const int arraySize = 15;
    int bonus[ arraySize ] = {0};
    for(int i = 0; i < arraySize; i++)
        bonus[ i ] = bonus[ i ] + 1;

    // c) Leia 12 valores para o array double monthlyTemperatures a partir do teclado.
    const int arraySize2 = 12;
    double temperatura = 0.0;
    double monthlyTemperatures[ arraySize2 ] = {0};
    for(int i = 0; i < arraySize2; i++)
    {
        cout << "Digite o valor da teperatura: ";
        cin >> temperatura;
        monthlyTemperatures[ i ] = temperatura;

    } // final for temperatura

    // d) Imprima os 5 valores do array de inteiros bestScores em formato de coluna.

    const int arraySize3 = 5;
    int bestScores[arraySize3] = { 1, 2, 3, 4, 5 };
    for(int i = 0; i < arraySize3; i++)
    {
        cout << setw(3) << bestScores[ i ];
    }
    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
