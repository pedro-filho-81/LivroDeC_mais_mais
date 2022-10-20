/*
    criando o vetor teperatura e trabalhando com o meso
*/
#include <vector> // incluindo a classe vector
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria o vetor tempreaturas
    vector<double> temperaturas;

    // adicionar
    cout << "Informe as temperaturas: ";
    // loop for para adicionar infinitos valores ao vetor
    for( double tempera; cin >> tempera; )
    {
        // adicionar o valor da variável tempera no final do vetor temperaturas
        temperaturas.push_back( tempera );
    } // final for tempera

    // Exibir
    cout << "temperaturas = { ";
    // após exibir os valores adicionados
    for( double tempera : temperaturas)
        // exibir os elementos do vetor temperaturas
        cout << setw(8) << setprecision(2) << fixed << tempera;
    cout << setw(8) << "};";

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
