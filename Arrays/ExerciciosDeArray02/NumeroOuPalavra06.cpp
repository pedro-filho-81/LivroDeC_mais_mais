/*
    6. Faça um vetor contendo os dez valores de string "zero", "um", . . . "nove".
    Use isso em um programa que converte um dígito em seu valor soletrado
    correspondente; por exemplo, a entrada 7 dá a saída sete. Faça com que
    o mesmo programa, usando o mesmo loop de entrada, converta números
    soletrados em sua forma de dígito; por exemplo, a entrada sete dá a saída 7.
    Pedro, 03/11/2022
*/
#include <vector>
#include <string>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void numeroOuPalavra(vector<int> &, int);
void palavraOuNumero(vector<int> &, string);

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vetor
    vector<string> palavras = {"zero", "um", "dois", "três", "quatro",
                                                "cinco", "seis", "sete", "oito", "nove",  };

    vector<int> numeros = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = 0;
    char resposta = ' ';

    while( true )
    {
        // entrada de dados
        cout << "Digite um número entre 0 e 9: ";
        cin >> n;

        if(n >= 0 && n <= 9)
            cout << "Você digitou o número " << palavras[ n ] << endl;
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
    cout << "Você digitou o número " << vetor[ chave ] << endl;
}
