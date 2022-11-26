/*
    Programa de classifica��o para m�ltiplos
    pr�positos usando ponteiro para fun��o
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void selectionSort(int [], const int, bool (*) (int, int) );
void organizar(int * const, int * const);
bool ascending(int, int);
bool descending(int, int);

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 10;
    int order; // 1 = crescente, 2 = descressente
    int counter; // �ndice do array
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

// selectionSort Classifica por sele��o para m�ltiplos prop�sitos;
// O par�metro compara � um ponteiro para a fun��o compare
// que determina a ordem da classifica��o.
void selectionSort(int vetor[], const int sizeT, bool (*compare ) (int, int))
{
    int smallestOrLargest; // �ndice do menor ou (maior) elemento

    // intera sobre size - 1 elementos
    for(int i = 0; i < sizeT - 1; i++)
    {
        smallestOrLargest = i; // primeiro �ndice do vetor restante

        // intera para localizar o �ndice do menor ou maior elemento
        for( int index = i + 1; index < sizeT; index++)
            if( !(*compare) (vetor[smallestOrLargest], vetor[ index ]) )
                smallestOrLargest = index;

        organizar( &vetor[smallestOrLargest], &vetor[ i ] );
    } // final for �
} // final fun��o

// Troca os valores nas posi��es da mem�ria para as quais
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
