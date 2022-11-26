/*
    2.20 Escreva um programa que lê o raio de um círculo como um inteiro e imprime
    o diâmetro, a circunferência e a área do círculo. Utilize o  valor constante 3,14159
    para π. Faça todos os cálculos em instruções de saída. [Nota: Neste capítulo,
    discutimos apenas as constantes e  variáveis de inteiro. No Capítulo 4,
    discutimos números de ponto flutuante, isto é, valores que podem ter pontos de fração decimal.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 53). Edição do Kindle.
    Autor: Pedro, 04/08/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // cria variáveis
    int raio;
    const int PI = 3.14159;

    // entrada de dados
    cout << "Digite o raio do círculo: ";
    cin >> raio;

    // mostra resultado
    cout << "CiRCULO\n";
    cout << "Raio = " << raio << endl;
    cout << "Area = " << PI * (raio * raio) << endl;
    cout << "Circunferência = " << raio << endl;
    cout << "Diâmetro = " << raio * raio << endl;
    cout << "Perimetro = " << 2 * PI * raio << endl;
    cout << "Comprimento = " << 2 * PI * raio << endl;

    return 0; // programa terminado com sucesso

} // fim main
