/*
    Pesquisa binária em um vetor ordenado
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// protótipos
void adicionar(int [], int );
void organizar(int [], int);
void exibirElementos(int [], int );
int pesquisaBinaria(int [], int, int, int );
void exibeCabecalho(int );
void exibeLinha(int [], int, int, int );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constante
    const int INDICE = 15;

    // vetor
    int vetor[ INDICE ] = {0};

    // variáveis
    int i = 0; // contador
    int chave = 0; // valor a ser pesquisado
    int resultado = 0; // recebe o local onde o valor foi encontrado ou -1 não localizado

    // chama a função
    adicionar(vetor, INDICE); // adiciona valores aleatórios ao vetor

    // entra com o valor a ser psequisado
    cout << "Digite um valor entre 1 e 30: ";
    cin >> chave; // entrada do usuário

    cout << "Vetor original: " << endl;
    exibirElementos(vetor, INDICE ); // exibe os elementos do vetor

    cout << "Vetor organizado:" << endl;
    organizar(vetor, INDICE);
    exibirElementos(vetor, INDICE);

    cout << endl;

    // procura o valor no vetor e retorna a posição caso encontrado
    // ou retorna -1 se não for encontrado
    resultado = pesquisaBinaria(vetor, chave, 0, INDICE -1 );

    cout << endl;

    // exibe o resultado
    if(resultado != -1)
        cout << chave << " encontrado na posição " << resultado << endl;
    else
        cout << chave << " não foi encontrado." << endl;

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
        // variável recebe valor aleatório
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

// pesquisaBinaria função para pesquisar um valor no vetor
int pesquisaBinaria(int vetor[], int pesquisaValor, int inicio, int fim )
{
    // variável
    int meio; //

    // enquanto o início menor ou igual ao final faça
    while( inicio <= fim)
    {
        // determina o meio do vetor
        // inicio mais fim dividido por 2 é igual ao meio
        meio = (inicio + fim ) / 2;

        // função exibe cabeçalho
        exibeCabecalho( fim );

        // função exibe os elementos do vetor
        exibeLinha(vetor, inicio, meio, fim);

        // se a pesquisa for igual ao valor do vetor com o índice meio
        if(pesquisaValor == vetor[meio])
            return meio; // retorne o valor da posição meio

        // se não, se a pesquisa for menor que o valor do vetor com o índice meio
        else if(pesquisaValor < vetor[meio] )
            fim = meio - 1; // fim recebe o valor meio -1

        // se não, se a pesquisa for maior que o valor do vetir com o índice
        else
            inicio = meio + 1;

    } // final while

    return -1; // valor não localizado

} // final pesquisaBinaria

// imprime cabeçalho
void exibeCabecalho(int tamanho )
{
    // variável contador
    int i = 0;

    cout << "\nPosições" << endl;

    for(int i = 0; i < tamanho ; i++)
        cout << setw(3) << i;

    cout << endl;

    for(int i = 0; i < 4 * tamanho; i++)
        cout << "_";

    cout << endl;
} // final exibe cabeçalho

// void exibeLinha(int [], int, int, int );
void exibeLinha(int vetor[], int inicio, int meio, int fim )
{
    // variável contador
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
