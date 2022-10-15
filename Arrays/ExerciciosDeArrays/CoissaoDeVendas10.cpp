/*
    7.10 Utilize um array unidimensional para resolver o seguinte problema.
    Uma empresa paga seu pessoal de vendas por comiss�o. Os vendedores
    recebem $200 por semana mais 9% de suas vendas brutas por semana.
    Por exemplo, um vendedor que vende $5.000 brutos em uma  semana
    recebe $200 mais 9% de $5.000 ou um total de $650.
    Escreva um programa (utilizando um array de contadores) que determina
    quanto o pessoal de vendas ganhou em cada um dos seguintes intervalos
    (suponha que o sal�rio de cada vendedor foi truncado para uma
     quantidade do tipo inteiro):
     Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 302). Edi��o do Kindle.
     Pedro, 29/09/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void adicionarValores(int [], int [], int[], int );
void exibirValores(int [], int [], int [], int );
void graficoDeBarras(int [], int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // constantes
    const int arraySize = 10;

    // vari�vel
    int valorDaVenda = 0;

    // vetor
    int vetorSalario[arraySize] = {0};
    int vetorComissao[arraySize] = {0};
    int vetorVendas[arraySize] = {0};

    // chama fun��o adicionarValores
    adicionarValores(vetorVendas, vetorComissao, vetorSalario, arraySize);

    exibirValores(vetorVendas, vetorComissao, vetorSalario, arraySize);

    graficoDeBarras(vetorSalario, arraySize);

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionar valor
void adicionarValores(int vetorVendas[], int vetorComissao[], int vetorSalario[], int tamanho)
{
    // constantes
    const int fixo = 200;
    const double taxa = 0.09;

    // vari�vel
    int valorDaVenda = 0;

    cout << "\tENTRADA DE DADOS" << endl;

    for(int i = 0; i < tamanho; i++)
    {
        // entrada de dados
        cout << "Total das vendas do vendedor " << i + 1 << " R$ ";
        cin >> valorDaVenda;

        // enquanto valor da venda menor ou igual a 0
        while( valorDaVenda <= 0)
        {
            // imprima
            cout << "ERRO! valor indevido." << endl;
            cout << "informe o valor da venda R$ ";
            cin >> valorDaVenda;
        } // final enquanto

        // atribuindo valores aos vetores
        vetorVendas[ i ] = valorDaVenda;
        vetorComissao[ i ] = valorDaVenda * taxa;
        vetorSalario[ i ] = fixo + vetorComissao[ i ];
    } // final for
} // final adicionar

// exibirValores
void exibirValores(int vetorVendas[], int vetorComissao[], int vetorSalario[], int tamanho)
{
    // constante
    const int fixo = 200;

    // cabe�alho
    cout << "\n\t\tCOmISS�O POR VENDAS" << endl;
    cout << "                 ";

    // t�tulos
    cout << "Vendas"
            << setw(10) << "Comiss�o"
            << setw(10) << "Sal.Fixo"
            << setw(10) << "Sal�rio";

    cout << endl; // nova linha

    // loop para exibir sal�rio
    for(int i = 0; i < tamanho; i++)
    {
        // exibi valores
        cout << "Vendedor " << setw(2) << i + 1 << setw(3) << "R$"
                << setw(8) << vetorVendas[ i ]
                << setw(8) << vetorComissao[ i ]
                << setw(10) << fixo
                << setw(10) << vetorSalario[ i ] << endl;
    } // final for
} // final exibir valores

// graficoDeBrras
void graficoDeBarras(int vetorSalario[], int tamanho)
{
    // cabe�alho
    cout << "\n\tResumo do Pagamento dos Sal�rios" << endl;

    // tamanho do vetor frequ�ncia
    const int frequencySize = 11;

    // vetor frequ�ncia
    int frequency[frequencySize] = {0};


    // loop para a frequ�ncia dos sal�rios
    for( int salario = 0; salario < tamanho; salario++)
        frequency[ vetorSalario[ salario ] / 100 ]++;

    // loop para n�mera��o das barras
    for(int contar = 0; contar < frequencySize; contar++)
    {
        // se contar maior ou igual a 2 ent�o
        if( contar >= 2)
        {
            // verifica se contar igual a 10 ent�o
            if( contar == 10)
            {
                //exiba
                cout << "R$ 1000 ou mais: ";

                // loop para verificar no vetor se tem valores maiores que 1100
                for(int a = 0; a < tamanho; a++)

                    // se no vetor tiver valores maiores que 1100
                    if(vetorSalario[ a ] >= 1100)

                        // exibe asterisco
                        cout << '*';

            } // final if maior que 10

            else
                cout << "R$ " << contar * 100 << " - "
                        << "R$ " << (contar * 100) + 99 << ":  ";
        } // final if externo

        // loop para exibir asteriscos
        for(int estrelas = 0; estrelas < frequency[contar]; estrelas++)
        {
                cout << '*';
        } // final for

        cout << endl;
    } // final for externo
} // final graficoDeBrras
