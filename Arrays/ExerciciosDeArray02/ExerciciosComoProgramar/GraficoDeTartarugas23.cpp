/*
    7.23 (Gr�ficos de tartaruga) A linguagem Logo, que � popular entre crian�as do ensino
    fundamental, tornou famoso o conceito de gr�ficos de tartaruga. Imagine uma tartaruga
    mec�nica que caminha em um ambiente sob o controle de um programa C++.
    A tartaruga segura uma caneta em uma de duas posi��es, para cima ou para baixo.
    Enquanto a caneta est� para baixo, a tartaruga desenha formas � medida
    que se move; enquanto a caneta est� para cima, a tartaruga move-se quase livremente
    sem escrever nada. Nesse problema voc� simular� a opera��o da tartaruga e criar�
    tamb�m um sketchpad computadorizado. Exerc�cios Deitel_C++_Cap07.indd 305
    eitel_C++_Cap07.indd 305 17/4/2006 13:43:11 7/4/2006 13:43:11306
    Cap�tulo 7 Arrays e vetores
    Utilize um array de 20 por 20 floor que � inicializado como zeros. Leia comandos a partir
    de um array que contenha esses comandos. Monitore a posi��o atual da tartaruga todas
    as vezes e se a caneta est� atualmente para cima ou para baixo. Suponha que a tartaruga
    sempre inicia na posi��o (0, 0) do ch�o com sua caneta para cima. O conjunto de comandos
    da tartaruga que seu programa deve processar � mostrado na Figura 7.33.
    Suponha que a tartaruga esteja em algum lugar pr�ximo ao centro do ch�o.
    O seguinte �programa� desenharia e imprimiria um quadrado de 12 por 12 e terminaria com
    a caneta na posi��o para cima: 2 5,12 3 5,12 3 5,12 3 5,12 1 6 9
    � medida que a tartaruga se move com a caneta para baixo, configure os elementos
    apropriados do array floor como 1s. Quando o comando 6 (imprimir) � dado,
    onde quer que haja um 1 no array, exiba um asterisco ou algum caractere diferente que
    voc� escolher. Onde quer que haja um zero, exiba uma lacuna.
    Escreva um programa para implementar as capacidades dos gr�ficos de tartaruga discutidos
    aqui. Escreva v�rios programas de gr�fico de tartaruga para desenhar formas interessantes.
    Adicione outros comandos para aumentar as capacidades de sua linguagem de gr�fico de tartaruga.
    Pedro,13/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void exibir(int [][20], int ); // exibir atriz
void executaMovimento(int [][20], int [], int, int );
void menu(); // op��es

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constantes
    const int arraySize = 20;
    const int sizeT = 30;

    // arrys
    int tabuleiro[ arraySize ][ arraySize ] = {0};
    int movimentos[sizeT];

    // vari�veis
    int linha = 0, coluna = 0;

    exibir(tabuleiro, arraySize );
    // entrada de dados
    cout << "\nEm um tela 20x20 desenhe alguma coisa:" << endl;
    cout << "Informe a posi��o inicial:"
            << "\nLinha entre 0 e 19 inclusive: ";
    cin >> linha;
    cout << "Coluna entre 0 e 19 inclusive: ";
    cin >> coluna;

    system("cls");

    menu();

    // entrada de dados;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

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

// exibir
void exibir(int arrayTela[][ 20 ], int arraySize )
{
    cout << setw(25) << "Tela Principal" << endl;

    for(int i = 0; i < arraySize; i++)
    {
        cout << "Linha " << setw(2) << i << " => ";

        for( int j = 0; j < arraySize; j++)
        {
            cout << setw(2)<< arrayTela[ i ][ j ];
        } // final for j
        cout << endl; // nova linha
    } // final for i
} // final exibir
