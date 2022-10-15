/*
    iniciamlizando array com elementos
*/
#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    system("cls"); // lipa a gela

    // array declara e inicializa
    int valor[] = {10, 25, 65, 78, 95, 22, 45, 54, 95, 37};

    cout << "Elemento" << setw(13) << "Valor" << endl;

    // mostra os valores do array
    for(int i = 0; i < 10; i++)
    {
        cout << setw(7) << i + 1 << setw(13) << valor[ i ] << endl;
    } // final for

} // final principal
