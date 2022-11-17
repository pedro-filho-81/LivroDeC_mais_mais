/*
    coloca valores em um array, classifica os valores
    em ordem crescente, e imprime os resultado.
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void selectionSort(int * const, const int );
void swapVetor(int * const, int * const );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 10; // tamanho do array
    int valor[arraySize] = {5, 2, 6, 8, 10, 1, 25, 83, 3, 4};

    cout << "Array original: " << endl;
    for( int i = 0; i < arraySize; i++)
        cout << setw(4) << valor[ i ];

    selectionSort(valor, arraySize); // ordena o array

    cout << "\nArray em ordem crescente: " << endl;

    for(int j = 0; j < arraySize; j++)
        cout << setw(4) << valor[ j ];

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// selectionSort
void selectionSort(int * const vetor, const int sizeVetor)
{
    int menorVl;
    for(int i = 0; i < sizeVetor - 1; i++)
    {
        menorVl = i; // primeiro índice do array

        for( int index = i + 1; index < sizeVetor; index++)
            if(vetor[index] < vetor[menorVl])
                menorVl = index;

        swapVetor( &vetor[ i ], &vetor[ menorVl ] );
    }
} // final selectionSort

void swapVetor(int * const elementoPtr1, int * const elementoPtr2 )
{
    int temp = *elementoPtr1;
    *elementoPtr1 = *elementoPtr2;
    *elementoPtr2 = temp;

} // final swapValor
