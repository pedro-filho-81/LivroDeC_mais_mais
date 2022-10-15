/*
    usando a palavra-chave ( const ) antes do tipo no par�metro da fun��o,
    para n�o permitir a modifica��o dos valores do array original, a tentativa
    gera erro de compila��o
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// prot�tipo
void tentandoAlterarValores( const int[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // vetor
    int vetor[ ] = {10, 20, 30};

    cout << "vetor[ ] = " << vetor[0] << vetor[1] << vetor[2] << endl;

    for( int i = 0; i < 3; i++)
        cout << setw(3)  << vetor[ i ];

    // chama a fun��o tentando
    tentandoAlterarValores( vetor );

    cout << "vetor depois da fun��o tentandoAlterarValores() = "
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
    // recebido no par�metro, gera erro na compila��o.
    vetor[0] *= 2;
    vetor[1] *= 3;
    vetor[2] *= 5;
} // final tentandoAlterarValores
