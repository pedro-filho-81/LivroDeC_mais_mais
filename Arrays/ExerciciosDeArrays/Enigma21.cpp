/*
    o que você faz?
    Pedro, 11/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

void someFunction(int [], int, int);

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 10;
    int vetor[ arraySize ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Os valores do vetorr são:" << endl;

    someFunction(vetor, 0, arraySize);

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função  someFunction
void someFunction(int vetor[], int posicao, int arraySize)
{
    if(posicao < arraySize)
    {
        someFunction(vetor, posicao + 1, arraySize);
        cout << vetor[ posicao ] << "  ";
    } // final if
} // final função
