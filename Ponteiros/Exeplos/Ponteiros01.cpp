/*
    Utilizando os operadores * e &
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    int a; // a � um inteiro
    int *aPtr; // aPtr � um ponteiro

    // atribuindo um valor a vari�vel a
    a = 7;
    aPtr = &a; // aPtr recebe o o endere�o da vari�vel a

    // resultado
    cout << "O endere�o da vari�vel &a � " << &a
            << "\nO endere�o de a pelo ponteiro aPtr � " << aPtr << endl;
    cout << "\nO valor da vari�vel a � " << a
            << "\nO valor do endere�o de a pelo ponteiro *aPtr �  " << *aPtr << endl;
    cout << "\nMostrando que * e & s�o inversos um do outro.:"
            << "\n&*aPtr = " << &*aPtr
            << "\n*&aPtr = " << *&aPtr << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
