/*
    Programa para criar histograma
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

    // constante
    const int TAmANHO = 10;

    // vetor
    int vetor[TAmANHO] = {20,15,10,8, 5, 3, 18, 13, 9, 25};

    // cabeçalho
    cout << "Índice" << setw(13) << "Valor" << setw(12) << "Histograma" << endl;

    // loop para exibir
    for(int i = 0; i < TAmANHO; i++)
    {
        // exibir índice, valor do elemento
        cout << setw(3) << i + 1 << setw(13) << vetor[ i ] << setw(10);

        // histograma
        for(int j = 0; j < vetor[ i ]; j++)
            cout << "a"; // exibe asterisco

        cout << endl; // pula linha

    } // final for i

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
