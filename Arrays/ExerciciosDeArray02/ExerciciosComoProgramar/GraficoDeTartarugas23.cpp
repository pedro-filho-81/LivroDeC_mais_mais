/*
    7.23 (Gráficos de tartaruga) A linguagem Logo, que é popular entre crianças do ensino
    fundamental, tornou famoso o conceito de gráficos de tartaruga. Imagine uma tartaruga
    mecânica que caminha em um ambiente sob o controle de um programa C++.
    A tartaruga segura uma caneta em uma de duas posições, para cima ou para baixo.
    Enquanto a caneta está para baixo, a tartaruga desenha formas à medida
    que se move; enquanto a caneta está para cima, a tartaruga move-se quase livremente
    sem escrever nada. Nesse problema você simulará a operação da tartaruga e criará
    também um sketchpad computadorizado. Exercícios Deitel_C++_Cap07.indd 305
    eitel_C++_Cap07.indd 305 17/4/2006 13:43:11 7/4/2006 13:43:11306
    Capítulo 7 Arrays e vetores
    Utilize um array de 20 por 20 floor que é inicializado como zeros. Leia comandos a partir
    de um array que contenha esses comandos. Monitore a posição atual da tartaruga todas
    as vezes e se a caneta está atualmente para cima ou para baixo. Suponha que a tartaruga
    sempre inicia na posição (0, 0) do chão com sua caneta para cima. O conjunto de comandos
    da tartaruga que seu programa deve processar é mostrado na Figura 7.33.
    Suponha que a tartaruga esteja em algum lugar próximo ao centro do chão.
    O seguinte ‘programa’ desenharia e imprimiria um quadrado de 12 por 12 e terminaria com
    a caneta na posição para cima: 2 5,12 3 5,12 3 5,12 3 5,12 1 6 9
    À medida que a tartaruga se move com a caneta para baixo, configure os elementos
    apropriados do array floor como 1s. Quando o comando 6 (imprimir) é dado,
    onde quer que haja um 1 no array, exiba um asterisco ou algum caractere diferente que
    você escolher. Onde quer que haja um zero, exiba uma lacuna.
    Escreva um programa para implementar as capacidades dos gráficos de tartaruga discutidos
    aqui. Escreva vários programas de gráfico de tartaruga para desenhar formas interessantes.
    Adicione outros comandos para aumentar as capacidades de sua linguagem de gráfico de tartaruga.
    Pedro,13/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

// protótipos
void abertura(string [][20], int, int[], int );
void adicionar(string [][20], int);
void desenhar(string [][20], int, int [], int, int, int );
void exibir(string [][20], int ); // exibir matriz
void exibirMovimento(int [], int );
void menu(); // opções
int moverParaCima(string [][20], int, int, int, int);
int moverParaBaixo(string[][20], int, int, int, int );
int moverParaDireita(string [][20], int, int, int, int );
int moverParaEsquerda(string [][20], int, int, int, int );
void processsar(string [][20], int, int[], int, int, int, int );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constantes
    const int arraySize = 20;
    const int sizeT = 30;

    // arrys
    string tabuleiro[ arraySize ][ arraySize ] = {"0"};
    int movimentos[sizeT];

    // chama as finções
    adicionar(tabuleiro, arraySize); // desenhar o tabuleiro
    abertura(tabuleiro, arraySize,movimentos, sizeT ); // perguntar em que posição quer começar

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// abertura
void abertura(string matriz[][20], int arraySize, int mover[], int sizeT)
{
    int posicao;
    int linha = 0, coluna = 0;

    // entrada de dados da posição inicial
    cout << "\tIniciando desenho.\nVocê está no início do tabuleiro posição [0][0]"
            << "\nEm um tela 20x20 deseja iniciar em outra posição:\n[1 = sim / -1 = não]? ";
    cin >> posicao; // entrada do usuário

    if(posicao == 1)
    {
        cout << "Informe a posição inicial da linha e da coluna:"
                << "\ncom valores entre 0 e 19 inclusive: ";
        cin >> linha;
        cin >> coluna;
        matriz[ linha ][ coluna ] = " ";
    } // final if
    else
        matriz[ linha ][ coluna ] = " ";

    desenhar(matriz, arraySize, mover, sizeT, linha, coluna );

} // final abertura

// menu
void menu()
{
    cout << "\t                 Menu"
            << "\n\t**********************************"
            << "\n\t*         1 - Para cima          *"
            << "\n\t*         2 - Para baixo         *"
            << "\n\t*         3 - Para direita       *"
            << "\n\t*         4 - Para esquerda      *"
            << "\n\t*         5 - Move asterisco     *"
            << "\n\t*         6 - Tabuleiro 20x20    *"
            << "\n\t*         9 - Fim do desenho     *"
            << "\n\t**********************************" << endl;
} // final menu

// adicionar
void adicionar( string tabuleiro[][20], int arraySize )
{
    // cria o tabuleiro
    // loop para alinha
    for( int i = 0; i < arraySize; i++)
    {
        // loop para a coluna
        for( int j = 0; j < arraySize; j++ )
        {
            // adiciona zeros
            tabuleiro[ i ][ j ] = "0" ;
        } // final  for j
    } // final for i

} // final adicionar

// exibir
void exibir(string arrayTela[][ 20 ], int arraySize )
{
    cout << setw(40) << "Tela Principal\n" << endl;

    for(int i = 0; i < arraySize; i++)
    {
        cout << "Linha " << setw(2) << i << " => ";

        for( int j = 0; j < arraySize; j++)
        {
            cout << setw(2) << arrayTela[ i ][ j ];
        } // final for j
        cout << endl; // nova linha
    } // final for i
} // final exibir

// desenhar
void desenhar(string matriz[][20], int arraySize, int mover[], int sizeT, int linha, int coluna )
{
    // variáveis
    int opcao = 0;
    int contar = 0;
    int movimento;

    menu(); // chama função menu

    cout << "\tDigite as suas opções: ";

    // enquanto a opção for diferente de 9 faça
    while(opcao != 9)
    {
        cin >> opcao;

        if( opcao == 9 )
            break;
        else if( opcao == 6 )
        {
            mover[contar] = opcao;
        }
        mover[contar] = opcao;

        cout << "5,";
        cin >> movimento;

        if(opcao == 1)
        {
            linha = moverParaCima(matriz, arraySize, movimento, linha, coluna);
        }
        else if(opcao == 2)
        {
            linha = moverParaBaixo(matriz, arraySize, movimento, linha, coluna );
        }
        else if(opcao == 3)
        {
            coluna = moverParaDireita(matriz, arraySize, movimento, linha, coluna );
        }
        else if(opcao == 4)
        {
            coluna = moverParaEsquerda(matriz, arraySize, movimento, linha, coluna );
        }

        contar++;
    } // final while

    exibir(matriz, arraySize );

} // final desenhar

// exibirMovimento
void exibirMovimento(int mover[], int sizeT)
{
    // loop for para exibir vetor
    for(int i = 0; i < sizeT; i++)
        cout << setw(2) << mover[ i ];
    cout << endl;
} // final exibirMovimento

// moverParaCima
int moverParaCima(string matriz[][20], int arraySize, int mover, int linha, int coluna)
{
    int linha1;
    for(linha1 = 0; linha1 < mover; linha1++)
    {
        matriz[ linha - linha1 ][ coluna ] = " ";
    }

    return linha - (linha1 - 1);

} // final mover

// mover para baixo
int moverParaBaixo(string matriz[][20], int arraySize, int mover, int linha, int coluna )
{
    int linha2;
    for(linha2 = 0; linha2 < mover; linha2++)
    {
        matriz[ linha + linha2 ][ coluna ] = " ";
    } // final for linha 2

    return linha + (linha2 - 1);

} // final moverParaBaixo

// mover para direita
int moverParaDireita(string matriz[][20], int arraySize, int movimento, int linha, int coluna )
{
    int coluna3;
    for(coluna3 = 0; coluna3 < movimento; coluna3++)
    {
        matriz[ linha ][ coluna + coluna3] = " ";
    } // final for

    return coluna + (coluna3 - 1);

} // final mover para direita

// mover para esquerda
int moverParaEsquerda(string matriz[][20], int arraySize, int mover, int linha, int coluna )
{
    int coluna4;
    for(coluna4 = 0; coluna4 < mover; coluna4++)
    {
        matriz[ linha ][ coluna - coluna4] = " ";
    } // final for

    return coluna - (coluna4 - 1);
} // final mpver para esquerda
