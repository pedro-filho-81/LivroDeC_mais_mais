/*
    criando o vetor teperatura e trabalhando com o mesmo
*/
#include <vector> // incluindo a classe vector
#include <algorithm> // para sort()
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    double media = 0.0;
    double  mediana = 0.0;
    double soma = 0.0;

    // cria o vetor tempreaturas
    vector<double> temperaturas;

    // adicionar
    cout << "Informe as temperaturas: ";
    // loop for para adicionar infinitos valores ao vetor
    for( double tempera; cin >> tempera; )
    {
        // adicionar o valor da variável tempera no final do vetor temperaturas
        // usando push_back( variável, ou valor, ou qualquer coisa )
        // para adicionar ao vetor
        temperaturas.push_back( tempera );
    } // final for tempera

    // Exibir
    cout << "temperaturas = { ";
    // após exibir os valores adicionados
    for( double tempera : temperaturas)
        // exibir os elementos do vetor temperaturas
        cout << setw(8) << setprecision(2) << fixed << tempera;
    cout << setw(8) << "};";

    // SOmAR
    // loop for para somar os elementos
    for(double valor: temperaturas)
        // soma os elemendos do vetor temperaturas
        soma += valor;

    // exibe a média do vetor
    // soma dividido pelo tamanho do vetor igual a média
    cout << "\nTemperatura média = " << soma / temperaturas.size() << "º C" << endl;

    // organiza os valores do vetor
   sort( temperaturas.begin(), temperaturas.end() );

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
