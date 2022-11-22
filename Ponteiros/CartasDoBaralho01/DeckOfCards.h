/*
    Definição da classe DeckOfCards.h
    representa u baralho de 52 cartas
*/

// definição da classe
class DeckOfCards
{
public:
    DeckOfCards(); // construtor da classe
    void shuffle(); // ebaralha as cartas
    void deal(); // distribui as cartas do baralho
private:
    int deck[ 4 ][ 13 ]; // representa o baralho de cartas
};
