/*
    cria a função para organizar o vetor
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
int pesquisaLinear(int[], int, int);
void adicionar(int[], int);
void mostrar(int[], int);
void organizar(int[], int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 10;
    int vetor[ arraySize ] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};

    // cabeçalho
    cout << setw(40) << "ORGANIZANDO VETOR" << endl;

    cout << "Vetor original = ";
    mostrar(vetor, arraySize);

    cout << endl;

    organizar(vetor, arraySize);
    cout << "Vetor organizado = ";
    mostrar(vetor, arraySize);

    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionar valor
void adicionar(int vetor[], int tamanho)
{
    srand(time(0));

    for(int i = 0; i < tamanho; i++)
    {
        vetor[ i ] = 1 + rand() % 50;
    } // final for
} // final adicionar

// exibir valores
void mostrar(int vetor[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
        cout << vetor[ i ] << " - ";
} // final ostrar

// organizar vetor
void organizar(int vetor[], int arraySize)
{
    int breve; // valor temporário

    // loop para deslocar elementos do vetor
    for(int i = 0; i < arraySize; i++)
    {
        for(int j =0; j < arraySize; j++)
        {
            if(vetor[ i ] < vetor[ j ])
            {
                breve = vetor[ j ];
                vetor[ j ] = vetor[ i ];
                vetor[ i ] = breve;
            } // final if
        } // final for interno
    } // final for externo
} // final função
