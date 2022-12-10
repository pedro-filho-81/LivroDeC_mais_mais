/*
    programa para testar a sobregarga de função usando um
    templeite de classe
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;
// protótipo
template<class T> // template<nomeDoTipo variável>
T maximum( T valor1, T valor2, T valor3 )
{
    // variável recebe o parâmetro valor1
    T maiorValor = valor1;

    // verifica se o valor2 é maior que o maiorValor
    if(valor2 > maiorValor )
        maiorValor = valor2;

    // verifica se o valor3 é maior que o maiorValor
    if(valor3 > maiorValor )
        maiorValor = valor3;

    // retorna o maioraValor
    return maiorValor;

} // fim template

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    int int1, int2, int3;
    // entrada de dados inteiros
    cout  << "Digite 3 valores inteiros diferentes: ";
    cin >> int1 >> int2 >> int3;

    // exibe o maior valor
    cout << "O maior valor é " << maximum( int1, int2, int3 ) << endl;

    double double1, double2, double3;
    // entrada de dados
    cout  << "Digite 3 valores double diferentes: ";
    cin >> double1 >> double2 >> double3;

    // exibe o maior valor
    cout << "O maior valor é " << maximum( double1, double2, double3 ) << endl;

    char char1, char2, char3;
    // entrada de dados
    cout  << "Digite 3 caracteres diferentes: ";
    cin >> char1 >> char2 >> char3;

    // exibe o maior valor
    cout << "O maior valor é " << maximum( char1, char2, char3 ) << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
