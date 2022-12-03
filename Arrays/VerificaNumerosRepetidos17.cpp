/*
    verifica se existe números repetidos no vetor, podendo usar
    a pesquisa linear ou a pesquisa binária
    Pedro,03/12/2022
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
int pesquisaBinaria(const int [], int, int, int );
int pesquisaLinear( int [], int, int );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constante para o índice do vetor
    const int INDICE = 15;

    // vetor com índice constante
    int vetor[ INDICE ] = {0};

    // chama a função para
    adicionar(vetor, INDICE); // adicionar valores aleatórios ao vetor

    // mostra o vetor não organizado
    cout << "Vetor original: " << endl;
    exibirElementos(vetor, INDICE ); // exibe os elementos do vetor

    // chama a função para organizar o vetor
    organizar(vetor, INDICE);

    // mostra o vetor organizado
    cout << "Vetor organizado:" << endl;
    exibirElementos(vetor, INDICE);

    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionar função para adicionar valores ao vetor
void adicionar(int vetor[], int tamanho  )
{
    // variável
    int resposta; // recebe o valor da pesquisa
    int alea; // para os números aleatórios
    int contaTrocados = 0; // para contrar os valores substituidos

    srand( time( 0 ) ); // gera semente para rand

    // loop para adicionar valores ao vetor
    for( int indice = 0; indice < tamanho; indice++)
    {
        // variável alea recebe valor aleatório entre 1 e 30
        alea = 1 + rand() % 30;

        // a variável resposta recebe um valor da função pesquisaLinear
        // achei melhor para ser usada dentre dessa função
        resposta = pesquisaLinear(vetor, alea, tamanho);

        // pesquisa binária não é ideal para pesquisar valores dentro dessa função
        // resposta = pesquisaBinaria(vetor, alea, 0, tamanho);

        // mostra como está sendo adicionado os valores no vetor
        cout << setw(3) << alea << setw(23) << " adicionado na posição "
                << setw(3) << indice << endl;

        // este enquanto é utilizado quando a variável resposta recebe um valor
        // diferente de -1, ou seja, recebe um valor repetido
        while(resposta != -1)
        {
            // variável alea usado para receber outro recebe valor aleatório
            alea = 1 + rand() % 30;

            // a variável resposta recebe um valor da função pesquisa
            // a função retorna o valor pesquisado ou -1
            resposta = pesquisaLinear(vetor, alea, tamanho);

            // resposta = pesquisaBinaria(vetor, alea, 0, tamanho);

            // mostra o valor trocado por outro, subistituindo o valor duplicado
            // ou seja, um valor que já tem no vetor
            cout << setw(3) << alea << setw(23) << " trocado na posição "
                    << setw(3) << indice << endl;

            // contador dos valores trocados
            contaTrocados += 1;

        } // final while

        // verifica se a variável resposta é igual a -1 este indica
        // que não existe um valor igual no vetor
        if(resposta == -1 )
            // e ao vetor é adicionado o valor da variável alea
            vetor[indice] = alea;

    } // final for

    // mostra quantidade dos valores trocados
    cout << "\nNo vetor fora substituidos " << contaTrocados << " elementos.\n" << endl;

} // final adicionar

// função pesquisaLinear
int pesquisaLinear(int vetor[], int chave, int tamanho)
{
    // loop para pesquisar o valor chave no vetor
    for(int i = 0; i < tamanho; i++)
    {
        // verifica se valor chave é igual ao elemento do vetor
        if(chave == vetor[i]) // se verdade
            // retorna a posição que se encontra o valor da chave
            return i;

    } // final for

    // se não existe um valor igual no vetor retorna o valor -1
    return -1;

} // final função

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

// pesquisaBinaria função para pesquisar um valor no vetor
int pesquisaBinaria(const int vetor[], int pesquisaValor, int inicio, int fim )
{
    // variável
    int meio; //

    // enquanto o início menor ou igual ao final faça
    while( inicio <= fim)
    {
        // determina o meio do vetor
        // inicio mais fim dividido por 2 é igual ao meio
        meio = (inicio + fim ) / 2;

        // se a pesquisa for igual ao valor do vetor com o índice meio
        if(pesquisaValor == vetor[meio]) {
            return meio; // retorne o valor da posição meio
        }

        // se não, se a pesquisa for menor que o valor do vetor com o índice meio
        else if(pesquisaValor < vetor[meio] ) {
            fim = meio - 1; // fim recebe o valor meio -1
        } // final else if

        // se não, se a pesquisa for maior que o valor do vetor
        else {
            // parâmetro inicio recebe variável meio ais um
            inicio = meio + 1;
        } // final else

    } // final while

    return -1; // valor pesquisado não localizado

} // final pesquisaBinaria
