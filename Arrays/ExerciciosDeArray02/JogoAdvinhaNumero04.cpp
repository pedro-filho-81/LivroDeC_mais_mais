/*
    4. Escreva um programa para jogar um jogo de adivinhação de números.
        O usuário pensa em um número entre 1 e 100 e seu programa faz perguntas
        para descobrir qual é o número (por exemplo, “O número em que você está
        pensando é menor que 50?”). Seu programa deve ser capaz de identificar
        o número depois de fazer no máximo sete perguntas. Dica: Use os operadores
        < e <= e a construção if-else.
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

// protótipos
int adicionarNumero(vector<int> &); // adiciona número ao vetor
void exibirValores(vector<int> &); // exibe os valores do vetor

int main()
{
    // muda a configuração para português brasileiro
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
