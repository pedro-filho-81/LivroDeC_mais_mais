/*
    Pesquisa bin�ria em um vetor ordenado
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
int pesquisaBinaria(int [], int, int, int );
void exibeCabecalho(int );
void exibeLinha(int [], int, int, int );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constante
    const int INDICE = 15;

    // vetor
    int vetor[ INDICE ] = {0};

    // vari�veis
    int i = 0; // contador
    int chave = 0; // valor a ser pesquisado
    int resultado = 0; // recebe o local onde o valor foi encontrado ou -1 n�o localizado

    // chama a fun��o
    adicionar(vetor, INDICE); // adiciona valores aleat�rios ao vetor

    // entra com o valor a ser psequisado
    cout << "Digite um valor entre 1 e 30: ";
    cin >> chave; // entrada do usu�rio

    cout << "Vetor original: " << endl;
    exibirElementos(vetor, INDICE ); // exibe os elementos do vetor

    cout << "Vetor organizado:" << endl;
    organizar(vetor, INDICE);
    exibirElementos(vetor, INDICE);

    cout << endl;

    // procura o valor no vetor e retorna a posi��o caso encontrado
    // ou retorna -1 se n�o for encontrado
    resultado = pesquisaBinaria(vetor, chave, 0, INDICE -1 );

    cout << endl;

    // exibe o resultado
    if(resultado != -1)
        cout << chave << " encontrado na posi��o " << resultado << endl;
    else
        cout << chave << " n�o foi encontrado." << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionar
void adicionar(int vetor[], int tamanho  )
{
    srand( time( 0 ) );

    // loop para adicionar valores ao vetor
    for( int indice = 0; indice < tamanho; indice++)
    {
        // vari�vel recebe valor aleat�rio
        int alea = 1 + rand() % 30;
        vetor[ indice ] = alea;
    } // final fora
} // final adicionar

// organizar vetor
void organizar(int vetor[], int tamanho)
{
    for(int passes = 0; passes < tamanho; passes++)
    {
        for( int i = 0; i < tamanho; i++)
        {
            if(vetor[ i ] > vetor[ i + 1])
            {
                int temp = vetor[ i + 1 ];
                vetor[ i + 1 ] = vetor[ i ];
                vetor[ i ] = temp;
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
int pesquisaBinaria(int vetor[], int pesquisaValor, int inicio, int fim )
{
    // vari�vel
    int meio; //

    // enquanto o in�cio menor ou igual ao final fa�a
    while( inicio <= fim)
    {
        // determina o meio do vetor
        // inicio mais fim dividido por 2 � igual ao meio
        meio = (inicio + fim ) / 2;

        // fun��o exibe cabe�alho
        exibeCabecalho( fim );

        // fun��o exibe os elementos do vetor
        exibeLinha(vetor, inicio, meio, fim);

        // se a pesquisa for igual ao valor do vetor com o �ndice meio
        if(pesquisaValor == vetor[meio])
            return meio; // retorne o valor da posi��o meio

        // se n�o, se a pesquisa for menor que o valor do vetor com o �ndice meio
        else if(pesquisaValor < vetor[meio] )
            fim = meio - 1; // fim recebe o valor meio -1

        // se n�o, se a pesquisa for maior que o valor do vetir com o �ndice
        else
            inicio = meio + 1;

    } // final while

    return -1; // valor n�o localizado

} // final pesquisaBinaria

// imprime cabe�alho
void exibeCabecalho(int tamanho )
{
    // vari�vel contador
    int i = 0;

    cout << "\nPosi��es" << endl;

    for(int i = 0; i < tamanho ; i++)
        cout << setw(3) << i;

    cout << endl;

    for(int i = 0; i < 4 * tamanho; i++)
        cout << "_";

    cout << endl;
} // final exibe cabe�alho

// void exibeLinha(int [], int, int, int );
void exibeLinha(int vetor[], int inicio, int meio, int fim )
{
    // vari�vel contador
    int i;

    // loop pelo vetor
    for( i = 0; i < fim; i++)
    {
        if( i < inicio || i > fim )
            cout << " ";
        else if ( i == meio )
            cout << setw(3) << vetor[ i ] << "*";
        else
            cout << setw(3) << vetor[ i ];

    } // final for

} // final exibeLinha
