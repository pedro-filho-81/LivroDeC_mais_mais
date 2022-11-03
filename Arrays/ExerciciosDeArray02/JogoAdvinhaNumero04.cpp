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
int adicionarNumero(); // adiciona número ao vetor
void exibirValores(vector<int> &); // exibe os valores do vetor

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    int sorteio = 0;
    int palpite = 0;
    int contaJogadas = 0;
    char sentinela = 's';

    // vetor
    vector<int> numerosJogados = {0};

    while(sentinela != 'n' || sentinela != 'N')
    {
        // gerador
        srand( time( NULL ) );

        // sorteio recebe valor aleatório
        sorteio = adicionarNumero();
        // vetor recebe o valor sorteado
        numerosJogados.push_back(sorteio);

        // informa a área do número sorteaeo
        cout << "Estou pensando em um número entre 1 e 1000:"
                << "\nVocê consegur adivinhá-lo? " << endl;

        while( true )
        {
            cout << "Que número estou pensando? ";
            cin >> palpite;

            // se o valor do sorteio igual ao palpite
            if( sorteio == palpite)
            {
                // imprima
                cout << "\nExcelente! Você adivinhou o número." << endl;
                contaJogadas++;

                if(contaJogadas <= 10)
                {
                    cout << "Você sabe o segredo ou teve sorte!" << endl;
                } // final if contar
                else if( contaJogadas >= 11)
                {
                    cout << "Você deveria ser capaz de fazer melhor!" << endl;
                } // final else if

                break; // e saia do jogo
            } // final if
            else if(sorteio > palpite)
            {
                cout << "Muito baixo. Tente um número maior." << endl;
                contaJogadas++;
            }
            else if(sorteio < palpite)
            {
                cout << "Muito alto. Tente um número menor." << endl;
                contaJogadas++;
            }

        } // final while interno

        // resultado
        cout << "Você jogou " << contaJogadas << " vezes\n" << endl;
        contaJogadas = 0;

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
    srand( time(  NULL ) );
    return rand() % 1000;

} // final adicionarNumero
