/*
    7.9 Considere um array de inteiros 2 por 3 t.
        a) Escreva uma declaração para t.
        b) Quantas linhas tem t?
        c) Quantas colunas tem t?
        d) Quantos elementos tem t?
        e) Escreva os nomes de todos os elementos na linha 1 de t.
        f) Escreva os nomes de todos os elementos na coluna 2 de t.
        g) Escreva uma única instrução que configura o elemento de t na linha 1 e na coluna 2 como zero.
        h) Escreva uma série de instruções que inicializam cada elemento de t como zero. Não utilize um loop.
        i) Escreva uma instrução for aninhada que inicializa cada elemento de t como zero.
        j) Escreva uma instrução que insere os valores para os elementos de t a partir do terminal.
        k) Escreva uma série de instruções que determinam e imprimem o menor valor no array t.
        l) Escreva uma instrução que exibe os elementos na linha 0 de t.
        m) Escreva uma instrução que soma os elementos na coluna 3 de t.
        n) Escreva uma série de instruções que imprime o array t no formato tabular. Liste os subscritos de coluna como títulos ao longo do topo
        da tabela e liste os subscritos de linha à esquerda de cada linha.
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

    // 7.9 Considere um array de inteiros 2 por 3 t.
    // a) Escreva uma declaração para t.
    int t[ 2 ][ 3 ];

    // b) Quantas linhas tem t? 2
    // c) Quantas colunas tem t? 3
    // d) Quantos elementos tem t? 3 * 2 = 6

    // e) Escreva os nomes de todos os elementos na linha 1 de t.
    //t[][] = 1, 2, 3;

    // f) Escreva os nomes de todos os elementos na coluna 2 de t.
    //t[][] = 4, 5, 6;

    //g) Escreva uma única instrução que configura o elemento de t
            // na linha 1 e na coluna 2 como zero.
    //t[1][2] = 6;

    //h) Escreva uma série de instruções que inicializam cada elemento de t como zero.
            // Não utilize um loop.
    // t[0][0] = 0;
    // t[0][1] = 0;
    // t[0][2] = 0;
    // t[1][0] = 0;
    // t[0][1] = 0;
    // t[0][2] = 0;

    //i) Escreva uma instrução for aninhada que inicializa cada elemento de t como zero.
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            t[ i ][ j ] = 0;

    // j) Escreva uma instrução que insere os valores para os elementos de t a partir do terminal.
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
        {
            cout << "Digite um inteiro;";
            cin >> t[ i ][ j ];
        }

    // k) Escreva uma série de instruções que determinam e imprimem o menor valor no array t.
    int maior = t[0][0];
    int menor = t[0][0];
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
        {
            if(t[i][j] > maior)
                maior = t[i][j];

            if(t[i][j] < menor)
                menor = t[i][j];
        } // final for

        cout << "\nmaior = " << maior
                << "\nmenor = " << menor <<  endl;

    //) Escreva uma instrução que exibe os elementos na linha 0 de t.
        for(int j = 0; j < 3; j++)
            cout << setw(5) << t[ 0 ][ j ];

    //m) Escreva uma instrução que soma os elementos na coluna 3 de t.
    int total = 0;
    for(int i = 0; i < 2; i++)
    {
        total += t[i][2];
    }
    cout << "\nSoma = " << total << endl;

    //n) Escreva uma série de instruções que imprime o array t no formato tabular.
            //Liste os subscritos de coluna como títulos ao longo do topo
            //da tabela e liste os subscritos de linha à esquerda de cada linha.
     cout << "\nTabela:" << endl;
     cout << "       ";

     for(int a = 0; a < 3; a++)
        cout << setw(5) << a+1;
    cout << endl;

     for(int i = 0; i < 2; i++)
     {
        cout << "Linha " << i;
        for(int j = 0; j < 3; j++)
        {
            cout << setw(5) << t[i][j];
        }
        cout << endl;
     } // final for

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
