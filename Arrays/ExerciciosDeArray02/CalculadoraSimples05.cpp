/*
    5. Escreva um programa que funcione como uma calculadora muito simples.
        Sua calculadora deve ser capaz de lidar com as quatro operações matemáticas básicas
        — somar, subtrair, multiplicar e dividir — em dois valores de entrada.
        Seu programa deve solicitar ao usuário que insira três argumentos: dois valores duplos
        e um caractere para representar uma operação. Se os argumentos de entrada forem
        35,6, 24,1 e '+', a saída do programa deverá ser A soma de 35,6 e 24,1 é 59,7.
        No Capítulo 6, veremos uma calculadora simples muito mais sofisticada.
        Pedro, 03/11/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
double somar(double, double);
double diminuir(double, double);
double multiplicar(double, double);
double dividir(double, double);
void menu();

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    while( true )
    {
        char opcao = ' ';
        double n1 = 0.0, n2 = 0.0;

        // entrada de dados
        menu();
        cout << "Digite 2 números: ";
        cin >> n1 >> n2;
        cout << "Informe a opção: " ;
        cin >> opcao;

        switch(opcao)
        {
            case '+':
                cout << n1 << " + " << n2 << " = " << somar(n1, n2) << endl;
                break;

            case '-':
                cout << n1 << " - " << n2 << " = " << diminuir(n1, n2) << endl;
                break;

            case '*':
                cout << n1 << " * " << n2 << " = " << multiplicar(n1, n2) << endl;
                break;

            case '/':
                cout << n1 << " / " << n2 << " = " << dividir(n1, n2) << endl;
                break;

            default:
                cout << "Opção inválida!" << endl;
                break;
        } // final switch

        cout << "Deseja continuar? ";
        char resposta = ' ';
        cin >> resposta;

        if(resposta == 'n' || resposta == 'N')
            break; // sair do progra

    } // final while

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// menu
void menu()
{
    cout << "\t M E N U" << endl;
    cout << "****************************" << endl;
    cout << "*      +   =>  Somar       *" << endl;
    cout << "*      -   =>  Diminuir    *" << endl;
    cout << "*      *   =>  Multiplicar *" << endl;
    cout << "*      /   =>  Dividir     *" << endl;
    cout << "****************************" << endl;
}
// somar
double somar(double x, double y)
{
    return x + y;
} // final somar

double diminuir(double x, double y)
{
    return x - y;
} // final diminuir

double multiplicar(double x, double y)
{
    return x * y;
} // final multiplicar

double dividir(double x, double y)
{
    if(y != 0)
        return x / y;
} // final dividir0
