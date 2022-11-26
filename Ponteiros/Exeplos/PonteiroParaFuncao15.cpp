/*
    Programa de classificação para múltiplos
    própositos usando ponteiro para função
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void selectionSort(int [], const int, bool (*) (int, int) );
void organizar(int * const, int * const);
bool ascending(int, int);
bool descending(int, int);

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 10;
    int order; // 1 = crescente, 2 = descressente
    int counter; // índice do array
    int vetor[arraySize] = {10, 5, 9, 1, 3, 4, 2, 6, 7, 8};

    // entrada de dados
    cout << "Entre com 1 para ordem crescente,\n"
            << "Entre com 2 para ordem decrescente: ";
    cin >> order;
    cout << "Vetor original:" << endl;

    for( counter = 0; counter < arraySize; counter++)
    {
        cout << setw(4) << vetor[counter];
    } // final for

    // classifica o vetor em orde cerscente
    if(order == 1)
    {
        selectionSort(vetor, arraySize, ascending);
        cout << "\nElementos do vetor em ordem crescente." << endl;
    } // final

    // Classifica o vetor em ordem decrescente.
    else
    {
        selectionSort(vetor, arraySize, descending);
        cout << "\nElementos do vetor em ordem decrescente:" << endl;
    } // final else

    for(counter = 0; counter < arraySize; counter++)
        cout << setw(4) << vetor[ counter ];

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// selectionSort Classifica por seleção para múltiplos propósitos;
// O parâmetro compara é um ponteiro para a função compare
// que determina a ordem da classificação.
void selectionSort(int vetor[], const int sizeT, bool (*compare ) (int, int))
{
    int smallestOrLargest; // índice do menor ou (maior) elemento

    // intera sobre size - 1 elementos
    for(int i = 0; i < sizeT - 1; i++)
    {
        smallestOrLargest = i; // primeiro índice do vetor restante

        // intera para localizar o índice do menor ou maior elemento
        for( int index = i + 1; index < sizeT; index++)
            if( !(*compare) (vetor[smallestOrLargest], vetor[ index ]) )
                smallestOrLargest = index;

        organizar( &vetor[smallestOrLargest], &vetor[ i ] );
    } // final for í
} // final função

// Troca os valores nas posições da memória para as quais
// elementePtr1 e elementPtr2 apontem
void organizar(int * const elementPtr1, int * const elementPtr2)
{
    int hold = *elementPtr1;
    *elementPtr1 = *elementPtr2;
    *elementPtr2 = hold;

} // final organizar

// ascendent
bool ascending(int a, int b)
{
    return a < b;
} // final ascending

// descending
bool descending(int a, int b)
{
    return a > b;
} // final descending
