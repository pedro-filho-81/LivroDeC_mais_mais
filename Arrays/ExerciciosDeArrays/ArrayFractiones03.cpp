/*
7.3 Escreva uma ou mais instru��es que realizam as seguintes
tarefas para um array chamado fractions:
a) Defina uma vari�vel constante arraySize inicializada como 10.
b) Declare um array com arraySize elementos do tipo double
e inicialize os elementos como 0.
c) Nomeie o quarto elemento do array.
d) Referencie o elemento 4 do array.
e) Atribua o valor 1.667 ao elemento 9 do array.
f) Atribua o valor 3.333 ao s�timo elemento do array.
g) Imprima os elementos do array 6 e 9 com dois d�gitos de precis�o
� direita do ponto de fra��o decimal e mostre a sa�da que realmente
� exibida na tela.
h) Imprima todos os elementos do array utilizando uma instru��o for.
Defina a vari�vel de inteiro i como uma vari�vel de controle para  o loop.
Mostre a sa�da.
Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 300). Edi��o do Kindle.
Pedro, 26/09/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // a) Defina uma vari�vel constante arraySize inicializada como 10.
    const int arraySize = 10;
    cout << "const int arraySize = 10;" << endl;

    // b) Declare um array com arraySize elementos do tipo double
    double fractions[arraySize] = {0.0};
    cout << "double fractions[arraySize] = {0.0};" << endl;

    // e inicialize os elementos como 0.
    fractions[arraySize] = {0.0};
    cout << "fractions[arraySize] = {0.0};" << endl;

    //c) Nomeie o quarto elemento do array.
    fractions[ 3 ];
    cout << "fractions[ 3 ];" << endl;

    // d) Referencie o elemento 4 do array.
    fractions[ 4 ];
    cout << "fractions[ 4 ];" << endl;

    // e) Atribua o valor 1.667 ao elemento 9 do array.
    fractions[ 9 ] = 1.667;
    cout << "fractions[ 9 ] = 1.667;" << endl;

    // f) Atribua o valor 3.333 ao s�timo elemento do array.
    fractions[ 6 ] = 3.333;
    cout << "fractions[ 7 ] = 3.333;" << endl;

    //g) Imprima os elementos do array 6 e 9 com dois d�gitos de precis�o
    // � direita do ponto de fra��o decimal e mostre a sa�da que realmente
    // � exibida na tela. */
    cout << "\nvetor[ 6 ] = " << setprecision( 2 ) << fixed << fractions[ 6 ]
            << "\nvetor[ 9 ] = " << setprecision( 2 ) <<  fixed << fractions[ 9 ] << endl;

    // h) Imprima todos os elementos do array utilizando uma instru��o for.
    // Defina a vari�vel de inteiro i como uma vari�vel de controle para  o loop.
    // Mostre a sa�da.
    cout << "vetor[ arraySize ] = ";
    for( int i = 0; i < arraySize; i++)
    {
        if(i % 5 == 0)
            cout << endl;
        cout << setw( 8 ) << fixed << setprecision( 3 ) << fractions[ i ];
    } // final for

    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
