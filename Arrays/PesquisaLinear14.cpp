/*
    pesquisa linera em um vetor
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// protótipo
int pesquisaLinear(int[], int, int);
void adicionar(int[], int);
void mostrar(int[], int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 20;
    int vetor[ arraySize ];
    int chaveDePesquisa;

    // entrada de dados
    cout << "Entre com o valor a pesquisar: ";
    cin >> chaveDePesquisa;

    adicionar(vetor, arraySize);
    mostrar(vetor, arraySize);

    // variável resposta da pesquisa
    int resposta = pesquisaLinear(vetor, chaveDePesquisa, arraySize);

    // se a resposta for diferente de -1
    if(resposta != -1)
        cout << "Valor encontrado na posição: " << resposta + 1 << endl;
    else
        cout << "Valor não encontrado" << endl;

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

// função pesquisar
int pesquisaLinear(int vetor[], int chave, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        // se valor do vetor igual a chave
        if(chave == vetor[i])
            return i;

    } // final for

    return -1;

} // final função
