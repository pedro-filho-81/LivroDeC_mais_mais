/*
 fun��o recursiva soma
 Pedro. 13/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipo
void funcaoSoma(int [], int, int );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vetor
    const int vetorSize = 10;
    int vetor[ vetorSize ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Os valores do array s�o:" << endl;
    funcaoSoma(vetor, 0, vetorSize);

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// funcaoSoma
void funcaoSoma(int vetor[], int posicaoInial, int tamanho)
{
    // se posi��o inicial menor que o tamanho
    if( posicaoInial < tamanho)
    {
        // chama fun��o
        funcaoSoma(vetor, posicaoInial + 1, tamanho);
        cout << vetor[ posicaoInial ] << "  ";
    } // final if

} // final funcaoSoma
