/*
    operador sizeof quando utilizado em um nome de array
    retorna o n�mero de baytes de um array

*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

size_t getSize(double * );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    double vetor[20];

    cout << "O n�mero de byte no array � " << sizeof(vetor) << endl;

    cout << "O n�mero de byte retornado de getSizeof � " << getSize(vetor) << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

size_t getSize(double *ptr)
{
    return sizeof( ptr );
}
