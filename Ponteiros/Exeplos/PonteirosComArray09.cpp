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

    //mostra o vetor original
    cout << "Array original: " << endl;
    for( int i = 0; i < arraySize; i++)
        cout << setw(4) << valor[ i ];

    // chama a função para organizar o vetor
    selectionSort(valor, arraySize); // ordena o array

    // cabeçalho
    cout << "\nArray em ordem crescente: " << endl;

    // loop para ostrar o vetor organizado
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
        // variável recebo o valor de i
        menorVl = i; // primeiro índice do array

        // loop para organizar o vetor
        for( int index = i + 1; index < sizeVetor; index++)
            // verifica se o vetor do o index é menor
            // que o vetor com o menor valor
            if(vetor[index] < vetor[menorVl])
                // se verdade, menor valor recebe o index
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
