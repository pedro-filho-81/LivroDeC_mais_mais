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
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    int a; // a é um inteiro
    int *aPtr; // aPtr é um ponteiro

    // atribuindo um valor a variável a
    a = 7;
    aPtr = &a; // aPtr recebe o o endereço da variável a

    // resultado
    cout << "O endereço da variável &a é " << &a
            << "\nO endereço de a pelo ponteiro aPtr é " << aPtr << endl;
    cout << "\nO valor da variável a é " << a
            << "\nO valor do endereço de a pelo ponteiro *aPtr é  " << *aPtr << endl;
    cout << "\nMostrando que * e & são inversos um do outro.:"
            << "\n&*aPtr = " << &*aPtr
            << "\n*&aPtr = " << *&aPtr << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
