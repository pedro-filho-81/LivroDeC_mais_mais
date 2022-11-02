/*
3. Leia uma sequência de valores duplos em um vetor.
    Pense em cada valor como a distância entre duas cidades ao longo de
    uma determinada rota. Calcule e imprima a distância total (a soma de todas
    as distâncias). Encontre e imprima a menor e a maior distância entre duas
    cidades vizinhas. Encontre e imprima a distância média entre duas cidades vizinhas.
    Pedro, 02/11/2022
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
void menorValor(vector<double> & );
void maiorValor(vector<double> &);

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // vetor com "distâncias entre cidades"
    vector<double> vetor = {34.25, 39.35, 36.78, 35.12, 37.41, 40.47, 36.6, 38.07, 36, 38, 41, 25};

    cout << endl; // nova linha

    cout << "Vetor original:" << endl;
    imprimir( vetor ); // exibe o vetor original

    // vetor organizado
    cout << "Vetor organizado:" << endl;
    sort(vetor.begin(), vetor.end() ); // organiza o vetor
    imprimir( vetor ); // exibe vetor organizado

    cout << "\nDISTÂNCIA ENTRE CIDADES" << endl;
    calculaMedia( vetor ); // calcula a média
    calculaMediana( vetor ); // calcula a mediana
    menorValor( vetor ); // exibe o menor valor
    maiorValor( vetor ); // exibe o maior valor

    system("pause"); // pausa do programa

    return 0;

} // final principal

// exibirValores
 void imprimir( const vector<double> &vetor)
{
        cout << "Vetor = {";
        for(double valor : vetor) // loop pelo vetor
        {
            cout << setw(8) << setprecision(2) << fixed << valor; // exibo os valores do vetor
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
        total += valor; // soma os valores do vetor
    }
    // calcula a média do vetor
    media = total / vetor.size();

    // exibe resultado
    cout << "Soma = " << total << endl;
    cout << "Média = " << setprecision(2) << fixed << media << endl;
} // final calculaMedia

// menorValor
void menorValor( vector<double> &vetor )
{
    double menor = vetor[ 0 ];

    // loop pelo vetor
    for( double valor : vetor)
        if(valor < menor)
            menor = valor;

    // exibe
    cout << "A menor distância é " << menor << endl;

}// final menorValor

// maiorValor
void maiorValor( vector<double> &vetor )
{
    // variável
    double maior = vetor[ 0 ];
    for( double valor : vetor)
        if(valor > maior)
            maior = valor;

    // exibe
    cout << "A maior distância é " << maior << endl;

} // final maiorValor
