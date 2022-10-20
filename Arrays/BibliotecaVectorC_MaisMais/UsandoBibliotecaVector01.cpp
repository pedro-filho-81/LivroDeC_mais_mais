/*
    usando a biblioteca vector do C++
*/
#include <vector>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria vector de inteiros
    vector<int> valores = {5, 6, 2, 3, 7, 8, 1, 4};

    cout << "valores = ";

    // exibe os valores do vector
    for(int i = 0; i < valores.size(); i++)
        // exibir
        cout << setw(3) << valores[ i ];

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
