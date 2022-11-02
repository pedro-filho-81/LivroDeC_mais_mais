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
int adicionarNumero(); // adiciona n�mero ao vetor
void exibirValores(vector<int> &); // exibe os valores do vetor

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    int sorteio = 0;
    int palpite = 0;
    char sentinela = 's';

    // vetor
    vector<int> numerosJogados = {0};

    while(sentinela != 'n' || sentinela != 'N')
    {
        // gerador
        srand( time( 0 ) );

        // sorteio recebe valor aleat�rio
        sorteio = adicionarNumero();
        // vetor recebe o valor sorteado
        numerosJogados.push_back(sorteio);

        // informa a �rea do n�mero sorteaeo
        cout << "Estou pensando em um n�mero entre 1 e 1000:"
                << "\nVoc� consegur adivinh�-lo? " << endl;

        while( true )
        {
            cout << "Que n�mero estou pensando? ";
            cin >> palpite;

            // se o valor do sorteio igual ao palpite
            if( sorteio == palpite)
            {
                // imprima
                cout << "Voc� venceu!" << endl;
                break; // e saia do jogo
            } // final if
            else if(sorteio > palpite)
            {
                cout << "Digite um n�mero maior." << endl;
            }
            else if(sorteio < palpite)
            {
                cout << "Digite um n�mero menor." << endl;
            }

        } // final while interno

        cout << "Deseja continuar jogando( s ou n )? ";
        cin >> sentinela;
        if(sentinela == 's' || sentinela == 'S')
            system("cls");
        else
            break;

    } // final while externo

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionarNumero
int adicionarNumero()
{
    return 1 + rand() % 1000;

} // final adicionarNumero
