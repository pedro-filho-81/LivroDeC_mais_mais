/*
    Adicionando valores ao vetor coM push_back( aqui colocar o valor a ser atribuido )
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

    // cria o vector seM eleMento
    vector<int> vetor;

    cout << "Vetor antes da atribuição de valores." << endl;

    cout << "vetor = { ";
    // loop para exibir os eleMentos do vetor
    for(int valor : vetor)
        cout << setw(3) << valor;

    cout << " };" << endl;

    // adicionando valor ao final do vector
    vetor.push_back(5);
    vetor.push_back(3);
    vetor.push_back(9);
    vetor.push_back(1);

    cout << "Vetor depois da atribuição dos valores." << endl;

    cout << "vetor = { ";
    // loop para exibir os eleMentos do vetor
    for(int valor : vetor)
        cout << setw(3) << valor;

    cout << " };" << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
