/*
    7.15 Utilize um array unidimensional para resolver o seguinte problema.
    Leia 20 números, cada um dos quais está entre 10 e 100, inclusive.
    À medida que cada número é lido, valide-o e armazene-o no array somente
    se ele não for uma duplicata de um número já lido.
    Depois  de ler todos os valores, exiba somente os valores únicos que o usuário inseriu.
    Previna-se para o ‘pior caso’ em que todos os 20 números  são diferentes.
    Utilize o menor array possível para resolver esse problema.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edição do Kindle.
    Pedro, 01/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// protótipos
void adicionar(int [], int [], int); // adiciona valor ao vetor
void exibir(int [], int); // exibe os valores do vetor
void organizar(int [], int); // organiza os valores do vetor
int pesquisaLinear(int [], int, int); // pesquisa valor no vetor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // constante
    const int arraySize = 20;

    // vetor
    int vetor[arraySize] = {0};
    int valoresRepetidos[arraySize] = {0};

    // chama adicionar
    adicionar(vetor, valoresRepetidos, arraySize);
    cout << "\nVetor original = ";
    exibir(vetor, arraySize);

    organizar(vetor, arraySize);
    cout << "\nVetor organizado = ";
    exibir(vetor, arraySize);

    cout << "\nValores repetidos = ";
    exibir(valoresRepetidos, arraySize);

    cout << "\n\n"; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionar; muitas das informações aqui não são necessárias
// estão porque aqui é uma função para estudo, em um
// programa real serão descartadas
void adicionar(int vetor[], int valoresRepetidos[], int tamanho)
{
    srand( time( 0 ) ); // gerador

    // variáveis ( algumas variável não são necessárias )
    int contarWhile = 0; // conta quantas vezes o loop while foi executado
    int contarBreak = 0; // conta quantas vezes o break foi executado
    int valorRepetido = 0; // recebe os valores repetido gerado pela variável aleatório
    int contar = 0; // indice do vetor

    int aleatorio = 10 + rand() % 91;  // gera valores aleatório entre 10 e 100

    // resultado recebe os valores 1 (quando o valor for repetido) e
    // -1 (quando o valor não for repetido)
    int resultado = pesquisaLinear(vetor,  aleatorio, tamanho);

    // cria um loop infinito com while
    while( true )
    {
        contarWhile++; // incrementa em 1

        // se o resultado da pesquisa igual a 1
        if(resultado == 1)
        {
            // valor repetido recebe o valor
            valorRepetido = aleatorio;
            valoresRepetidos[ contar ] = valorRepetido;

            // exibe o valor repetida
            cout << "Valor repetido = " << valorRepetido << endl;
        } // final valor repetido

        // se resultado da pesquisa igual a -1
        if(resultado == -1)
        {
            // vetor recebe o valor aleatório
            vetor[ contar ] = aleatorio;

            // exibe o valor aleatório
            cout << "Valor aleatório = " << setw(3) << aleatorio << endl;

            // incrementa em 1 contar
            contar++;

            // se contar igual a 10
            if(contar == tamanho)
            {
                contarBreak++; // incrementa em 1 contar break
                // e sai do while
                break;
            } // final if contar
        } // final if resultado

        // aleatório recebe o valor aleatório
        aleatorio = 10 + rand() % 91;

        // resultado recebe o valor da pesquisa e o loop continua
        // até que contar atinja o valor 10 finalizando o programa
        resultado = pesquisaLinear(vetor, aleatorio, tamanho);

    } // final while

    // exibir
    cout << "\nO while repetiu " << contarWhile << " vezes."
            << "\nO break repetiu " << contarBreak << endl;

} // final adicionar

// pesquisaLinear
int pesquisaLinear(int vetor[], int chave, int tamanho)
{
    // loop para pesquisar a chave no vetor
    for(int i = 0; i < tamanho; i++)
    {
        // se chave igual ao valor no vetor
        if(chave == vetor[ i ] )
            // retorne o valor 1
            return 1;
    } // final if

    // se chave diferente do valor no vetor retorne o valor -1
    return -1;
} // final da pesquisaLinear

// exibir
void exibir(int vetor[], int tamanho)
{
    // loop para exibir os elementos do vetor
    for(int i = 0; i < tamanho; i++)
        // exibir eleentos
        cout << setw(5) << vetor[ i ];
} // final exibir

// organizar
void organizar(int vetor[], int tamanho)
{
    // variável
    int temp = 0;

    // loop para organizar o vetor
    for(int i = 0; i < tamanho; i++)
    {
        for(int  j = 0; j < tamanho; j++)
        {
            if(vetor[ i ] < vetor[ j ] )
            {
                temp = vetor[ i ];
                vetor[ i ] = vetor[ j ];
                vetor[ j ] = temp;
            } // final if
        } // final for j
    } // final for i
} // final organizar
