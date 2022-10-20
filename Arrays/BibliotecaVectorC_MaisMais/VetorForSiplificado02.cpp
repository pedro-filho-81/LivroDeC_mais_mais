/*
    uasndo vector da biblioteca C++
*/
#include <vector> // incluindo vector
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria e inicializa o vector
    vector<int> valores = {1, 5, 9, 6, 3, 2, 4, 8, 7};

    cout << "valores = { ";

    // loop for siplificado
    for(int valor : valores)
        // exibir os valores do vector
        cout << setw(3) << valor;

    cout << " };" << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
