/*
    testando git
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    cout << "Ol�, estou aqui." << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
