/*
    array estático são inicializados como zero
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void arrayEstaticoInteiro();
void automaticoArrayInteiro();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Primeira chaada para cada função" << endl;

    arrayEstaticoInteiro();
    automaticoArrayInteiro();

    cout << "\n\nSegunda chamada para cada função."  << endl;
    arrayEstaticoInteiro();
    automaticoArrayInteiro();

    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função deonstra array estático
void arrayEstaticoInteiro()
{
    static int array1[ 3 ]; // array local estático

    // gera saída do array
    for(int i = 0; i < 3; i++)
        cout << "array1[ " << i << " ] = " << array1[ i ] << "  ";

    cout << "\nValor existente no arrayExtaticoInteiro()\n";

    // modifica  e gera a saída do conteúdo do array
    for(int j = 0; j < 3; j++)
        cout << "array1[ " << j << " ] = " << ( array1[ j ] += 5 ) << "  ";
} // final arrayEstaticoInteiro

// função automaticoArrayInteiro
void automaticoArrayInteiro()
{
    int array2[3] = {1, 2, 3 };

    cout << "\n\nValores eternos do array automáticoArrayInteiro().\n";

    for(int i = 0; i < 3; i++)
        cout << "array2[ " << i << " ] = " << array2[ i ] << "  ";

    cout << "\nValor existente no arrayExtaticoInteiro()\n";

    // modifica  e gera a saída do conteúdo do array
    for(int j = 0; j < 3; j++)
        cout << "array2[ " << j << " ] = " << ( array2[ j ] += 5 ) << "  ";
} // final automático
