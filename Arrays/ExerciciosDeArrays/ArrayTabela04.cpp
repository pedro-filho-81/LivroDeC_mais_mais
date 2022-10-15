/*
    7.4 Responda às seguintes perguntas relacionadas a um array chamado table:
    a) Declare o array como um array de inteiros e tendo 3 linhas e 3 colunas.
    Suponha que a variável constante arraySize tenha sido  definida como 3.
    b) Quantos elementos o array contém?
    c) Utilize uma instrução de repetição for para inicializar cada elemento do
    array com a soma de seus subscritos.
    Suponha que as variáveis  inteiras i e j são declaradas como variáveis de controle.
    d) Escreva um segmento de programa para imprimir os valores de cada elemento
    do array table em formato tabular com 3 linhas e 3  colunas.
    Suponha que o array foi inicializado com a declaração
    int table[ arraySize ][ arraySize] = {{1, 8}, {2, 4, 6}, {5}};
    e que as variáveis inteiras i e j são declaradas como variáveis de controle.
    Mostre a saída.

Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 300). Edição do Kindle.
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // 7.4 Responda às seguintes perguntas relacionadas a um array chamado table:
    // a) Declare o array como um array de inteiros e tendo 3 linhas e 3 colunas.
    // Suponha que a variável constante arraySize tenha sido  definida como 3.

    const int arraySize = 3;
    cout << "const int arraySize = 3;" << endl;

    int table2[ arraySize ][ arraySize] = {{1, 8}, {2, 4, 6}, {5}};
    int table[arraySize][arraySize] = {0};
    cout << "int tabel[arraySize][arraySize] = {0};" << endl;

    //b) Quantos elementos o array contém?
    cout << "array tabel possui 9 elementos." << endl;

    // c) Utilize uma instrução de repetição for para inicializar cada elemento do
    // array com a soma de seus subscritos.
    // Suponha que as variáveis  inteiras i e j são declaradas como variáveis de controle.

    // adiciona valores
    for( int linha  = 0; linha < arraySize; linha++)
        for(int coluna = 0; coluna < arraySize; coluna++)
            table[linha][coluna] = linha + coluna;

    cout << "\ntable[arraySize][arraysize] = " << endl;
    // exibe valores
    for( int linha  = 0; linha < arraySize; linha++)
    {
        for(int coluna = 0; coluna < arraySize; coluna++)
        {
            cout << setw(5) << table[linha][coluna];
        } // final for interno
        cout << endl; // ppula linha
    } // final for externo

    // d) Escreva um segmento de programa para imprimir os valores de cada elemento
    // do array table em formato tabular com 3 linhas e 3  colunas.
    // Suponha que o array foi inicializado com a declaração
    // int table[ arraySize ][ arraySize] = {{1, 8}, {2, 4, 6}, {5}};
    // e que as variáveis inteiras i e j são declaradas como variáveis de controle.
    // Mostre a saída.

    cout << "\ntable2[arraySize][arraysize] = " << endl;
    for( int linha  = 0; linha < arraySize; linha++)
    {
        for(int coluna = 0; coluna < arraySize; coluna++)
        {
            cout << setw(5) << table2[linha][coluna];
        } // final for interno
        cout << endl; // ppula linha
    } // final for externo

    system("pause"); // pausa do programa

    return 0;

} // final principal
