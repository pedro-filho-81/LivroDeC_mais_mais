/*
    tentar modificar um ponteiro const para dados não constante
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

    int x = 5, y;

    /*
        ptr é um ponteiro constante para um inteiro que    pode
        ser modificado por ptr, mas ptr sepre aponta para a mesma
        posição da meória;
    */
    // constante deve ser inicializada
    const int * const ptr = &x; // ponteiro constante recebe endereço de x

    cout << *ptr << endl; // imprime o valor de x

    // ptr recebe valor
    *ptr = 7; // Erro: *ptr é const, não é possível atribuir novo valor
    ptr = &y; // Erro: ptr é constante, não é possível atribuí-lo a um novo endereço.

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
