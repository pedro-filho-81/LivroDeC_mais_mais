/*
    Escreva um programa que insere três inteiros a partir do teclado e imprime
    a soma, a média, o produto, o menor e o maior desses números.
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

    // variáveis
    int num1, num2, num3;
    int soma = 0;
    int subtracao =0;
    int produto = 0;
    float media = 0;
    int maior = 0;
    int menor = 0;

    // entrada de dados
    cout << "Digite três números inteiros: ";
    cin >> num1 >> num2 >> num3;

    // calculando
    soma = num1 + num2 + num3;
    media = soma / 3;
    subtracao = num1 - num2 - num3;
    produto = num1 * num2 * num3;

    // atribuindo valor
    maior = num1;
    menor = num1;

    // se num2 maior que maior
    if( num2 > maior )
        // maior recebe num2
        maior = num2;

    // se num3 maior que maior
    if( num3 > maior )
        maior = num3;

    // se num2 menor que menot
    if( num2 < menor )
        menor = num2;

    // se num3 menor que menor
    if( num3 < menor )
        menor = num3;

    // mostra resultado
    cout << "Você digitou os números: " << num1 << " "<< num2 << " " << num3 << endl;
    cout << "Soma = " << soma << endl;
    cout << "Subtração = " << subtracao << endl;
    cout << "Produto = " << produto << endl;
    cout << "Maior número = " << maior << endl;
    cout << "Menor número = " << menor << endl;

    return 0; // programa terminado com sucesso

} // fim main
