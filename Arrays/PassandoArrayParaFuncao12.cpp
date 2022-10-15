/*
    passando array para função por referência e por elemento
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void modificaArray(int[], int);
void modificaElementoDoArray(int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int SIZE = 5;

    int array1[SIZE] = {0, 1, 2, 3, 4};

    cout << "Efeitos da passagem do array por referência."
            << "\nOs valores do array original são:" << endl;

    for(int i = 0; i < SIZE; i++)
        cout << setw(3) << array1[ i ];

    cout << endl;

    // passa o array para função odifica array por referência
    modificaArray(array1, SIZE);

    cout << "VAlores do array após função modificaArray()" << endl;

    for(int i = 0; i < SIZE; i++)
        cout << setw(3) << array1[ i ];

    cout << "\n\nAntes da função modificaElementoDoArray1() = " << array1[ 3 ] << endl;

    // passa um elemento  do array para a função
    modificaElementoDoArray( array1[ 3 ] );

    cout << "Depois da função modificaElementoDoArray1() = " << array1[ 3 ] << endl;

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função modificaArray
void modificaArray(int vetor[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
        vetor[ i ] *= 5;
} // final modificaArray

// função modificaElementoDoArray
void modificaElementoDoArray( int elemento)
{
    cout << "O elemento do array dentro da função vale:  " << elemento * 2 << endl;
}
