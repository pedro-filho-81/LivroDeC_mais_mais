/*
    adiciona valores não repetidos ao vetor.
    Pedro, 13/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// protótipos
void adicionar(int [], int );
void exibir(int [], int );
void organizar(int [], int );
int pesquisaLinear(int [], int, int );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    const int INDICE = 10;

    int vetor[ INDICE ];

    adicionar(vetor, INDICE);
    exibir(vetor, INDICE);

    organizar(vetor, INDICE);
    exibir(vetor, INDICE );

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionar
void adicionar(int vetor[], int tamanho)
{
    // variáveis
    int contarWhile = 0;
    int numerosRepetidos = 0;
    int contar = 0;

    int vetorNumRepete[ tamanho * 2] = {0};

    // gera semente para rand
    srand( time( 0 ) );

    int alea = 1 + rand() % 30;
    int resposta = pesquisaLinear(vetor, alea, tamanho);

    // cria loop infinito
    while( contar < tamanho )
    {
        contarWhile++;

        if(resposta == 1)
        {
            vetorNumRepete[ contar ] = alea;

            numerosRepetidos++;
            cout << "Valor repetido " << setw(2) << alea << endl;
        }

        if( resposta == -1)
        {
            vetor[ contar ] = alea;
            cout << "Valor aleatório = " << setw(2) << alea << endl;
            contar++; // incrementa 1
        }// final if -1

        alea = 1 + rand() % 30;
        resposta = pesquisaLinear(vetor, alea, tamanho);

    } // final while

    cout << "\nNúmeros adicionados = " << setw(2) << contar << endl;
    cout << "Números repetidos = " << setw(2) << numerosRepetidos << endl;

} // final adicionar

// pesquisaLinear
int pesquisaLinear(int vetor[], int chave, int tamanho )
{
    for(int i = 0; i < tamanho; i++ )
        if(vetor[ i ] == chave )
            return 1;

    return -1;
} // final pesquisaLinear

// exibir
void exibir(int vetor[], int tamanho )
{
    cout << "\nVetor = {";
    for( int i = 0; i < tamanho; i++)
        cout << setw(5) << vetor[ i ];
    cout << "   };" << endl;
} // final exibir

// organizar
void organizar(int vetor[], int tamanho )
{
    for(int passos = 0; passos < tamanho - 1; passos++)
    {
        bool trocaValor = false;
        for(int ordem = 0; ordem < tamanho - passos - 1; ordem++)
        {
            if(vetor[ordem] > vetor[ordem + 1] )
            {
                int breve = vetor[ordem];
                vetor[ordem] = vetor[ ordem + 1 ];
                vetor[ordem + 1] = breve;
                trocaValor = true;
            } // final if ordem
        } // final for ordem
        // se não existir nenhuma troca sair
        if( !trocaValor )
            break;
    } // final for passos
} // final organizar
