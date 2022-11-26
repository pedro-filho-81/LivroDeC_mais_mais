/*
    2.17 Escreva um programa que imprime os números 1 a 4 na mesma linha com
    cada par de números adjacentes separados por um espaço. Faça  isso de várias maneiras:
    a) Utilizando uma instrução com um operador de inserção de fluxo.
    b) Utilizando uma instrução com quatro operadores de inserção de fluxo.
    c) Utilizando quatro instruções.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 53). Edição do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // a) Utilizando uma instrução com um operador de inserção (<<) de fluxo.
    cout << "1 2 3 4\n";

    // b) Utilizando uma instrução com quatro operadores de inserção (<<) de fluxo.
    cout << "1 " << "2 " << "3 " << "4\n";

    // c) Utilizando quatro instruções.
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4\n";

    return 0; // programa terminado com sucesso

} // fim main
