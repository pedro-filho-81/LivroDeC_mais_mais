/*
    passando array para fun��o por refer�ncia e por elemento
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void modificaArray(int[], int);
void modificaElementoDoArray(int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int SIZE = 5;

    int array1[SIZE] = {0, 1, 2, 3, 4};

    cout << "Efeitos da passagem do array por refer�ncia."
            << "\nOs valores do array original s�o:" << endl;

    for(int i = 0; i < SIZE; i++)
        cout << setw(3) << array1[ i ];

    cout << endl;

    // passa o array para fun��o odifica array por refer�ncia
    modificaArray(array1, SIZE);

    cout << "VAlores do array ap�s fun��o modificaArray()" << endl;

    for(int i = 0; i < SIZE; i++)
        cout << setw(3) << array1[ i ];

    cout << "\n\nAntes da fun��o modificaElementoDoArray1() = " << array1[ 3 ] << endl;

    // passa um elemento  do array para a fun��o
    modificaElementoDoArray( array1[ 3 ] );

    cout << "Depois da fun��o modificaElementoDoArray1() = " << array1[ 3 ] << endl;

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// fun��o modificaArray
void modificaArray(int vetor[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
        vetor[ i ] *= 5;
} // final modificaArray

// fun��o modificaElementoDoArray
void modificaElementoDoArray( int elemento)
{
    cout << "O elemento do array dentro da fun��o vale:  " << elemento * 2 << endl;
}
