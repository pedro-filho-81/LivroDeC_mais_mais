/*
    tratando array de caractere coo string
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // arrays
    char string1[20]; // array para 20 elementos
    char string2[] = "String literal"; // array co o taanho da string

    // entrada de dados
    cout << "Entre com uma string literal: ";
    cin >> string1; // l� um texto at� encontrar um espa�o e branco

    // gera a sa�da da string
    cout << "A string 1 � " << string1 << "\nA string2 � " << string2 << endl;

    cout << "\nString com espa�o entre caracteres." << endl;

    // caracteres de sa�da at� o caractere nulo ser encontrado
    for(int i = 0; i < string1[i] != '\0'; i++)
        cout << string1[i] << ' ';

    cin >> string1;

    cout << "\nstring1 � " << string1 << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal
