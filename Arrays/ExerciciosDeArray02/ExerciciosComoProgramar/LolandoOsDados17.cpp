/*
    7.17 Escreva um programa que simula a rolagem de dois dados.
    O programa deve utilizar rand para rolar o primeiro dado e deve
    utilizar  rand novamente para rolar o segundo dado.
    A soma dos dois valores deve então ser calculada. [Nota: Cada dado
    pode mostrar um valor  inteiro de 1 a 6, portanto a soma dos dois valores
    variará de 2 a 12, com 7 sendo a soma mais freqüente, e 2 e 12 sendo
    as somas menos  freqüentes. A Figura 7.32 mostra as 36 possíveis
    combinações de dois dados. Seu programa deve rolar os dois dados
    36.000 vezes. Utilize  um array unidimensional para contar o número de vezes
    que cada possível soma aparece. Imprima os resultados em um formato tabular.
    Além disso, determinará se os totais são razoáveis (isto é, há seis maneiras de rolar
    um 7, então aproximadamente um sexto de todas as  rolagens deve ser 7).]

Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edição do Kindle.
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
void rolaDados(int [][ 600 ], int );
void exibirDados(int [][ 600 ], int);

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int resultado = 0;

    // constante
    const int arraySize = 600;

    // matriz
    int matriz[arraySize][arraySize] = {0};

    rolaDados(matriz, arraySize);
    exibirDados(matriz, arraySize);

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// rolaDados
void rolaDados(int matriz[][ 600 ], int arraySize)
{
    // gerador para rand
    srand( time( 0 ) );

    // loop para linhas
    for(int linha = 0; linha < arraySize; linha++)
    {
        // loop para colunas
        for(int coluna = 0; coluna < arraySize; coluna++)
        {
            // dados recebe valores aleatórios
            int dado1 = 1 + rand() % 6;
            int dado2 = 1 + rand() % 6;

            // matriz recebe a soma dos dados
            matriz[linha][coluna] = dado1 + dado2;

        } // final for coluna
    } // final for linha
} // final rolaDados

// exibirDados
void exibirDados(int matriz[][ 600 ], int arraySize)
{
    // constante
    const int frequenciaSize = 13;
    int frequencia[frequenciaSize] = {0};

    // loop para linhas
    for( int linha = 0; linha < arraySize; linha++)
    {
        // loop para colunas
        for( int coluna = 0; coluna < arraySize; coluna++)
        {
            // soma os valores da matriz
            frequencia[ matriz[ linha ][ coluna ] ]++;
        } // final coluna
    } // final linha

    // cabeçalho
    cout << "Valor" << setw(15) << "Frequência" << endl;

    // loop para mostrar os valores da frequência
    for(int contar = 2; contar < frequenciaSize; contar++)
        // exibir os valores da frequência
        cout << setw(2) << contar << setw(15) << frequencia[ contar ] << endl;

} // final exibirDados
