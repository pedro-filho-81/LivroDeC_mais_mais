/*
    Definição de funções membro para a classe DeckOfCards que simula
    o ebaralhamento e adistribuição de cartas do baralho
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include "DeckOfCards.h"

using namespace std;

// construtor da classe, inicializa o baralho (deck)
DeckOfCards::DeckOfCards()
{
    // loop pelas linhas da matriz
    for(int linha = 0; linha < 4; linha++)
    {
        // loop palas colunas da matriz
        for( int coluna = 0; coluna < 13; coluna++)
        {
            // matriz baralho recebe zero
            deck[ linha ][ coluna ] = 0;
        } // final for coluna
    } // final for linha

    srand( time( 0 ) ); // semeia o gerador de números aleatórios

} // final construtor

// embalha as cartas
void DeckOfCards::shuffle()
{
    // variáveis
    int linha;
    int coluna;

    for(int cartas = 1; cartas <= 52; cartas++)
    {
        // enquanto baralho diferente de zero faça
        while(deck[linha][coluna] != 0)
        {
            linha = rand() % 4; // seleciona a linha aleatoriamente
            coluna = rand() % 13; // seleciona a coluna aleatoriamente
        } // final while

        // baralho recebe as cartas
        deck[ linha ][ coluna ] = cartas;

    } // final for cartas
} // final shuffle (ebaralhamento)

// distribui as cartas do baralho
void DeckOfCards::deal()
{
    // inicializa array naipe(suit)
    static const char *suit[ 4 ] = { "Copas", "Ouros", "Paus", "Espadas" };

    // inicializa array cartas
    static const char *face[ 13 ] =
    {
        "Ás", "2", "3", "4", "5", "6", "7", "8", "9", "10",
        "Valete", "Dama", "Rei"
    }; // final vetor face

    // loop para cada uma das 52 cartas
    for(int cartas = 0; cartas < 52; cartas++)
    {
        // loop pelas linhas
        for( int linhas = 0; linhas < 4; linhas++)
        {
            for(int colunas = 0; colunas < 13; colunas++)
            {
                // se o slot contiver a carta atual exiba
                if(deck[ linhas ] [ colunas ]  == cartas )
                {
                    cout << setw(5) << right << face[colunas]
                            << " de " << setw(8) << left << suit[ linhas ]
                            << (cartas % 2 == 0 ? '\n' : '\t' );
                } // final if
            } // final for colunas
        } // final for linhas
    } // final for cartas
} // final distribuição
