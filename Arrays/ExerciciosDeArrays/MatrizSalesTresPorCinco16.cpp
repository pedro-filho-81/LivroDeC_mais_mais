/*
    7.16 Rotule os elementos de um array unidimensional de 3 por 5
    chamado sales para indicar a ordem em que eles são configurados
    como  zero pelo seguinte segmento de programa:
    for (row = 0; row < 3; row++)
        for (column = 0; column < 5; column++)
            sales[ row ][ column] = 0;
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edição do Kindle.
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    int sales[3][5] = {0};

    for(int linha = 0; linha < 3; linha++)
        for(int coluna = 0; coluna < 5; coluna++)
            sales[ linha ][ coluna ] = 0;

    cout << "sales[ 3 ][ 5 ] = " << endl;

    for(int linha = 0; linha < 3; linha++)
    {
        for(int coluna = 0; coluna < 5; coluna++)
        {
            cout << setw(3) << sales[ linha ][ coluna ];
        }

        cout << endl;
    }


    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
