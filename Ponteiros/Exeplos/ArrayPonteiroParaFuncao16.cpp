/*
    Demonstrando array de ponteiro para função
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void funcao0( int );
void funcao1( int );
void funcao2( int );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // inicializa um array de três ponteiros para função que
    // aceitam um argumento inteiro e retorna um void
    void (*f[ 3 ]) ( int ) = {funcao0, funcao1, funcao2};

    // variável escolha
    int choice;

    // entrada de dados
    cout << "Informe um número entre 0 e 2, 3 para sair: ";
    cin >> choice;

    // processa a escolha do usuário
    // enquanto choice aior ou igual a zero e choice menor que 3
    while( choice >= 0 && choice < 3)
    {
        // invoca a função na localização choice no array *f
        // e passa choice como argumento
        ( *f[ choice ] ) ( choice );

        // entrada de dados
        cout << "Informe um número entre 0 e 2, 3 para sair: ";
        cin >> choice;

    } // final euquanto
    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// funcao0
void funcao0( int valor)
{
    cout << "Você digitou o número " << valor << " então a função 0 foi chamada." << endl;
} // final

// funcao1
void funcao1( int valor)
{
    cout << "Você digitou o número " << valor << " então a função 1 foi chamada." << endl;
} // final

// funcao2
void funcao2( int valor)
{
    cout << "Você digitou o número " << valor << " então a função 2 foi chamada." << endl;
} // final
