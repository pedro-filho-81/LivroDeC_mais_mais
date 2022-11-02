/*
    4. Escreva um programa para jogar um jogo de adivinha��o de n�meros.
        O usu�rio pensa em um n�mero entre 1 e 100 e seu programa faz perguntas
        para descobrir qual � o n�mero (por exemplo, �O n�mero em que voc� est�
        pensando � menor que 50?�). Seu programa deve ser capaz de identificar
        o n�mero depois de fazer no m�ximo sete perguntas. Dica: Use os operadores
        < e <= e a constru��o if-else.
        Pedro, 02/11/2022
*/
#include <algorithm>
#include <vector>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// prot�tipos
int adicionarNumero(vector<int> &); // adiciona n�mero ao vetor
void exibirValores(vector<int> &); // exibe os valores do vetor

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vetor
    vector<int> numerosJogados = {0};

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionarNumero
int adicionarNumero(vector<int> &vetor)
{
    srand( time( 0 ) );

    vetor[]
    return 1 + rand() % 100;

} // final adicionarNumero
