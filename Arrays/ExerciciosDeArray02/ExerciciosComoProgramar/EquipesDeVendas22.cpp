/*
    7.22 Utilize um array bidimensional para resolver o seguinte problema.
    Uma empresa tem quatro equipes de vendas (1 a 4) que vendem cinco
    produtos diferentes (1 a 5). Uma vez por dia, cada vendedor passa uma
    nota de cada tipo de produto diferente vendido. Cada nota contém  o seguinte:
    a) O número do vendedor
    b) O número do produto
    c) O valor total em reais desse produto vendido nesse dia
    Portanto, cada vendedor passa entre 0 e 5 notas de vendas por dia.
    Suponha que as informações a partir de todas as notas durante o último  mês estão
    disponíveis. Escreva um programa que lerá todas essas informações para as vendas
    do último mês e resumirá as vendas totais  por vendedor e produto.
    Todos os totais devem ser armazenados no array bidimensional sales.
    Depois de processar todas as informações  durante o último mês, imprima os resultados
    em formato tabular com cada uma das colunas representando um vendedor específico
    e  cada uma das linhas representando um produto específico.
    Cruze cada linha de total para obter as vendas totais de cada produto durante o  último mês;
    cruze cada coluna de total para obter as vendas totais por vendedor durante o último mês.
    Sua impressão tabular deve incluir  esses totais cruzados à direita das linhas totalizadas
    e na parte inferior das colunas totalizadas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 305). Edição do Kindle.
    Pedro, 11/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void entradaDeDados(double [][5], int, int);
void exibirTabela(double [][5], int, int);
void somaColuna(double [][5], int, int);

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constantes
    const int linha = 4;
    const int coluna = 5;

    // matriz
    double matrizVendas[ linha ][ coluna ];

    entradaDeDados(matrizVendas, linha, coluna);
    exibirTabela(matrizVendas, linha, coluna);

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// entradaDeDados
void entradaDeDados(double matriz[][ 5 ], int linha, int coluna)
{
    // variáveis
    int vendedor = 0;
    double produto = 0.0;

    cout << "ENTRADA DE DADOS" << endl;

    // loop for para adicionar informações
    for(int i = 0; i < linha; i++)
    {
        cout << "Número do vendedor: ";
        cin >> vendedor;

        for(int j = 0; j < coluna; j++)
        {
            cout << "Produto " << j + 1 << " valor das vendas R$ ";
            cin >> produto;

            // adicionar valores na
            matriz[ i ][ j ] = produto;

        } // final for coluna
    } // final for linha;

} // final entradaDeDados

// exibirTabela
void exibirTabela(double matriz[][ 5 ], int linha, int coluna)
{
    // variável
    double somaLinha = 0.0;
    double somaColuna = 0.0;
    double somaTotal = 0.0;

    // cabeçalho da tabela
    cout << "\n" << setw(50) << "TABELA DAS VENDAS" << endl;
    cout << "                     ";

    // loop para exibir cabeçalho das colunas
    for(int produto = 0; produto < coluna; produto++)

        // exibe cabeçalho das colunas
        cout << "Prod" << produto + 1 << setw(11);

    // exibe cabeçalho do total da linha
    cout << "Total"; // coluna total da linha

    // loop para exibir tabela
    for(int i = 0; i < linha; i++)
    {
        // título da linha
        cout << "\nVendedor" << setw(2) << i + 1
                << " R$ ";

        // loop para a coluna
        for(int j = 0; j < coluna; j++)
        {
            // exibir
            cout << setw(12) << setprecision(2) << fixed << matriz[ i ][ j ];

            // soma os valores da linha da matriz
            somaLinha += matriz[ i ][ j ];

        } // final for coluna

        // Exibe o valor total das linhas
        cout << setw(11) << setprecision(2) << fixed << somaLinha << endl;
        somaLinha = 0.0; // limpa a variável
    } // final for linha

    cout << "\nTot vendas R$ ";
    // loop para somar as colunas
    for(int i = 0; i < coluna; i++)
    {
        for(int j = 0; j < linha; j++)
        {
            somaColuna += matriz[ j ][ i ];
        } // final for linha

        cout << setw(12) << somaColuna;
        somaTotal += somaColuna;
        somaColuna = 0.0;
    } // final for coluna

    cout << setw(11) << somaTotal << endl;
    somaTotal = 0.0;

} // final exibir
