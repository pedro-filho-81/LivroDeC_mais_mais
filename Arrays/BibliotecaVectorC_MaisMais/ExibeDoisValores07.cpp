/*
    programa para exibir dois valores inteiro e um loop while
    1. Escreva um programa que consista em um loop while que
    (a cada volta do loop) leia dois inteiros e os imprima.
    Saia do programa quando terminar '|' � introduzido.
    2. Altere o programa para escrever o menor valor �: seguido pelo
    menor dos n�meros e o maior valor �: seguido pelo maior valor.
*/
#include <algorithm>
#include <vector>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void entradaDeDados(vector<int> & ); // adiciona valores ao vetor
void exibirValores( const vector<int> & ); // exibe os valores do vetor
void menorValor( vector<int> & ); // pesquisa o menor valor do vetor
void maiorValor( vector<int> & ); // busca o maior valor do vetor
void valoresIguais( vector<int> & ); // compara se existe 2 valores iguais no vetor

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria um vetor
    vector<int> valores;

    entradaDeDados(valores);

    exibirValores( valores );

    menorValor( valores );
    maiorValor( valores );
    valoresIguais( valores );

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// entradaDeDados
void entradaDeDados(vector<int> &vetor)
{
    // vari�veis
    int numero = 0;

    cout << "Digite n�meros inteiros diferentes: ";

    // enquanto n�mero igual a um valor inteiro fa�a
    while( cin >> numero )
    {
        // push_back adiciona elementos no final do vetor
        vetor.push_back( numero );
    } // final while

} // final entradaDeDados

// exibirValores
void exibirValores( const vector<int> &vetor)
{
    cout << "\nvalores = {";

    // loop para mostra os elementos do vetor
    for( int valor : vetor)
        // exibir valores
        cout << setw(3) << valor;

    cout << "   };" << endl;
} // final exibirValores

// menorValor
void menorValor(vector<int> & vetor)
{
    // vari�vel menor recebe o valor do vetor zero
    int menor = vetor[ 0 ];
    // loop pelo vetor
    for(int valor : vetor)
        // verifica se tem um valor no vetor menor que a vari�vel menor
        if(valor < menor) // se verdade
            // vari�vel recebe o valor
            menor = valor;

    // ap�s exibe o menor valor
    cout << "O menor valor � " << menor << endl;

} // final menorValor

// maiorValor
void maiorValor(vector<int> &vetor)
{
    int maior = vetor[ 0 ];
    for(int valor: vetor)
        if(valor > maior)
            maior = valor;

    cout << "O maior valor � " << maior << endl;
}  // final maior valor

// valoresIguais
void valoresIguais(vector<int> &vetor)
{
    // loop para o primeiro vetor
    for(int i = 0; i < vetor.size(); i++)
    { // loop para o segundo vetor
        for( int j = i + 1; j < vetor.size(); j++)
        {
            // verifica se o vetor[ i ] � igual  ao vetor[ j ]
            if(vetor[ i ] == vetor[ j ]) // se verdade
                // imprima os n�meros iguais
                cout << "Valores iguais " << vetor[ i ] << " = " << vetor[ j ] << endl;
        } // final for j
    } // final for i
} // final valoresIguais
