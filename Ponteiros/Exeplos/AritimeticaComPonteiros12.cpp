/*
    aritim�tica com ponteiros
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

    const int vetorSize = 5;
    int vetor[vetorSize] = {5, 3, 2, 1, 4};

    // &vetor[0] atribui o endere�o da posi��o da mem�ria
    // &vetor[0] + 1 soma o valor de byte do tipo ao endere�o do vetor
    // Exp: int tem 4 bytes = &vetor[0] + 1 * 4
    int *vetorPtr = &vetor[0] + 1; // atribui o endere�o da mem�ria
    // direciona para o elemento 3 em vez do 5

    cout << "sizeof(int) = " << sizeof(int) << endl; // mostra quantos bytes tem o tipo int
    cout << "vetorPtr = " << vetorPtr // mostra o valor do endere�o de memoria
            << "\n*vetorPtr = " << *vetorPtr << endl; // mostra o valor do elemento na memoria

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
