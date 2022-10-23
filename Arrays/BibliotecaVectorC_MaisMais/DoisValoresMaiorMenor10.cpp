/*
    programa para exibir dois valores inteiro e um loop while
    1. Escreva um programa que consista em um loop while que
    (a cada volta do loop) leia dois inteiros e os imprima.
    Saia do programa quando terminar '|' é introduzido.
    2. Altere o programa para escrever o menor valor é: seguido pelo
    menor dos números e o maior valor é: seguido pelo maior valor.
    3. Aumente o programa para que ele escreva na linha os números
    são iguais (somente) se forem iguais.
    // 4. Altere o programa para que ele use doubles em vez de ints.
    // Pedro, 20/10/2022
    // 5. Altere o programa para que ele escreva os números quase iguais
    // depois de escrever qual é o maior e o menor se os dois números
    // diferirem por menos de 1,0/100.
    // Pedro, 23/10/2022
*/
// 6. Agora mude o corpo do loop para que ele leia apenas um double de cada vez.
// Defina duas variáveis ​​para acompanhar qual é o menor e qual é o maior valor que
// você viu até agora. Cada vez que passar pelo loop, escreva o valor inserido.
// Se for o menor até agora, escreva o menor até agora após o número.
 // Se for o maior até agora, escreva o maior até agora após o número.
// Pedro, 23/10/2022
#include <vector>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void entradaDeDados(vector<double> & ); // adiciona valores ao vetor via teclado
void exibirValores( const vector<double> & ); // exibe os valores do vetor
double menorValor( vector<double> & ); // encontra o menor valor do vetor
void maiorValor( vector<double> & ); // encontra o maior valor do vetor
void valoresIguais( vector<double> & ); // compara se existe 2 valores iguais no vetor

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria um vetor
    vector<double> valores;

    // RECEBE Um VALOR E VERIFICA SE O NÚmERO DIGITADO
    // É O maior OU o menor VALOR DIGITADO ATÉ O PRESENTE mOmENTO
    entradaDeDados(valores);

    exibirValores( valores );

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

    cout << "Digite números reais: ";

    // enquanto número igual a um valor faça
    while( cin >> numero )
    {
        // push_back adiciona elementos no final do vetor
        vetor.push_back( numero );

        // VERIFICA SE O VALOR DIGITADO É O maior OU O menor
        // valor QUE EXISTE NO VETOR ATÉ O PRESENTE momento
        maiorValor( vetor );

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
    cout << "O menor valor até agora é " << menor << endl;
    // return menor;

} // final menorValor

// maiorValor
void maiorValor(vector<double> &vetor)
{
    double maior = vetor[ 0 ];
    for(double valor: vetor)
        if(valor > maior)
            maior = valor;

    cout << "O maior valor até agora é " << maior << endl;
//    return maior;

}  // final maior valor

// valoresIguais
void valoresIguais(vector<double> &vetor)
{
    double soma = 0.0;

    // loop para o primeiro vetor
    for(int i = 0; i < vetor.size(); i++)
    { // loop para o segundo vetor
        for( int j = i + 1; j < vetor.size(); j++)
        {
            // verifica se o vetor[ i ] é igual  ao vetor[ j ]
            if(vetor[ i ] == vetor[ j ] ) // se verdade
            {
                cout << "vetor " << vetor[ i ] << " posição " << j + 1 << endl;
                soma++;
            } // final if

        } // final for j
    } // final for i

    if( soma > 0)
        cout << "Vetor valores possui " << soma << " valor(es) igual(is)." << endl;
    else
        cout << "Vetor não possui valores iguais." << endl;
} // final valoresIguais
