/*
    7.24 (O Passeio do Cavalo) Um dos quebra-cabe�as mais interessantes dos entusiastas
    do xadrez � o problema do Passeio do Cavalo. Esta � a pergunta: a pe�a de xadrez chamada
    cavalo pode mover-se em um tabuleiro vazio e tocar cada um dos 64 quadrados uma vez
    e unicamente uma vez? Estudamos esse problema intrigante profundamente nesse exerc�cio.
    O cavalo move-se em um caminho em forma de L (duas posi��es em uma dire��o e ent�o
    uma em uma dire��o perpendicular). Portanto, a partir de um quadrado no meio de um
    tabuleiro vazio, o cavalo pode fazer oito movimentos diferentes (numerados de 0 a 7)
    como mostra a Figura 7.34.
    a) Desenhe um tabuleiro de 8 por 8 em uma folha de papel e experimente fazer o Passeio
    do Cavalo � m�o. Coloque um 1 no primeiro quadrado para o qual voc� move o cavalo,
    um 2 no segundo quadrado, um 3 no terceiro etc. Antes de iniciar o passeio, estime aonde
    voc� imagina chegar, lembrando que um passeio completo consiste em 64 movimentos.
    At� onde voc� foi? Isso foi pr�ximo de sua estimativa?
    b) Agora vamos desenvolver um programa que mover� o cavalo por um tabuleiro.
    O tabuleiro � representado por um array bidimensional 8 por 8 chamado board.
    Cada um dos quadrados � inicializado como zero. Descrevemos cada um dos oito
    poss�veis movimentos em termos de seus componentes verticais e horizontais. Por exemplo,
    um movimento do tipo 0 como mostrado na Figura 7.34 consiste em mover dois quadrados
    horizontalmente para direita e um quadrado verticalmente para cima. O movimento 2 consiste
    em mover um quadrado horizontalmente para a esquerda e dois quadrados verticalmente
    para cima. Movimentos horizontais para a esquerda e movimentos verticais para cima s�o
    indicados com n�meros negativos. Os oitos movimentos podem ser descritos por dois arrays
    unidimensionais, horizontal e vertical, como segue:

    horizontal[ 0 ] = 2, horizontal[ 1 ] = 1, horizontal[ 2 ] = -1, horizontal[ 3 ] = -2, horizontal[ 4 ] = -2
    horizontal[ 5 ] = -1, horizontal[ 6 ] = 1,  horizontal[ 7 ] = 2,

    vertical[ 0 ] = -1,  vertical[ 1 ] = -2,  vertical[ 2 ] = -2, , vertical[ 3 ] = -1, vertical[ 4 ] = 1,
    vertical[ 5 ] = 2, vertical[ 6 ] = 2, vertical[ 7 ] = 1

    Fa�a com que as vari�veis currentRow e currentColumn indiquem a linha e a coluna
    da posi��o atual do cavalo. Para fazer um movimento do tipo moveNumber,
    onde moveNumber est� entre 0 e 7, seu programa utiliza as instru��es
    currentRow += vertical[ moveNumber ];
    currentColumn += horizontal[ moveNumber ];
    Mantenha um contador que varia de 1 para 64. Registre a �ltima contagem em cada
    quadrado para o qual o cavalo se move. Lembre-se de testar cada potencial movimento
    para ver se o cavalo j� visitou esse quadrado e, naturalmente, teste cada potencial movimento
    para certificar-se de que o cavalo n�o caia fora do tabuleiro. Agora escreva um programa
    para mover o cavalo pelo tabuleiro.
    Execute o programa. Quantos movimentos o cavalo fez?
    Pedro, 24/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void tabuleiro( int [][ 8 ], int ); // desenha o tabuleiro
void exibirTabuleiro(int [][ 8 ], int );
void moveCavalo(int [][8], int, int [], int [] );
void moveCavalo64(int [][8], int, int [], int [], int );

int main()
{
    // muda a configura��o para portugu�s brasileiro
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

    // chama fun��es
    tabuleiro( matriz, arraySize );
    exibirTabuleiro( matriz, arraySize );

    /*
        b) Agora vamos desenvolver um programa que mover� o cavalo por um tabuleiro.
        O tabuleiro � representado por um array bidimensional 8 por 8 chamado board.
        Cada um dos quadrados � inicializado como zero. Descrevemos cada um dos oito
        poss�veis movimentos em termos de seus componentes verticais e horizontais. Por exemplo,
        um movimento do tipo 0 como mostrado na Figura 7.34 consiste em mover dois quadrados
        horizontalmente para direita e um quadrado verticalmente para cima. O movimento 2 consiste
        em mover um quadrado horizontalmente para a esquerda e dois quadrados verticalmente
        para cima. Movimentos horizontais para a esquerda e movimentos verticais para cima s�o
        indicados com n�meros negativos. Os oitos movimentos podem ser descritos por dois arrays
        unidimensionais, horizontal e vertical, como segue:
        Pedro, 24/12/2022
    */

    // chama as fun��es para o exerc�cio b)
    // moveCavalo( matriz, arraySize, linha, coluna );
    // exibirTabuleiro(matriz, arraySize );

    // exerc�cio b2)
    cout << "\nTabuleiro para as 64 posi��es." << endl;
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
    // t�tulo
    cout << setw(25) << "Tabuleiro" << endl;
    cout << "           "; // espa�os e branco

    // loop para criar n�meros da coluna
    for(int col = 0; col < arraySize; col++)
        // exibe n�meros da coluna
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
    // poderia ser programado para entrada do usu�rio
    int linha = 0; // posi��o inicial da linha
    int coluna = 0; // da coluna

    // valor na posi��o inicial
    // matriz[ linha ][ coluna ] = 9;

    // loop para movimento do cavalo
    for(int i = 0; i < arraySize; i++ )
    {
        // linha
        // verifica se o valor na matriz � maior que zero
        if( vertical[i] > 0 ) // se verdade
            linha +=   vertical[ i ]; // o valor � somado ao valor da linha
        else if( vertical[ i ] < 0 ) // se menor que zero
            linha += vertical[ i ]; // soma o valor negativo a linha

        // coluna
        if( horizontal[ i ] > 0 )
            coluna += horizontal[ i ];
        else if( horizontal[ i ] < 0 )
            coluna += horizontal[ i ];

        matriz[ linha ][ coluna ] = i + 1; // matriz recebe um valor

        // retornam a posi��o inicial
       // linha = 3;
       // coluna = 4;

    } // final for i
} // final moveCavalo

// moveCavalo64
void moveCavalo64(int matriz[][ 8 ], int arraySize, int linha[], int coluna[], int arraySize64 )
{
    // vari�veis
    int linhaAtual = 0;
    int colunaAtual = 0;
    int contador = 1;

    // entrada de dados
    cout << "Digite a posi��o no tabuleiro 8x8\npara o in�cio da jogada." << endl;
    cout << "Informe a posi��o da linha: ";
    cin >> linhaAtual;
    cout << "Informe a posi��o da coluna: ";
    cin >> colunaAtual;

    matriz[ linhaAtual ][ colunaAtual ] = contador;

    for(int i = 1; i < 47; i++ )
    {
        linhaAtual += linha[ i ];
        colunaAtual += coluna[ i ];
        matriz[ linhaAtual ][ colunaAtual ] = i + 1;
    }

} // final moveCavalo64
