/*
    Imprimindo uma string de caracteres por vez utilizando
    um ponteiro n�o constante para dados constantes

*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void imprimeCaracteres( const char * );
void converteParaMaiuscula(char * );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria vetor
    char frase[] = "Imprimindo caracteres usando pinteiro para dados constantes.";

    cout << "A frase �: " << endl;
    imprimeCaracteres( frase );

    converteParaMaiuscula( frase );
    cout << "\nFrase Mai�scula:\n" << frase << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// imprimeCaracteres
void imprimeCaracteres( const char *frasePtr )
{
    // para frasePtr diferente de fim de string incremente
    for(; *frasePtr != '\0'; frasePtr++)
        // imprima
        cout << *frasePtr;
} // final imprimeCaracteres

// void converteParaMaiuscula(char * );
void converteParaMaiuscula(char *frasePtr )
{
    for(; *frasePtr != '\0'; frasePtr++)
    {
        if(islower(*frasePtr))
            *frasePtr = toupper(*frasePtr);
    } // final for
} // final converte
