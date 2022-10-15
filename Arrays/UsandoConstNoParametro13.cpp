/*
    usando a palavra-chave ( const ) antes do tipo no parâmetro da função,
    para não permitir a modificação dos valores do array original, a tentativa
    gera erro de compilação
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
void tentandoAlterarValores( const int[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // vetor
    int vetor[ ] = {10, 20, 30};

    cout << "vetor[ ] = " << vetor[0] << vetor[1] << vetor[2] << endl;

    for( int i = 0; i < 3; i++)
        cout << setw(3)  << vetor[ i ];

    // chama a função tentando
    tentandoAlterarValores( vetor );

    cout << "vetor depois da função tentandoAlterarValores() = "
            << vetor[0] << vetor[1] << vetor[2] << endl;

    for( int i = 0; i < 3; i++)
        cout << setw(3) << vetor[ i ];

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

void tentandoAlterarValores(const int vetor[])
{
    // A tentativa de alterar os valores originais do vetor
    // recebido no parâmetro, gera erro na compilação.
    vetor[0] *= 2;
    vetor[1] *= 3;
    vetor[2] *= 5;
} // final tentandoAlterarValores
