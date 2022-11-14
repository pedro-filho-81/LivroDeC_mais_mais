/*
    Converte Miúscula para Maiúscula
    Utulizando uM ponteiro não constante para dados não constantes
*/
#include <string>
#include <cctype> // para a conversão
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
void converteParaMaiuscula( char * );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vetor
    char frase[] = "aqui vai ficar grande => o caracteres é: $32.98";

    cout << "A frase antes da conversão é " << frase << endl;

    converteParaMaiuscula( frase );

    cout << "A frase depois da conversão é: " << frase << endl;

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
        // verifique se a frase está em minúscula
        if(islower(*frasePtr) ) // se verdade
            // ponteiro frasePtr recebe os caracteres da frase em maiúscula
            *frasePtr = toupper(*frasePtr);

        frasePtr++; // incrementa em 1
    } // final while

} // final converteParaMaiuscula
