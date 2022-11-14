/*
    Converte Mi�scula para Mai�scula
    Utulizando uM ponteiro n�o constante para dados n�o constantes
*/
#include <string>
#include <cctype> // para a convers�o
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipo
void converteParaMaiuscula( char * );

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vetor
    char frase[] = "aqui vai ficar grande => o caracteres �: $32.98";

    cout << "A frase antes da convers�o � " << frase << endl;

    converteParaMaiuscula( frase );

    cout << "A frase depois da convers�o �: " << frase << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// converteParaMaiuscula
void converteParaMaiuscula(char *frasePtr )
{
    // enquanto frasePtr diferente de \0 = final de string
    while( *frasePtr != '\0')
    {
        // verifique se a frase est� em min�scula
        if(islower(*frasePtr) ) // se verdade
            // ponteiro frasePtr recebe os caracteres da frase em mai�scula
            *frasePtr = toupper(*frasePtr);

        frasePtr++; // incrementa em 1
    } // final while

} // final converteParaMaiuscula
