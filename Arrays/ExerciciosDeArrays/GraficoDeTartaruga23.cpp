/*
    7.23 (Gráficos de tartaruga) A linguagem Logo, que é popular entre crianças
    do ensino fundamental, tornou famoso o conceito de gráficos  de tartaruga.
    magine uma tartaruga mecânica que caminha em um ambiente sob o controle
    de um programa C++. A tartaruga segura  uma caneta em uma de duas posições,
    para cima ou para baixo. Enquanto a caneta está para baixo, a tartaruga desenha
    formas à medida  que se move; enquanto a caneta está para cima, a tartaruga
    move-se quase livremente sem escrever nada. Nesse problema você simulará
    a operação da tartaruga e criará também um sketchpad computadorizado.
    Utilize um array de 20 por 20 floor que é inicializado como zeros.
    Leia comandos a partir de um array que contenha esses comandos.  Monitore
    a posição atual da tartaruga todas as vezes e se a caneta está atualmente para
    cima ou para baixo. Suponha que a tartaruga  sempre inicia na posição (0, 0) do
    chão com sua caneta para cima. O conjunto de comandos da tartaruga que seu
    programa deve processar  é mostrado na Figura 7.33.  Suponha que a tartaruga
    esteja em algum lugar próximo ao centro do chão. O seguinte ‘programa’ desenharia
    e imprimiria um quadrado  de 12 por 12 e terminaria com a caneta na posição para cima:
    2  5,12  3  5,12  3  5,12  3  5,12  1  6  9
    À medida que a tartaruga se move com a caneta para baixo, configure os elementos
    apropriados do array floor como 1s. Quando o  comando 6 (imprimir) é dado, onde quer
    que haja um 1 no array, exiba um asterisco ou algum caractere diferente que você escolher.
    Onde  quer que haja um zero, exiba uma lacuna. Escreva um programa para implementar
    as capacidades dos gráficos de tartaruga discutidos  aqui.
    Escreva vários programas de gráfico de tartaruga para desenhar formas interessantes.
    Adicione outros comandos para aumentar as  capacidades de sua linguagem de gráfico
    de tartaruga.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 306). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 305). Edição do Kindle.
    Pedro, 12/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// protótipos
void adicionar(string [][20], int, int); // adiciona zeros
void exibir(string [][20], int, int); // mostra a matriz
void menu(); // opções
void paraBaixo(string [][20], int, int, int); // desenha linha para baixo
void paraDireita(string [][20], int, int, int); // desenha linha para direita

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constantes
    const int linha = 20;
    const int coluna = 20;

    // matriz
    string matriz[ linha ][ coluna ] = { "0" };

    // variáveis
    int opcao = 0;
    int posiLinha = 0;
    int posiColuna = 0;
    int mover = 0;

    // posição inicial
    cout << "Informe a posiçõa inicial na tabela 20 x 20:" << endl;
    cout << "Posição inicial da linha:";
    cin >> posiLinha;
    cout << "Posição inicial da coluna:";
    cin >> posiColuna;

     // matriz[ posiLinha ][ posiColuna ] = " ";

    menu();

    // entrada de dados
    cout << "\tDigite a sua opção: ";

    // programa
    while( true )
    {
        // adiciona zeros a matriz
        adicionar(matriz, linha, coluna);

        cout << "\t";
        cin >> opcao; // entrada do usuário

        // se a opção for igual a 9
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
    cout << setw(25) << "OPÇÕES" << endl;
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
    // variável
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
    // variável
    int i = 0;

    for( i = posiColuna; i < mover + posiColuna; i++)
    {
        matriz[posiLinha][ i ] = " ";
    } // final for i

    posiColuna = i;

    matriz[posiLinha][ posiColuna ] = " ";

} // final paraDireita
