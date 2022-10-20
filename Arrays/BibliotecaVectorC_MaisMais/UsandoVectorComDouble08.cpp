/*
    programa para exibir dois valores inteiro e um loop while
    1. Escreva um programa que consista em um loop while que
    (a cada volta do loop) leia dois inteiros e os imprima.
    Saia do programa quando terminar '|' é introduzido.
    2. Altere o programa para escrever o menor valor é: seguido pelo
    menor dos números e o maior valor é: seguido pelo maior valor.
    3. Aumente o programa para que ele escreva na linha os números
    são iguais (somente) se forem iguais.
*/
// 4. Altere o programa para que ele use doubles em vez de ints.
// Pedro, 20/10/2022
#include <vector>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void entradaDeDados(vector<double> & ); // adiciona valores ao vetor via teclado
void exibirValores( const vector<double> & ); // exibe os valores do vetor
void menorValor( vector<double> & ); // encontra o menor valor do vetor
void maiorValor( vector<double> & ); // encontra o maior valor do vetor
void valoresIguais( vector<double> & ); // compara se existe 2 valores iguais no vetor

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria um vetor
    vector<double> valores;

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
void entradaDeDados(vector<double> &vetor)
{
    // variáveis
    double numero = 0;

    cout << "Digite números real qualquer: ";

    // enquanto número igual a um valor inteiro faça
    while( cin >> numero )
    {
        // push_back adiciona elementos no final do vetor
        vetor.push_back( numero );
    } // final while

} // final entradaDeDados

// exibirValores
void exibirValores( const vector<double> &vetor)
{
    cout << "\nvalores = {";

    // loop para mostra os elementos do vetor
    for( double valor : vetor)
        // exibir valores
        cout << setw(8) << valor;

    cout << "   };" << endl;
} // final exibirValores

// menorValor
void menorValor(vector<double> & vetor)
{
    // variável menor recebe o valor do vetor zero
    double menor = vetor[ 0 ];
    // loop pelo vetor
    for(double valor : vetor)
        // verifica se tem um valor no vetor menor que a variável menor
        if(valor < menor) // se verdade
            // variável recebe o valor
            menor = valor;

    // após exibe o menor valor
    cout << "O menor valor é " << menor << endl;

} // final menorValor

// maiorValor
void maiorValor(vector<double> &vetor)
{
    double maior = vetor[ 0 ];
    for(double valor: vetor)
        if(valor > maior)
            maior = valor;

    cout << "O maior valor é " << maior << endl;
}  // final maior valor

// valoresIguais
void valoresIguais(vector<double> &vetor)
{
    // loop para o primeiro vetor
    for(int i = 0; i < vetor.size(); i++)
    { // loop para o segundo vetor
        for( int j = i + 1; j < vetor.size(); j++)
        {
            // verifica se o vetor[ i ] é igual  ao vetor[ j ]
            if(vetor[ i ] == vetor[ j ]) // se verdade
                // imprima os números iguais
                cout << "Primeiro valor " << vetor[ i ] << " na posição " << i + 1
                        << "\nSegundo valor " << vetor[ j ] << " na posição " << j + 1 << endl;
        } // final for j
    } // final for i
} // final valoresIguais
