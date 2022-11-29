/*
    Demonstrando array de ponteiro para fun��o
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void funcao0( int );
void funcao1( int );
void funcao2( int );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // inicializa um array de tr�s ponteiros para fun��o que
    // aceitam um argumento inteiro e retorna um void
    void (*f[ 3 ]) ( int ) = {funcao0, funcao1, funcao2};

    // vari�vel escolha
    int choice;

    // entrada de dados
    cout << "Informe um n�mero entre 0 e 2, 3 para sair: ";
    cin >> choice;

    // processa a escolha do usu�rio
    // enquanto choice aior ou igual a zero e choice menor que 3
    while( choice >= 0 && choice < 3)
    {
        // invoca a fun��o na localiza��o choice no array *f
        // e passa choice como argumento
        ( *f[ choice ] ) ( choice );

        // entrada de dados
        cout << "Informe um n�mero entre 0 e 2, 3 para sair: ";
        cin >> choice;

    } // final euquanto
    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// funcao0
void funcao0( int valor)
{
    cout << "Voc� digitou o n�mero " << valor << " ent�o a fun��o 0 foi chamada." << endl;
} // final

// funcao1
void funcao1( int valor)
{
    cout << "Voc� digitou o n�mero " << valor << " ent�o a fun��o 1 foi chamada." << endl;
} // final

// funcao2
void funcao2( int valor)
{
    cout << "Voc� digitou o n�mero " << valor << " ent�o a fun��o 2 foi chamada." << endl;
} // final
