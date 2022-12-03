/*
    verifica se existe n�meros repetidos no vetor, podendo usar
    a pesquisa linear ou a pesquisa bin�ria
    Pedro,03/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// prot�tipos
void adicionar(int [], int );
void organizar(int [], int);
void exibirElementos(int [], int );
int pesquisaBinaria(const int [], int, int, int );
int pesquisaLinear( int [], int, int );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constante para o �ndice do vetor
    const int INDICE = 15;

    // vetor com �ndice constante
    int vetor[ INDICE ] = {0};

    // chama a fun��o para
    adicionar(vetor, INDICE); // adicionar valores aleat�rios ao vetor

    // mostra o vetor n�o organizado
    cout << "Vetor original: " << endl;
    exibirElementos(vetor, INDICE ); // exibe os elementos do vetor

    // chama a fun��o para organizar o vetor
    organizar(vetor, INDICE);

    // mostra o vetor organizado
    cout << "Vetor organizado:" << endl;
    exibirElementos(vetor, INDICE);

    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionar fun��o para adicionar valores ao vetor
void adicionar(int vetor[], int tamanho  )
{
    // vari�vel
    int resposta; // recebe o valor da pesquisa
    int alea; // para os n�meros aleat�rios
    int contaTrocados = 0; // para contrar os valores substituidos

    srand( time( 0 ) ); // gera semente para rand

    // loop para adicionar valores ao vetor
    for( int indice = 0; indice < tamanho; indice++)
    {
        // vari�vel alea recebe valor aleat�rio entre 1 e 30
        alea = 1 + rand() % 30;

        // a vari�vel resposta recebe um valor da fun��o pesquisaLinear
        // achei melhor para ser usada dentre dessa fun��o
        resposta = pesquisaLinear(vetor, alea, tamanho);

        // pesquisa bin�ria n�o � ideal para pesquisar valores dentro dessa fun��o
        // resposta = pesquisaBinaria(vetor, alea, 0, tamanho);

        // mostra como est� sendo adicionado os valores no vetor
        cout << setw(3) << alea << setw(23) << " adicionado na posi��o "
                << setw(3) << indice << endl;

        // este enquanto � utilizado quando a vari�vel resposta recebe um valor
        // diferente de -1, ou seja, recebe um valor repetido
        while(resposta != -1)
        {
            // vari�vel alea usado para receber outro recebe valor aleat�rio
            alea = 1 + rand() % 30;

            // a vari�vel resposta recebe um valor da fun��o pesquisa
            // a fun��o retorna o valor pesquisado ou -1
            resposta = pesquisaLinear(vetor, alea, tamanho);

            // resposta = pesquisaBinaria(vetor, alea, 0, tamanho);

            // mostra o valor trocado por outro, subistituindo o valor duplicado
            // ou seja, um valor que j� tem no vetor
            cout << setw(3) << alea << setw(23) << " trocado na posi��o "
                    << setw(3) << indice << endl;

            // contador dos valores trocados
            contaTrocados += 1;

        } // final while

        // verifica se a vari�vel resposta � igual a -1 este indica
        // que n�o existe um valor igual no vetor
        if(resposta == -1 )
            // e ao vetor � adicionado o valor da vari�vel alea
            vetor[indice] = alea;

    } // final for

    // mostra quantidade dos valores trocados
    cout << "\nNo vetor fora substituidos " << contaTrocados << " elementos.\n" << endl;

} // final adicionar

// fun��o pesquisaLinear
int pesquisaLinear(int vetor[], int chave, int tamanho)
{
    // loop para pesquisar o valor chave no vetor
    for(int i = 0; i < tamanho; i++)
    {
        // verifica se valor chave � igual ao elemento do vetor
        if(chave == vetor[i]) // se verdade
            // retorna a posi��o que se encontra o valor da chave
            return i;

    } // final for

    // se n�o existe um valor igual no vetor retorna o valor -1
    return -1;

} // final fun��o

// organizar vetor
void organizar(int vetor[], int tamanho)
{
    for(int passes = 0; passes < tamanho; passes++)
    {
        for( int i = 0; i < tamanho; i++)
        {
            if(vetor[ passes ] < vetor[ i ])
            {
                int temp = vetor[ i ];
                vetor[ i ] = vetor[ passes ];
                vetor[ passes ] = temp;
            } // final if
        } // final for i
    } // final for passes
} // final organizar

// exibirElementos
void exibirElementos(int vetor[], int tamanho )
{
    cout << "vetor = { ";

    for( int i = 0; i < tamanho; i++)
        cout << setw(4) << vetor[ i ];

    cout << " };" << endl;

} // final exibir

// pesquisaBinaria fun��o para pesquisar um valor no vetor
int pesquisaBinaria(const int vetor[], int pesquisaValor, int inicio, int fim )
{
    // vari�vel
    int meio; //

    // enquanto o in�cio menor ou igual ao final fa�a
    while( inicio <= fim)
    {
        // determina o meio do vetor
        // inicio mais fim dividido por 2 � igual ao meio
        meio = (inicio + fim ) / 2;

        // se a pesquisa for igual ao valor do vetor com o �ndice meio
        if(pesquisaValor == vetor[meio]) {
            return meio; // retorne o valor da posi��o meio
        }

        // se n�o, se a pesquisa for menor que o valor do vetor com o �ndice meio
        else if(pesquisaValor < vetor[meio] ) {
            fim = meio - 1; // fim recebe o valor meio -1
        } // final else if

        // se n�o, se a pesquisa for maior que o valor do vetor
        else {
            // par�metro inicio recebe vari�vel meio ais um
            inicio = meio + 1;
        } // final else

    } // final while

    return -1; // valor pesquisado n�o localizado

} // final pesquisaBinaria
