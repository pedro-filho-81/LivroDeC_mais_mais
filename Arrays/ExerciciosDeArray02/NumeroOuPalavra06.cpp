/*
    6. Fa�a um vetor contendo os dez valores de string "zero", "um", . . . "nove".
    Use isso em um programa que converte um d�gito em seu valor soletrado
    correspondente; por exemplo, a entrada 7 d� a sa�da sete. Fa�a com que
    o mesmo programa, usando o mesmo loop de entrada, converta n�meros
    soletrados em sua forma de d�gito; por exemplo, a entrada sete d� a sa�da 7.
    Pedro, 03/11/2022
*/
#include <vector>
#include <string>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipos
void numeroOuPalavra(vector<int> &, int);
void palavraOuNumero(vector<int> &, string);

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vetor
    vector<string> palavras = {"zero", "um", "dois", "tr�s", "quatro",
                                                "cinco", "seis", "sete", "oito", "nove",  };

    vector<int> numeros = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = 0;
    char resposta = ' ';

    while( true )
    {
        // entrada de dados
        cout << "Digite um n�mero entre 0 e 9: ";
        cin >> n;

        if(n >= 0 && n <= 9)
            cout << "Voc� digitou o n�mero " << palavras[ n ] << endl;
        else
            cout << "Valor indevido!" << endl;

        cout << "\nDeseja continuar [s / n]?";
        cin >> resposta;

        if( resposta != 's')
            break;

    } // final while

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// numeroOuPalavra
void numeroOuPalavra(vector<int> vetor, int chave)
{
    cout << "Voc� digitou o n�mero " << vetor[ chave ] << endl;
}
