/*
    7.9 Considere um array de inteiros 2 por 3 t.
    a) Escreva uma declaração para t.
    b) Quantas linhas tem t?
    c) Quantas colunas tem t?
    d) Quantos elementos tem t?
    e) Escreva os nomes de todos os elementos na linha 1 de t.
    f) Escreva os nomes de todos os elementos na coluna 2 de t.
    g) Escreva uma única instrução que configura o elemento
    de t na linha 1 e na coluna 2 como zero.
    h) Escreva uma série de instruções que inicializam cada elemento
    de t como zero. Não utilize um loop.
    i) Escreva uma instrução for aninhada que inicializa cada elemento de t como zero.
    j) Escreva uma instrução que insere os valores para os elementos
    de t a partir do terminal.
    k) Escreva uma série de instruções que determinam e imprimem
    o menor valor no array t.
    l) Escreva uma instrução que exibe os elementos na linha 0 de t.
    m) Escreva uma instrução que soma os elementos na coluna 3 de t.
    n) Escreva uma série de instruções que imprime o array t no formato tabular.
    Liste os subscritos de coluna como títulos ao longo do topo  da tabela
    e liste os subscritos de linha à esquerda de cada linha.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 302). Edição do Kindle.
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // 7.9 Considere um array de inteiros 2 por 3 t.
    // a) Escreva uma declaração para t.

    const int linhaSize = 2;
    const int colunaSize = 3;

    int t[linhaSize][colunaSize] = {1, 2, 3, 4, 5, 6};

    // b) Quantas linhas tem t?
    cout << "const int linhaSize = 2;" << endl;

    // c) Quantas colunas tem t?
    cout << "const int colunaSize = 3;" << endl;

    // d) Quantos elementos tem t?
    cout << "Tem 6 elementos" << endl;

    // e) Escreva os nomes de todos os elementos na linha 1 de t.
    cout << "Elementos da linha 1 = 1, 2, 3" << endl;

    // f) Escreva os nomes de todos os elementos na coluna 2 de t.
    cout << "Elementos da coluna 2 = 3, 6" << endl;

    // g) Escreva uma única instrução que configura o elemento
    // de t na linha 1 e na coluna 2 como zero.
    cout << "Configura Elemento da linha 1 coluna 2 como 0" << endl;
    cout << "t[ 1 ][ 2 ] = 0;" << endl;

    // h) Escreva uma série de instruções que inicializam cada elemento
    // de t como zero. Não utilize um loop.
    cout << "Inicializa elemento sem loop." << endl;
    cout << "t[0][0] = 0;" << endl;
    cout << "t[0][1] = 0;" << endl;
    cout << "t[0][2] = 0;" << endl;
    cout << "t[1][0] = 0;" << endl;
    cout << "t[1][1] = 0;" << endl;
    cout << "t[1][2] = 0;" << endl;

    // i) Escreva uma instrução for aninhada que inicializa cada elemento de t como zero.
    for(int i = 0; i < linhaSize; i++)
        for( int j = 0; j < colunaSize; j++)
            t[ i ][ j ] = 0;

    // j) Escreva uma instrução que insere os valores para os elementos
    // de t a partir do terminal.
    int valor = 0;
    cout << "Digite 5 valores inteiros: ";
    for(int i = 0; i < linhaSize; i++)
        for(int j = 0; j < colunaSize; j++)
        {
            cin >> valor;
            t[ i ][ j ] = valor;
        }

    // k) Escreva uma série de instruções que determinam e imprimem
    // o menor valor no array t.
    int menorValor = t[ 0 ][ 0 ];
    for(int i = 0; i < linhaSize; i++)
        for(int j = 0; j < colunaSize; j++)
        {
            if(t[ i ][ j ] < menorValor)
                menorValor = t[ i ][ j ];
        } // final for
    cout << "O menor valor é " << menorValor << endl;

    // l) Escreva uma instrução que exibe os elementos na linha 0 de t.
    cout << "Linha 1 = ";
        for(int j = 0; j < colunaSize; j++)
            cout << setw(3) << t[ 0 ][ j ];
        cout << endl;

    // m) Escreva uma instrução que soma os elementos na coluna 3 de t.
    int total = 0;
    for(int i = 0; i < linhaSize; i++)
        total += t[ i ][ 2 ];
    cout << "O valor total dos elementos da coluna 3 é " << total << endl;

    // n) Escreva uma série de instruções que imprime o array t no formato tabular.
    // Liste os subscritos de coluna como títulos ao longo do topo  da tabela
    // e liste os subscritos de linha à esquerda de cada linha.
    cout << "\nmatriz t[ 2 ] [ 3 ] = " << endl;
    cout << "            ";
    for(int a = 0; a < colunaSize; a++)
        cout << "T" << a + 1 << setw(2);
    cout << endl;

    for(int i = 0; i < linhaSize; i++)
    {
        cout << "Linha " << i + 1 << " -> " << setw( 2);
        for(int j = 0; j < colunaSize; j++)
        {
            cout << setw(3) << t[ i ][ j ];
        }
        cout << endl;
    }

    system("pause"); // pausa do programa

    return 0;

} // final principal
