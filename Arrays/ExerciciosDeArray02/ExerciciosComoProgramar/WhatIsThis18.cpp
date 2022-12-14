/*
    programa soma os valores do vetor
    Pedro, 02/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int whatIsThis(int [], int); // protótipo

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 10; // índice do vetor
    // vetor
    int vetor[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // variável que recebe os valor retornado
    int result = whatIsThis(vetor, arraySize);

    cout << "Result is " << result << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

int whatIsThis(int vetor[], int arraySize)
{
    // se o tamanho do vetor igual a 1
    if(arraySize == 1) // caso comum
        // retorne o valor do  vetor na posição 0
        return vetor[ 0 ];
    else // se não
        // retorne os valores do vetor coeçando pelo último e some
        // como a função
        return vetor[ arraySize - 1] + whatIsThis(vetor, arraySize - 1);
} // final whatIsThis
