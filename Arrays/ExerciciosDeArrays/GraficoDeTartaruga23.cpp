/*
    7.23 (Gr�ficos de tartaruga) A linguagem Logo, que � popular entre crian�as
    do ensino fundamental, tornou famoso o conceito de gr�ficos  de tartaruga.
    magine uma tartaruga mec�nica que caminha em um ambiente sob o controle
    de um programa C++. A tartaruga segura  uma caneta em uma de duas posi��es,
    para cima ou para baixo. Enquanto a caneta est� para baixo, a tartaruga desenha
    formas � medida  que se move; enquanto a caneta est� para cima, a tartaruga
    move-se quase livremente sem escrever nada. Nesse problema voc� simular�
    a opera��o da tartaruga e criar� tamb�m um sketchpad computadorizado.
    Utilize um array de 20 por 20 floor que � inicializado como zeros.
    Leia comandos a partir de um array que contenha esses comandos.  Monitore
    a posi��o atual da tartaruga todas as vezes e se a caneta est� atualmente para
    cima ou para baixo. Suponha que a tartaruga  sempre inicia na posi��o (0, 0) do
    ch�o com sua caneta para cima. O conjunto de comandos da tartaruga que seu
    programa deve processar  � mostrado na Figura 7.33.  Suponha que a tartaruga
    esteja em algum lugar pr�ximo ao centro do ch�o. O seguinte �programa� desenharia
    e imprimiria um quadrado  de 12 por 12 e terminaria com a caneta na posi��o para cima:
    2  5,12  3  5,12  3  5,12  3  5,12  1  6  9
    � medida que a tartaruga se move com a caneta para baixo, configure os elementos
    apropriados do array floor como 1s. Quando o  comando 6 (imprimir) � dado, onde quer
    que haja um 1 no array, exiba um asterisco ou algum caractere diferente que voc� escolher.
    Onde  quer que haja um zero, exiba uma lacuna. Escreva um programa para implementar
    as capacidades dos gr�ficos de tartaruga discutidos  aqui.
    Escreva v�rios programas de gr�fico de tartaruga para desenhar formas interessantes.
    Adicione outros comandos para aumentar as  capacidades de sua linguagem de gr�fico
    de tartaruga.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 306). Edi��o do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 305). Edi��o do Kindle.
    Pedro, 12/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// prot�tipos
void adicionar(string [][20], int, int); // adiciona zeros
void exibir(string [][20], int, int); // mostra a matriz
void menu(); // op��es
void paraBaixo(string [][20], int, int, int); // desenha linha para baixo
void paraDireita(string [][20], int, int, int); // desenha linha para direita

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constantes
    const int linha = 20;
    const int coluna = 20;

    // matriz
    string matriz[ linha ][ coluna ] = { "0" };

    // vari�veis
    int opcao = 0;
    int posiLinha = 0;
    int posiColuna = 0;
    int mover = 0;

    // posi��o inicial
    cout << "Informe a posi��a inicial na tabela 20 x 20:" << endl;
    cout << "Posi��o inicial da linha:";
    cin >> posiLinha;
    cout << "Posi��o inicial da coluna:";
    cin >> posiColuna;

     // matriz[ posiLinha ][ posiColuna ] = " ";

    menu();

    // entrada de dados
    cout << "\tDigite a sua op��o: ";

    // programa
    while( true )
    {
        // adiciona zeros a matriz
        adicionar(matriz, linha, coluna);

        cout << "\t";
        cin >> opcao; // entrada do usu�rio

        // se a op��o for igual a 9
        if( opcao == 9)
            // sair do prograa
            break;

        else if( opcao == 1)
        {
            cout << "\t5,";
            cin >> mover;
        } // final else if 1

        else if( opcao == 2)
        {
            cout << "\t5,";
            cin >> mover;
            paraBaixo(matriz, posiLinha, posiColuna, mover);
        } // final else if 2

        else if( opcao == 3)
        {
            cout << "\t5,";
            cin >> mover;
            paraDireita(matriz, posiLinha, posiColuna, mover);
        } // final else if 3

        else if( opcao == 6)
        {
            system("cls"); // limpa a tela
            paraBaixo(matriz, posiLinha, posiColuna, mover);
            paraDireita(matriz, posiLinha, posiColuna, mover);
            exibir(matriz, linha, coluna);
        } // final else if 6

        // lipa a tela
//        system("cls");

    } // final while

    cout << endl; // nova linha

    // system("pause"); // pausa do programa

    return 0;

} // final principal

// menu
void menu()
{
    cout << setw(25) << "OP��ES" << endl;
    cout << "\t****************************" << endl;
    cout << "\t*  1 - Para cima           *" << endl;
    cout << "\t*  2 - Para baixo          *" << endl;
    cout << "\t*  3 - Para a direita      *" << endl;
    cout << "\t*  4 - Para a esquerda     *" << endl;
    cout << "\t*  6 - Impria a matriz     *" << endl;
    cout << "\t*  9 - Sair do prograa     *" << endl;
    cout << "\t****************************" << endl;

} // final menu

// adicionar
void adicionar(string matriz[][20], int linha, int coluna)
{
    for( int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            matriz[ i ][ j ] = '0';
        } // fim for j
    } // final for i

} // final adicionar

// exibirTabela
void exibir(string matriz[][ 20 ], int linha, int coluna)
{
    cout << "\n\n" << setw(40) << "TABULEIRO da TARTARUGA" << endl;

    // loop para mostras a matriz
    for(int i = 0; i < linha; i++)
    {
        cout << "\t"; // afasta a tabela do canto da tela

        for(int j = 0; j < coluna; j++)
        {
            // mostra a matriz
            cout << setw(2) << matriz[ i ][ j ];
        } // final for coluna

        // nova linha
        cout << endl;
    } // final for linha
} // final exibir

// desenha linha para baixo
void paraBaixo(string matriz[][20], int posiLinha, int posiColuna, int mover)
{
    // vari�vel
    int i = 0;

    for( i = posiLinha; i < mover + posiLinha; i++)
    {
        matriz[ i ][ posiColuna ] = " ";
    } // final for i

    matriz[ i ][ posiColuna ] = " ";

}// final paraBaixo

// paraDireita
void paraDireita(string matriz[][ 20 ], int posiLinha, int posiColuna, int mover)
{
    // vari�vel
    int i = 0;

    for( i = posiColuna; i < mover + posiColuna; i++)
    {
        matriz[posiLinha][ i ] = " ";
    } // final for i

    posiColuna = i;

    matriz[posiLinha][ posiColuna ] = " ";

} // final paraDireita
