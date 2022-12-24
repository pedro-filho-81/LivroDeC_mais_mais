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

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    const int arraySize = 8;

    int matriz[ arraySize ][ arraySize ];
    int horizontal[ arraySize ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int vertical[ arraySize ] = { -1, -2, -2, -1, 1, 2, 2, 1 };

    tabuleiro( matriz, arraySize );
    exibirTabuleiro( matriz, arraySize );

    moveCavalo( matriz, arraySize, vertical, horizontal );
    exibirTabuleiro(matriz, arraySize );

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// cria tabuleiro
void tabuleiro(int matriz[][ 8 ], int arraySize )
{
    for(int i = 0; i < arraySize; i++)
    {
        for( int j = 0; j < arraySize; j++)
        {
            matriz[ i ][ j ] = 0;
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
        cout << setw(3) << col + 1;

    cout << endl; // nova linha

    for(int i = 0; i < arraySize; i++)
    {
        cout << "Linha " << i << " => ";
        for( int j = 0; j < arraySize; j++)
        {
            cout << setw(3) << matriz[ i ][ j ];
        } // final for j

        cout << endl;
    } // final for i
} // final exibir

// moveCavalo
void moveCavalo(int matriz[][ 8 ], int arraySize, int vertical[], int horizontal[] )
{
    int linha = 3;
    int coluna = 4;

    matriz[ linha ][ coluna ] = 9;

    for(int i = 0; i < arraySize; i++ )
    {
        if(vertical[i] > 0)
            linha +=  vertical[ i ];
        else if(vertical[ i ] < 0 )
            linha += vertical[ i ];

        if( horizontal[ i ] > 0 )
            coluna += horizontal[ i ];
        else if( horizontal[ i ] < 0 )
            coluna += horizontal[ i ];

        matriz[ linha ][ coluna ] = i + 1;

        linha = 3;
        coluna = 4;

    } // final for i
} // final moveCavalo
