/*
    7.24 (O Passeio do Cavalo) Um dos quebra-cabeças mais interessantes dos entusiastas
    do xadrez é o problema do Passeio do Cavalo. Esta é a pergunta: a peça de xadrez chamada
    cavalo pode mover-se em um tabuleiro vazio e tocar cada um dos 64 quadrados uma vez
    e unicamente uma vez? Estudamos esse problema intrigante profundamente nesse exercício.
    O cavalo move-se em um caminho em forma de L (duas posições em uma direção e então
    uma em uma direção perpendicular). Portanto, a partir de um quadrado no meio de um
    tabuleiro vazio, o cavalo pode fazer oito movimentos diferentes (numerados de 0 a 7)
    como mostra a Figura 7.34.
    a) Desenhe um tabuleiro de 8 por 8 em uma folha de papel e experimente fazer o Passeio
    do Cavalo à mão. Coloque um 1 no primeiro quadrado para o qual você move o cavalo,
    um 2 no segundo quadrado, um 3 no terceiro etc. Antes de iniciar o passeio, estime aonde
    você imagina chegar, lembrando que um passeio completo consiste em 64 movimentos.
    Até onde você foi? Isso foi próximo de sua estimativa?
    b) Agora vamos desenvolver um programa que moverá o cavalo por um tabuleiro.
    O tabuleiro é representado por um array bidimensional 8 por 8 chamado board.
    Cada um dos quadrados é inicializado como zero. Descrevemos cada um dos oito
    possíveis movimentos em termos de seus componentes verticais e horizontais. Por exemplo,
    um movimento do tipo 0 como mostrado na Figura 7.34 consiste em mover dois quadrados
    horizontalmente para direita e um quadrado verticalmente para cima. O movimento 2 consiste
    em mover um quadrado horizontalmente para a esquerda e dois quadrados verticalmente
    para cima. Movimentos horizontais para a esquerda e movimentos verticais para cima são
    indicados com números negativos. Os oitos movimentos podem ser descritos por dois arrays
    unidimensionais, horizontal e vertical, como segue:

    horizontal[ 0 ] = 2, horizontal[ 1 ] = 1, horizontal[ 2 ] = -1, horizontal[ 3 ] = -2, horizontal[ 4 ] = -2
    horizontal[ 5 ] = -1, horizontal[ 6 ] = 1,  horizontal[ 7 ] = 2,

    vertical[ 0 ] = -1,  vertical[ 1 ] = -2,  vertical[ 2 ] = -2, , vertical[ 3 ] = -1, vertical[ 4 ] = 1,
    vertical[ 5 ] = 2, vertical[ 6 ] = 2, vertical[ 7 ] = 1

    Faça com que as variáveis currentRow e currentColumn indiquem a linha e a coluna
    da posição atual do cavalo. Para fazer um movimento do tipo moveNumber,
    onde moveNumber está entre 0 e 7, seu programa utiliza as instruções
    currentRow += vertical[ moveNumber ];
    currentColumn += horizontal[ moveNumber ];
    Mantenha um contador que varia de 1 para 64. Registre a última contagem em cada
    quadrado para o qual o cavalo se move. Lembre-se de testar cada potencial movimento
    para ver se o cavalo já visitou esse quadrado e, naturalmente, teste cada potencial movimento
    para certificar-se de que o cavalo não caia fora do tabuleiro. Agora escreva um programa
    para mover o cavalo pelo tabuleiro.
    Execute o programa. Quantos movimentos o cavalo fez?
    Pedro, 24/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void tabuleiro( int [][ 8 ], int ); // desenha o tabuleiro
void exibirTabuleiro(int [][ 8 ], int );
void moveCavalo(int [][8], int, int [], int [] );
void moveCavalo64(int [][8], int, int [], int [], int );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 8;
    const int arraySize64 = 100;

    int matriz[ arraySize ][ arraySize ];
    int horizontal[ arraySize ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int vertical[ arraySize ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int linha[arraySize64] =   {0, 2, -1, 2, 1, 2, 1, -2, -1, 2, 1, -2, -2, -2, 1, -2, 2, -2, 1, 2, 1, 2, 1, -2, -1,
                                              2,  1, -2, -2, -2, -1, 2, -2, 2, -1, 2, 2, 2, -1, -2, 1, 2, -1, -2, -1, -2, 1};
    int coluna[arraySize64] = {0, 1, 2, -1, -2, 1, 2, -1, 2, 1, 2, -1, 1, -1, -2, 1, 1, 1, -2, -1,  2, 1, -2, -1, -2,
                                               1, -2, -1, 1, -1, 2, 1, 1, 1, 2, -1, 1, -1, -2, 1, -2, -1, -2, 1, 2, -1, -2};

    // chama funções
    tabuleiro( matriz, arraySize );
    exibirTabuleiro( matriz, arraySize );

    /*
        b) Agora vamos desenvolver um programa que moverá o cavalo por um tabuleiro.
        O tabuleiro é representado por um array bidimensional 8 por 8 chamado board.
        Cada um dos quadrados é inicializado como zero. Descrevemos cada um dos oito
        possíveis movimentos em termos de seus componentes verticais e horizontais. Por exemplo,
        um movimento do tipo 0 como mostrado na Figura 7.34 consiste em mover dois quadrados
        horizontalmente para direita e um quadrado verticalmente para cima. O movimento 2 consiste
        em mover um quadrado horizontalmente para a esquerda e dois quadrados verticalmente
        para cima. Movimentos horizontais para a esquerda e movimentos verticais para cima são
        indicados com números negativos. Os oitos movimentos podem ser descritos por dois arrays
        unidimensionais, horizontal e vertical, como segue:
        Pedro, 24/12/2022
    */

    // chama as funções para o exercício b)
    // moveCavalo( matriz, arraySize, linha, coluna );
    // exibirTabuleiro(matriz, arraySize );

    // exercício b2)
    cout << "\nTabuleiro para as 64 posições." << endl;
    moveCavalo64(matriz, arraySize, linha, coluna, arraySize64 );
    exibirTabuleiro(matriz, arraySize );

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// cria tabuleiro
void tabuleiro(int matriz[][ 8 ], int arraySize )
{
    // linhas
    for(int i = 0; i < arraySize; i++)
    {   // colunas
        for( int j = 0; j < arraySize; j++)
        {
            matriz[ i ][ j ] = 0; // cria o tabuleiro com zeros

        } // final for j
    } // final for i
} // final tabuleiro

