/*
    inicializando ua constantes
*/
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // constante
    const int valorConstante = 50;

    cout << "Toda constante deve ser inicializada: "
            << "\nconst int valorConstante = "
            << valorConstante << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
