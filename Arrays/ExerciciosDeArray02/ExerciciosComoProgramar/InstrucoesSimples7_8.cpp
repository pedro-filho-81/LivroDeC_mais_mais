/*
    7.8 Escreva instruções C++ para realizar cada uma das seguintes tarefas:
        a) Exiba o valor do elemento 6 do array de caracteres f.
        b) Insira um valor no elemento 4 do array unidimensional de ponto flutuante b.
        c) Inicialize cada um dos 5 elementos do array de inteiros unidimensional g como 8.
        d) Some e imprima os elementos do array de ponto flutuante c de 100 elementos.
        e) Copie o array a para a primeira parte do array b. Considere double a[ 11 ], b[ 34 ];
        f) Determine e imprima os maiores e menores valores contidos no array
            de ponto flutuante w de 9 elementos
    Pedro,10/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // 7.8 Escreva instruções C++ para realizar cada uma das seguintes tarefas:
    // a) Exiba o valor do elemento 6 do array de caracteres f.
    cout << "\na) Exiba o valor do elemento 6 do array de caracteres f." << endl;
    char f[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    cout << "Vetor char f[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};" << endl;
    cout << "f[ 6 ] = " << f[ 6 ] << endl;

    // b) Insira um valor no elemento 4 do array unidimensional de ponto flutuante b.
    cout << "\nb) Insira um valor no elemento 4 do array unidimensional de ponto flutuante b." << endl;
    double b[] = {1.2, 2.3, 5.4, 3.2, 8.5, 6.4, 9.2};
    cout << "\nVetor double b[] = {1.2, 2.3, 5.4, 3.2, 8.5, 6.4, 9.2};"  << endl;
    cout << "b[4] antes de adicionar outro valor = " << b[ 4 ] << endl;
    b[ 4 ] = 100.25;
    cout << "\nAdiciona u valor na posição b[ 4 ] = 100.25; do vetor." << endl;
    cout << "b[4] depois da adição de outro valor = " << b[ 4 ] << endl;
    cout << "\nVetor double b[] = {1.2, 2.3, 5.4, 3.2, 100.25, 6.4, 9.2};"  << endl;

    // c) Inicialize cada um dos 5 elementos do array de inteiros unidimensional g como 8.
    cout << "\nc) Inicialize cada um dos 5 elementos do array de inteiros unidimensional g como 8." << endl;
    int g[ 5 ];
    cout << " int g[ 5 ];" << endl;
    // loop para adicionar valores no vetor g
    for(int vl = 0; vl < 5; vl++)
        g[ vl ] = 8;
    // loop para exibir os valores do vetor g
    cout << "\nVetor g[ 5 ] = {";
    // loop para mostrar os valores de a
    for(int i = 0; i < 5; i++)
    {
        cout << setw(8) << g[ i ];
    } // final
    cout << "};" << endl;

    // d) Some e imprima os elementos do array de ponto flutuante c de 100 elementos.
    cout << "\nd) Some e imprima os elementos do array de ponto flutuante c de 100 elementos." << endl;
    double c[ 101 ]; // cria vetor para 100 elementos
    double total = 0; // soma os valores
    int i = 0; // contador while
    int j; // contador para for

    // loop para adicionar os valores ao vetor
    for( j = 0; j < 101; j++)
        c[ j ] = static_cast<double> ( j + 1) / 3,37; // adiciona os valores de j ao vetor c

    cout << "\nVetor c[ 100 ] = {\n";
    // enquanto i menor ou igual a 100 faça
    while( i < 101 )
    {
        total += c[ i ]; // soma os valores de i
        i++; // incrementa em 1 i

        if(i % 10 == 0)
            cout << endl;

        cout << setw(8) << setprecision(2) << fixed << c[ i ];
    } // final enquanto

    cout << " };" << endl;

    // exibe o total
    cout << "\nO total dos valore de c[ 100 ] é " << total << endl;

    // e) Copie o array a para a primeira parte do array b. Considere double a[ 11 ], b[ 34 ];
    cout << "\ne) Copie o array a para a primeira parte do array b. Considere double a[ 11 ], b[ 34 ];" << endl;
    // cria vetores
    double a[ 11 ] = {0};
    double bb[ 34 ] = {0};

    // loop para adicionar valores no vetor a
    for(int i = 0; i < 11; i++)
        a[ i ] = i * 2.35;

    // loop para adicionar valores no vetor bb
    for(int j = 0; j < 34; j++)
    {
        // se j menor que onze
        if( j < 11)
            // bb recebe os valores do vetor a
            bb[ j ] = a[ j ];
        else // se não
            // bb recebe
            bb[ j ] = j * 3.23;
    } // final for j

    cout << "\nVetor a[ 11 ] = {" << endl;
    // loop para mostrar os valores de a
    for(int i = 0; i < 11; i++)
    {
        cout << setw(8) << a[ i ];
    } // final
    cout << "};" << endl;

    cout << "\nVetor bb[ 34 ] = {";
    // loop para mostrar os valores de a
    for(int i = 0; i < 34; i++)
    {
        if( i % 11 == 0)
            cout << endl;

        cout << setw(8) << bb[ i ];
    } // final
    cout << "};" << endl;

    //f) Determine e imprima os maiores e menores valores contidos
    // no array de ponto flutuante w de 9 elementos
    cout << "\nf) Determine e imprima os maiores e menores valores contidos no array de ponto flutuante w de 9 elementos" << endl;
    // vetor
    float w[ 9 ];

    // loop para adicionar valor
    for( int i = 0; i < 9; i++)
        w[ i ] = (i + 1) / 3.23;

    float maior = w[ 0 ];
    float menor = w[ 0 ];
    cout << "\nVetor w[ 9 ] = {";
    // loop para mostrar os valores
    for(int i = 0; i < 9; i++)
    {
        cout << setw(8) << w[ i ];
        if(w[ i ] > maior)
            maior = w[ i ];

        if(w[ i ] < menor)
            menor = w[ i ];
    } // final
    cout << "};" << endl;

    cout << "\nmaior valor = " << maior
            << "\nmenor valor = " << menor << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
