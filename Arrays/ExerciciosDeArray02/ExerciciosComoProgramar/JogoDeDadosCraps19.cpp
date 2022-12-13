/*
    jogo de dados craps
    7.19 Modifique o programa da Figura 6.11 para jogar 1000 partidas do jogo
    de dados craps. O programa deve monitorar as estat�sticas e  responder
    �s seguintes perguntas:
    a) Quantas partidas s�o ganhas na primeira rolagem dos dados,
    na segunda,..., na vig�sima e depois da vig�sima rolagem dos dados?
    b) Quantas partidas s�o perdidas na primeira rolagem dos dados,
    na segunda,..., na vig�sima e depois da vig�sima rolagem dos dados?
    c) Quais s�o as chances de ganhar no jogo de dados?
    [Nota: Voc� deve descobrir que o craps � um dos jogos mais comuns de cassino.
    O que voc� sup�e que isso significa?]
    d) Qual � o comprimento m�dio de um jogo de dados craps?
    e) As chances de ganhar aumentam com o comprimento do jogo?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 304). Edi��o do Kindle.
    Pedro, 02/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int rolaDados(); // lan�a os dados, calcula e exibe a soma
void frequencia(int [], int); // estatistica

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // enumera��o com constantes que representam o status do jogo
    enum Status {CONTINUE, WON, LOST};

    // vari�veis
    int contador = 0;
    int jogada = 0;
    int venceu = 0;
    int perdeu = 0;
    int venceuDePrieira = 0;
    int perdeuDePrieira = 0;
    int myPonts = 0; // para se n�o ganhar ou perder na primeira jogada

    Status gameStatus; // pode conter enum

    // constante e  vetor
    const int arraySize = 10;
    int vetorJogadas[ arraySize] = {0};

    srand( time( 0 ) ); // gerador para rand();

    // cabe�alho
    cout << "\n\tLAN�ANDO OS DADOS" << endl;

    // loop para jogar 1000 vezes
    while( contador < arraySize)
    {
        int sumOfDice = rolaDados(); // sumOfDice recebe o valor retornado de rolaDados
        jogada++;

        // switch , deterina o estatus do jogo
        switch( sumOfDice )
        {
            case 7:
            case 11:
                venceuDePrieira++;
                vetorJogadas[  contador ] = 1; // vetor recebe 1
                cout << "Voc� venceu de primeira na jogada N� " << jogada << endl;
                gameStatus = WON;
                break;

            case 2:
            case 3:
            case 12:
                perdeuDePrieira++;
                vetorJogadas[ contador ] = 2;
                cout << "Voc� perdeu de primeira na jogada N� " << jogada << endl;
                gameStatus = LOST;
                break;

            default:
                gameStatus = CONTINUE;
                myPonts = sumOfDice;
                cout << "meus pontos = " << myPonts << endl;
                break;
        } // final switch

        while( (gameStatus == CONTINUE))
        {
            sumOfDice = rolaDados();
            jogada++;

            if(sumOfDice == myPonts)
            {
                venceu++;
                 vetorJogadas[ contador ] = 3;
                cout << "Voc� venceu na jogada N� " << jogada << endl;
                gameStatus =    WON;
            } // final if

            else if(sumOfDice == 7)
            {
                perdeu++;
                vetorJogadas[ contador ] = 4;
                cout << "Voc� perdeu na jogada N� " << jogada << endl;
                gameStatus = LOST;
            } // final else if

        } // final while

        if(gameStatus == WON)
            cout << "Voc� venceu!" << endl;
        else
            cout << "Voc� perdeu!" << endl;

        cout << "NOVAENTE" << endl;

        contador++; // soma 1 a while

    } // final while contador

    cout << "\nVoc� jogou " << jogada << " vezes." << endl;
    cout << "Voc� venceu de primeira " << venceuDePrieira << " vezes." << endl;
    cout << "Voc� perdeu de primeira " << perdeuDePrieira << " vezes." << endl;
    cout << "Voc� venceu " << venceu << " vezes." << endl;
    cout << "Voc� perdeu " << perdeu << " vezes." << endl;

    frequencia(vetorJogadas, arraySize);

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// rolaDados
int rolaDados()
{
    int dado1 = 1 + rand() % 6;
    int dado2 = 1 + rand() % 6;
    int soma = dado1 + dado2;

    // exibir resultado
    cout << "Voc� jogou: " << dado1 << " + " << dado2
            << " = " << soma << endl;

    return soma;

} // final rola dados

// frequencia
void frequencia(int vetor[], int arraySize)
{
    const int frequenciaSize = 5;
    int frequenciaDosDados[frequenciaSize] = {0};

    for(int contar = 0; contar < arraySize; contar++)
        // contar
        frequenciaDosDados[ vetor[ contar ] ]++;

    // cabe�alho
    cout << "Valores" << setw(15) << "Frequ�ncia" << endl;

    for(int i = 0; i < frequenciaSize; i++)
        cout << setw(2) << i << setw(15) << frequenciaDosDados[ i ] << endl;

    cout << endl; // nova linha
} // final frequ�ncia
