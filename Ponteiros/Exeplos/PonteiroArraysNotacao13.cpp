/*
    Utilizando nota��es de subscrito e de ponteiro com arrays
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

    //cria vetor co 4 elementos
    int vetor[] = {10, 20, 30, 40};
    int *vtrPtr = vetor; // ponteiro recebe vetor

    // gera saido do vetor utilizando nota��o de subscrito de array
    cout << "Vetor impresso com:\n\n"
            << "Vetor com nota��o de subscrito" << endl;

    // loop para mostrar os elementos do vetor
    for(int i = 0; i < 4; i++)
    {
        cout << "vetor[" << i << "] = " << vetor[ i ] << '\n';
    }

    // gera sa�da do vetor utilizando a nota��o de nome do array
    // e a de ponteiro / deslocamento
    cout << "\nNota��o Ponteiro / deslocamento nota��o "
            << "o ponteiro � o nome do vetor" << endl;

    for(int offset1 = 0; offset1 < 4; offset1++ )
        cout << "*(vetor + " << offset1 << ") = " << *(vetor + offset1) << '\n';

    // gera sa�da do vetor utilizando o ponteiro e nota��o de subscrito de array
    cout << "\nNota��o de ponteiro de subscrito." << endl;

    for( int j = 0; j < 4; j++)
        cout << "vtrPtr[" << j << "] = "
                << vtrPtr[ j ] << endl;

    // utilizando nota��o ponteiro/deslocamento
    cout << "\nNota��o ponteiro/deslocamento" << endl;

    for(int offset2 = 0; offset2 < 4; offset2++)
        cout << "*(vtrPtr + " << offset2 << ") = "
                << *(vtrPtr + offset2) << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
