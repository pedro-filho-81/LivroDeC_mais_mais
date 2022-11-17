/*
    operador sizeof quando utilizado em um nome de array
    retorna o número de baytes de um array

*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

size_t getSize(double * );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    double vetor[20];

    cout << "O número de byte no array é " << sizeof(vetor) << endl;

    cout << "O número de byte retornado de getSizeof é " << getSize(vetor) << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

size_t getSize(double *ptr)
{
    return sizeof( ptr );
}
