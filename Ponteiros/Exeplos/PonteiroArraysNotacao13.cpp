/*
    Utilizando notações de subscrito e de ponteiro com arrays
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

    //cria vetor co 4 elementos
    int vetor[] = {10, 20, 30, 40};
    int *vtrPtr = vetor; // ponteiro recebe vetor

    // gera saido do vetor utilizando notação de subscrito de array
    cout << "Vetor impresso com:\n\n"
            << "Vetor com notação de subscrito" << endl;

    // loop para mostrar os elementos do vetor
    for(int i = 0; i < 4; i++)
    {
        cout << "vetor[" << i << "] = " << vetor[ i ] << '\n';
    }

    // gera saída do vetor utilizando a notação de nome do array
    // e a de ponteiro / deslocamento
    cout << "\nNotação Ponteiro / deslocamento notação "
            << "o ponteiro é o nome do vetor" << endl;

    for(int offset1 = 0; offset1 < 4; offset1++ )
        cout << "*(vetor + " << offset1 << ") = " << *(vetor + offset1) << '\n';

    // gera saída do vetor utilizando o ponteiro e notação de subscrito de array
    cout << "\nNotação de ponteiro de subscrito." << endl;

    for( int j = 0; j < 4; j++)
        cout << "vtrPtr[" << j << "] = "
                << vtrPtr[ j ] << endl;

    // utilizando notação ponteiro/deslocamento
    cout << "\nNotação ponteiro/deslocamento" << endl;

    for(int offset2 = 0; offset2 < 4; offset2++)
        cout << "*(vtrPtr + " << offset2 << ") = "
                << *(vtrPtr + offset2) << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
