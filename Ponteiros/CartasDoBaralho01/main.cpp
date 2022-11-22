/*

*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include "DeckOfCards.h"

using namespace std;

int main()
{
    // configura ortógrafia local
    setlocale(LC_ALL, "portuguese");

    // CRIA O OBJETO
    DeckOfCards baralhoDeCartas;

    baralhoDeCartas.shuffle();
    baralhoDeCartas.deal();

    cout << endl; // pula linha

    system("pause"); // pausa o programa

    return 0;
}
