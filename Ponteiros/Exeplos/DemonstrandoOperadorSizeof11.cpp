/*
    demonstrando o operador sizeof
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

    // vari�veis
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int vetor[20];
    int *ptr = vetor;

    // resultado
    cout << "Vari�vel char c sizeof: " << sizeof c << " bytes";
    cout << "\t\tsizeof do tipo char: " << sizeof(char) << " bytes" << endl;
    cout << "Vari�vel short s sizeof: " << sizeof s << " bytes";
    cout << "\tsizeof do tipo short: " << sizeof(short) << " bytes" << endl;
    cout << "Vari�vel int i sizeof: " << sizeof i << " bytes";
    cout << "\t\tsizeof do tipo int: " << sizeof(int) << " bytes" << endl;
    cout << "Vari�vel long l sizeof: " << sizeof l << " bytes";
    cout << "\t\tsizeof do tipo long: " << sizeof(long) << " bytes" << endl;
    cout << "Vari�vel float f sizeof: " << sizeof f << " bytes"
            << "\tsizeof do tipo float: " << sizeof(float) << " bytes"
            << "\nVari�vel double d sizeof: " << sizeof d << " bytes"
            << "\tsizeof do tipo double: " << sizeof(double) << " bytes"
            << "\nVari�vel long double ld sizeof: " << sizeof ld << " bytes"
            << "\nsizeof do tipo long double: " << sizeof(long double) << " bytes"
            << "\nVetor sizeof: " << sizeof vetor << " bytes"
            << "\nPonteiro ptr sizeof: " << sizeof ptr << " bytes" << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
