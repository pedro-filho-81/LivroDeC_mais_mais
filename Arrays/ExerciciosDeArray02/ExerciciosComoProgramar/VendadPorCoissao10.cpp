    /*
        7.10 Utilize um array unidimensional para resolver o seguinte problema.
        Uma empresa paga seu pessoal de vendas por comissão. Os vendedores
        recebem $ 200 por semana mais 9% de suas vendas brutas por semana.
        Por exemplo, um vendedor que vende $ 5.000 brutos em uma
        semana recebe $ 200 mais 9% de $ 5.000 ou um total de $ 650.
        Escreva um programa (utilizando um array de contadores) que determina
        quanto o pessoal de vendas ganhou em cada um dos seguintes intervalos
        (suponha que o salário de cada vendedor foi truncado para uma
        quantidade do tipo inteiro) :
        Deitel_C++_Cap07.indd 302 eitel_C++_Cap07.indd 302 17/4/2006 13:43:10 7/4/2006 13:43:10
        303
        a) $ 200–$ 299
        b) $ 300–$ 399
        c) $ 400–$ 499
        d) $ 500–$ 599
        e) $ 600–$ 699
        f) $ 700–$ 799
        g) $ 800–$ 899
        h) $ 900–$ 999
        i) $ 1.000 e acima
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void adicionarValores( int [], int );
void mostrarValores( int [], int );
void geraBarraAsterisco( int [], int ); // gera saída do gráfico de barras dos valores

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    const int tamanho = 10;

    // array
    int pagamentoPessoal[ tamanho ];

    // chama a função adicionar valores
    adicionarValores( pagamentoPessoal, tamanho );
    // chama a função mostrar valores
    mostrarValores( pagamentoPessoal, tamanho );
    // chama a função barra de asterisco
    geraBarraAsterisco( pagamentoPessoal, tamanho );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// adicionarValores
void adicionarValores( int vetor[], int tamanho )
{
    const int salarioFixo = 200;

    // variáveis
    size_t i;
    double totalDasVendas = 0;
    double comissao = 0;
    double salarioAtual = 0;

    // cabeçalho
    cout << "ENTRADA DE VALORES" << endl;

    // loop para adicionar valores ao vetor
    for( i = 0; i < tamanho; i++ )
    {
        // entrada de dados
        cout << "Vendedor " << i + 1 << " total das vendas: R$ ";
        cin >> totalDasVendas;

        // calcular a comissão e salário atual
        comissao = totalDasVendas * 9 / 100;
        salarioAtual = salarioFixo + comissao;

        // vetor recebe o valor do salário atual dos vendedores
        vetor[ i ] = salarioAtual;

    } // fim for
} // fim da função adicionarValores

// cria a função mostrarValores
void mostrarValores( int vetor[], int tamanho )
{
    // configuração
    cout << fixed << setprecision( 2 ); // duas casas decimais

    // cabeçalho
    cout << "\nFOLHA DE PAGAMENTO" << endl;

    // loop linha
    for( int linha = 0; linha < tamanho; linha++ )
    {
        // imprime o vendedor
        cout << "Vendedor " << setw( 3 ) << linha + 1
                << setw( 5 ) << "R$ " << setw( 7 ) << vetor[ linha ] << endl;
    } // fim for linha
} // fim função

// cria a função geraBarraAsterisco
void geraBarraAsterisco( int vetor[], int tamanho )
{
    // cabeçalho
    cout << "\nGERA BARRA DE ASTERISCO" << endl;

    // constante
    const int tamanhoFrequecia = 11;
    // cria vetor frequência
    int frequencia[ tamanhoFrequecia ] = { 0 };

    // para cada valor incrementa a frequência apropriada
    for( int i = 0; i < tamanho; i++ )
        // incrementa a frequência
        frequencia[ vetor[ i ]  / 100 ]++;

    // loop para cada frequência do valor mostrar gráfico de barras
    for( int contar = 0; contar < tamanhoFrequecia; contar++ )
    {
        // GERA A SAÍDA DO GRÁFICO DE BARRAS
        // se j igual a zero
        if( contar == 0 )
        {
            // imprima
            cout << "R$ 200 - R$ 299:  ";
        } // fim if

        // se não se j igual a 10
        else if( contar == 10 )
        {
            // imprima
            cout << "R$ 1000 ou mais:  ";

            // loop para pesquisar no vetor valores iguais ou maiores que 1100
            for( int mil = 0; mil < tamanho; mil++ )
                // se o vetor tiver valor maior ou igual a 1100
                if( vetor[ mil ] >= 1100 )
                    // imprima
                    cout << "* ";

        } // fim else if
        else
        {
            if( contar > 2 )
                // imprima
                cout << "R$ " << contar * 100 << " - R$ " << ( contar * 100 ) + 99 << ":  ";
        } // fim else

        // loop para mostrar o gráfico de barras
        for( int asterisco = 0; asterisco < frequencia[ contar ]; asterisco++ )
        {
            // imprima
            cout << "* ";
        } // fim for

        // se contar maior que 2
        if( contar > 1 )
            cout << endl; // pule uma linha

    } // fim for externo

} // fim função geraBarraAsterisco
