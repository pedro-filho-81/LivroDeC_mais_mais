/*
    soando os eleentos do array
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int TAmANHO = 10;

    int soma = 0;

    int valores[TAmANHO] = {10, 25, 36, 45, 98, 78, 75, 45, 85, 62};

    // loop para somar os valores do array
    for(int i = 0; i < TAmANHO; i++)
    {
        soma += valores[i]; // soma recebe os valores
    } // final

    cout << "Total dos valores do array é = " << soma << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
