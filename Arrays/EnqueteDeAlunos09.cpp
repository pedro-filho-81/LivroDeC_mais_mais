/*
    prograa enquete de alunos
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // const
    const int respostaSize = 40; // tamanho do vetor resposta
    const int frequenciaSize = 11; // tamanho do vetor frequência

    // vetor respostas
    const int respostas[] = {1, 2, 3, 5, 7, 9, 8, 4, 10, 8, 9, 5, 6, 3, 10, 7,
                                        9, 8, 5, 4, 2, 3, 1, 5, 10, 7, 8, 9, 4, 1, 2, 3,
                                        5, 8, 2, 4, 6, 3, 3, 7};

    // array frequência
    int frequencia[frequenciaSize] = {0};

    // conta a ferquência
    for( int contar = 0; contar < respostaSize; contar++)
        frequencia[ respostas[ contar ] ]++;

    cout << setw(6) << "Notas" << setw(13) << "Frequência" << endl;

    // loop para exibir a frequência
    for(int exibir = 1; exibir < frequenciaSize; exibir++)
        cout << setw(5) << exibir << setw(13) << frequencia[exibir] <<  endl;

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
