/*
    7.11 (Classificação por borbulhamento (bubble sort))
    No algoritmo de classificação por borbulhamento, valores
    menores gradualmente  sobem para a parte superior do array
    como bolhas de ar subindo na água, enquanto as bolhas
    maiores afundam. A classificação por  borbulhamento faz
    várias passagens pelo array. Em cada passagem, sucessivos
    pares de elementos são comparados. Se um par estiver
    na ordem crescente (ou os valores forem idênticos), deixamos
    os valores como eles estão. Se um par estiver na ordem decrescente,
    seus  valores são trocados no array. Escreva um programa que classifica
    um array de 10 inteiros utilizando classificação por borbulhamento.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edição do Kindle.
    Pedro,30/09/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// protótipos
void adicionar(int [], int); // adiciona valor aou vetor
void exibir(int [], int); // exibe os valores do vetor
void organizar(int [], int); // organiza os valores do vetor
int pesquisaLinear(int [], int, int); // pesquisa valor no vetor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // constante
    const int arraySize = 10;

    // vetor
    int vetor[ arraySize ] = {0}; // recebe os valores principais
    int valorRepetido[arraySize] = {0}; // recebe os valores repetidos

    // chama as funções
   adicionar(vetor, arraySize);
   cout << "Vetor original = ";
   exibir(vetor, arraySize);

   // organizar vetor
   organizar(vetor, arraySize);
   cout << "Vetor organizado =";
   exibir(vetor, arraySize);

   cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// void adicionar
void adicionar(int vetor[], int tamanho)
{
    // gerador para rand
    srand( time( 0 ) );

    int valorRepetido = 0; // recebe o valor case seja repetido
    int contaBreak = 0; // recebe o valor no final do prograa
    int contaWhile = 0; // recebe o valor de quantas vezes se repetiu o while
    int contar = 0; // conta a quantidade de valores atribuidos ao vetor

    int aleatorio =  1 + rand() % 100; // gera o primeiro aleatório

    // faz a primeira pesquisa e dá o resultado
    int resultado = pesquisaLinear(vetor, aleatorio, tamanho);

    // enquanto infinito
    while( true )
    {
        contaWhile++; // incrementa em 1

        // se o resultado for 1
        if(resultado == 1)
        {
            // valor repetido recebe o valor
            valorRepetido = aleatorio;

            // depois exibe o valor repetido
            cout << "Valor repetido: " << valorRepetido << endl;

        } // final if valor repetido

        // se resultado igual a -1 faça
        if( resultado == -1)
        {
            // vetor recebe o valor aleatório
            vetor[ contar ] = aleatorio;

            // depois exibe o valor aleatório
            cout << "Valor aleatório = " << setw(3) << aleatorio << endl;

            contar++; // incrementa em 1;
            // contaWhile++;

            // verifica se contar é igual a 10
            if(contar == 10) // se for
            {
                ++contaBreak;
                // sair do while
                break;
            } // final if con tar

        } // final if resultado

        // se não for
        aleatorio =  1 + rand() % 100; // gera número aleatório

        // resultado recebe o valor retornado da pesquisa,
        // se existir um número igual ao aleatório no vetor
        // o loop while repete todo o processo até
        // encontrar um valor diferente.
        resultado = pesquisaLinear(vetor, aleatorio, tamanho);

    } // final while

    cout << "\nForam rodados " << contaWhile
            << "\nConta break " << contaBreak << endl;

} // final adicionar

// função exibir
void exibir(int vetor[], int tamanho)
{
    // loop para exibir o vetor
    for( int i = 0; i < tamanho; i++)
        // exibe os valores do vetor
        cout << setw(5) << vetor[ i ];

    // nova linha
    cout << endl;
} // final exibir

// organizar
void organizar(int vetor[], int tamanho)
{
    int temp = 0;

    for( int i = 3; i < tamanho; i++)
    {
        for( int j = 0; j < tamanho; j++)
        {
            if(vetor[ j ] > vetor[ i ])
            {
                temp = vetor[ j ];
                vetor[ j ] = vetor[ i ];
                vetor[ i  ] = temp;
            } // final do if
        } // final do for j
    } // final do for i
} // final organizar

// função pesquisar
int pesquisaLinear(int vetor[], int chave, int tamanho)
{
    // loop pelo vetor pesquisando o valor da chave
    for(int i = 0; i < tamanho; i++)
    {
        // se valor do vetor igual a chave
        if(chave == vetor[i])
            return 1; // retorna 1 informando que existe

    } // final for

    return -1; // retorna -1 informando que não existe

} // final função