// exibe tabuleiro
void exibirTabuleiro(int matriz[][ 8 ], int arraySize )
{
    // título
    cout << setw(25) << "Tabuleiro" << endl;
    cout << "           "; // espaços e branco

    // loop para criar nímeros da coluna
    for(int col = 0; col < arraySize; col++)
        // exibe números da coluna
        cout << setw(3) << col;

    cout << endl; // nova linha

    for(int i = 0; i < arraySize; i++)
    {
        cout << "Linha " << i << " => ";
        for( int j = 0; j < arraySize; j++)
        {   // imprime os valores da matriz
            cout << setw(3) << matriz[ i ][ j ];
        } // final for j

        cout << endl;

    } // final for i
} // final exibir

// moveCavalo
void moveCavalo(int matriz[][ 8 ], int arraySize, int vertical[], int horizontal[] )
{
    // poderia ser programado para entrada do usuário
    int linha = 0; // posição inicial da linha
    int coluna = 0; // da coluna

    // valor na posição inicial
    // matriz[ linha ][ coluna ] = 9;

    // loop para movimento do cavalo
    for(int i = 0; i < arraySize; i++ )
    {
        // linha
        // verifica se o valor na matriz é maior que zero
        if( vertical[i] > 0 ) // se verdade
            linha +=   vertical[ i ]; // o valor é somado ao valor da linha
        else if( vertical[ i ] < 0 ) // se menor que zero
            linha += vertical[ i ]; // soma o valor negativo a linha

        // coluna
        if( horizontal[ i ] > 0 )
            coluna += horizontal[ i ];
        else if( horizontal[ i ] < 0 )
            coluna += horizontal[ i ];

        matriz[ linha ][ coluna ] = i + 1; // matriz recebe um valor

        // retornam a posição inicial
       // linha = 3;
       // coluna = 4;

    } // final for i
} // final moveCavalo

// moveCavalo64
void moveCavalo64(int matriz[][ 8 ], int arraySize, int linha[], int coluna[], int arraySize64 )
{
    // variáveis
    int linhaAtual = 0;
    int colunaAtual = 0;
    int contador = 1;

    // entrada de dados
    cout << "Digite a posição no tabuleiro 8x8\npara o início da jogada." << endl;
    cout << "Informe a posição da linha: ";
    cin >> linhaAtual;
    cout << "Informe a posição da coluna: ";
    cin >> colunaAtual;

    matriz[ linhaAtual ][ colunaAtual ] = contador;

    for(int i = 1; i < 47; i++ )
    {
        linhaAtual += linha[ i ];
        colunaAtual += coluna[ i ];
        matriz[ linhaAtual ][ colunaAtual ] = i + 1;
    }

} // final moveCavalo64
