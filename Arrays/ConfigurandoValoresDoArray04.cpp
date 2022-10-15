/*
    configurando os valores do array
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    // cria ua constante
    const int TAmANHO = 10; // TAamanho do array

    // array
    int valores[TAmANHO];

    // ADICIONA VALORES
    for( int i = 0; i < TAmANHO; i++)
    {
        valores[i] = 2 + 2 * i;
    } // funal

    cout << "Elemento" << setw(13) << "Valor" << endl;

    // exibir valores
    for(int i = 0; i < TAmANHO; i++)
    {
        cout << setw(7) << i + 1 << setw(13) << valores[ i ] << endl;
    }// final

    system("pause"); // pausa do programa

    return 0;

} // final principal
