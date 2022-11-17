/*
    tentar modificar um ponteiro const para dados n�o constante
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

    int x = 5, y;

    /*
        ptr � um ponteiro constante para um inteiro que    pode
        ser modificado por ptr, mas ptr sepre aponta para a mesma
        posi��o da me�ria;
    */
    // constante deve ser inicializada
    const int * const ptr = &x; // ponteiro constante recebe endere�o de x

    cout << *ptr << endl; // imprime o valor de x

    // ptr recebe valor
    *ptr = 7; // Erro: *ptr � const, n�o � poss�vel atribuir novo valor
    ptr = &y; // Erro: ptr � constante, n�o � poss�vel atribu�-lo a um novo endere�o.

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
