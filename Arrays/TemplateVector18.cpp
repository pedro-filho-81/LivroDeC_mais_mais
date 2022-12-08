/*
    usando template para array Vector da biblioteca C++.
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <vector> // biblioteca

using namespace std;

// protótipos
void exibirValores(const vector<int> & ); // exibe os valores do vetor
void adicionaValores(vector<int> & ); // adiciona valores ao vetor

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria os vetores
    vector<int> integer1(7); // vetor para 7 elementos
    vector<int> integer2(10); // vetor para 10 elementos

    // imprime o tamanho do vetor
    cout << "vector<int> integer1(7);" << endl;
    cout << "O tamanho do vetor integer1 é " << integer1.size()
            << "\nO conteúdo do vetor integer1 é:" << endl;

    // chama a função
    exibirValores( integer1 );

    // exibir o tamanho do vetor
    cout << "\nvector<int> integer2(10);" << endl;
    cout << "O tamanho do vetor integer2 é " << integer2.size()
            << "\nO conteúdo do vetor integer2 è:" << endl;

    // chama a função
    exibirValores( integer2 );

    cout << "Digite 17 valores inteiros: ";
    adicionaValores( integer1 );
    adicionaValores( integer2 );

    cout << "\nVetor integer1 após adição de valores: " << endl;
    // chama função
    exibirValores( integer1 );

    cout << "\nVetor integer2 após adição de valores:" << endl;
    exibirValores( integer2 );

    // verifica se os vetores integer1 e integer2 são diferentes
    cout << "\nPergunta: integer1 != integer2?" << endl;

    if(integer1 != integer2)
        cout << "Sim, integer1 e integer2 são diferentes." << endl;

    // cria intinger3 utilizando intiger1 como inicializado
    // imprime depois tamanho e conteúdo
    vector<int> integer3( integer1 ); //

    cout << "\nvector<int> integer3( integer1 );" << endl;
    cout << "O tamanho do vetor integer3 é " << integer3.size();
    cout << "\ninteger3 depois de inicializado:" << endl;
    // chama a função
    exibirValores( integer3 );

    // atribuindo integer2 para integer1 usando o sinal de atribuição ( = )
    cout << "\nAtribuindo integer2 para integer1 usando o sinal de atribuição ( = )" << endl;
    cout << "integer1 = integer2;"
            << "\ninteger1 depois de receber os valores de integer2:" << endl;

    integer1 = integer2; // integer1 recebe os elementos de integer2
    // chama a função
    exibirValores( integer1 );

    // exibir
    cout << "\nVerifica se integer1 é igual a integer2 usando o sinal de igual ( == ):" << endl;
    // verifica se integer1 é igual a integer2
    if( integer1 == integer2) // se verdade
        // exibir
        cout << "Sim, integer1 é igual a intinger2" << endl;

    // trocando valores em um vetor
    cout << "\nTrocando o elemento integer1[ 5 ] pelo valor 1000: " << endl;
    integer1[ 5 ] = 1000;
    cout << "integer1[ 5 ] = 1000;" << endl;
    cout << "vetor integer1 após a troca do elemento:" << endl;
    // chama a função
    exibirValores( integer1 );

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função adicionaValores
void adicionaValores(vector<int> &vetor)
{
    for(size_t i = 0; i < vetor.size(); i++)
        cin >> vetor[ i ];

} // final adicionaValores

// exibir valores
void exibirValores( const vector< int > &vetor )
{
    size_t i;

    for( i = 0; i < vetor.size(); i++)
    {
        cout << setw(12) << vetor[ i ];

        if( ( i + 1 ) % 4 == 0)
            cout << endl;
    } // final for

    if(i % 4 != 0 )
        cout << endl;

} // final função
