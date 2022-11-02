/*
    2. Se definirmos a mediana de uma sequência como “um número
        de modo que exatamente tantos elementos venham antes dele
        na sequência quantos venham depois”, corrija o programa em
        §4.6.3 para que ele sempre imprima uma mediana.
        Dica: A mediana não precisa ser um elemento da sequência.
*/
#include <algorithm>
#include <vector>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void imprimir(const vector<double> &);
void calculaMediana(vector<double> & );
void calculaMedia(vector<double> & );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vetor
    vector<double> vetor = {34, 39, 36, 35, 37, 40, 36, 38, 36, 38, 41, 25};

    cout << endl; // nova linha

    cout << "Vetor original:" << endl;
    imprimir( vetor ); // exibe o vetor original

    // vetor organizado
    cout << "Vetor organizado:" << endl;
    sort(vetor.begin(), vetor.end() ); // organiza o vetor
    imprimir( vetor ); // exibe vetor organizado

    calculaMediana( vetor ); // calcula a mediana
    calculaMedia( vetor ); // calcula a média

    system("pause"); // pausa do programa

    return 0;

} // final principal

// exibirValores
 void imprimir( const vector<double> &vetor)
{
        cout << "Vetor = {";
        for(int valor : vetor) // loop pelo vetor
        {
            cout << setw(5) << valor; // exibo os valores do vetor
        }
        cout << " };" << endl; // pula linha
} // final exibirValores

// calculaMediana
void calculaMediana(vector<double> &vetor )
{
    double mediana = 0; // variável

    // se o tamanho do vetor for par
    if(vetor.size() % 2 == 0)
        // mediana recebe a soma dos dois valores do meio do vetor
        mediana = ( vetor[ vetor.size() / 2] + vetor[ (vetor.size() / 2) - 1]) / 2;
    else
        mediana = vetor[ (vetor.size() / 2)];

    cout << "Mediana = " << mediana << endl;

} // final calculaMediana

// calculaMedia
void calculaMedia(vector<double> &vetor)
{
    // variável
    double media = 0.0;
    double total = 0.0;

    for(double valor : vetor)
    {
        total += valor;
    }

    media = total / vetor.size();

    cout << "Soma = " << total << endl;
    cout << "Média = " << setprecision(2) << fixed << media << endl;
} // final calculaMedia
