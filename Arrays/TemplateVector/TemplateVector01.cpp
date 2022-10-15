/*
    demonstra o template da classe vector da biblioteca cstdlib
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;

// protótipos
void adicionarValores(vector< int > &); // adiciona valores ao vetor
void exibirValores(const vector< int > &); // mostra os elementos do vetor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // cria os vetores
    vector< int > inteiro1( 7 ); // vetor inteiro1 para 7 eleentos
    vector< int > inteiro2( 10 ); // vetor inteiro2 para 10 elementos

    // exibe o tamanho do vetor ( nomeDoVetor.size() )
    cout << "vector< int > inteiro1( 7 );" << endl;
    cout << "O vetor inteiro1 armazena "
            << inteiro1.size() << "  elementos\n"
            << "\nvetor depois de inicializado" << endl;

    exibirValores(inteiro1);

    // exibe o tamanho do vetor ( nomeDoVetor.size() )
    cout << "\n\nvector< int > inteiro2( 10 );" << endl;
    cout << "O vetor inteiro2 armazena "
            << inteiro2.size() << "  elementos" << endl;
    exibirValores(inteiro2);

    // adiciona valores aos vetores inteiro1 e inteiro2
    cout << "\n\nDigite 17 números inteiros:" << endl;
    adicionarValores(inteiro1);
    adicionarValores(inteiro2);

    cout << "\nOs vetores depois dos valores adicionados:"
            << "\ninteiro1:\n";
    exibirValores(inteiro1);

    cout << "\ninteiro2:\n";
    exibirValores(inteiro2);

    // coparando vetores
    if(inteiro1 != inteiro2)
        cout << "\n\nvetor inteiro1 é diferente de vetor inteiro2" << endl;

    // cria vetor inteiro3 e atribui a ele os eleentos do vetor inteiro1
    vector< int > inteiro3( inteiro1 );

    // exibe o tamanho do vetor ( nomeDoVetor.size() )
    cout << "\nvector< int > inteiro3( inteiro1 );" << endl;
    cout << "\nO vetor inteiro3 armazena "
            << inteiro3.size() << "  elementos" << endl;
    exibirValores( inteiro3 );

    // atribuindo os valores do vetor inteiro2 ao vetor inteiro1
    cout << "\nvetor inteiro1 recebe os elementos dos vetor inteiro 2." << endl;
    cout << "inteiro1 = inteiro2;" << endl;
    inteiro1 = inteiro2;

    // exibir os valores do vetor inteiro1
    cout << "vetor inteiro1 após receber os valores do vetor inteiro2" << endl;
    exibirValores(inteiro1);

    cout << "\nvetor inteiro2" << endl;
    exibirValores(inteiro2);

    // verifica se os elementos do vetor inteiro1 é igual aos do inteiro2
    if(inteiro1 == inteiro2)
        cout << "\n os valores do vetor inteiro1 são iguais aos do vetor inteiro2." << endl;

    // verifica um elemento numa deterinada posição
    cout << "\nverifica o valor no vetor ( inteiro1[ 5 ] ) na posição 5 = " << inteiro1[ 5 ] << endl;

    // atribuindo um valor no vetor inteiro1 posição 5
    inteiro1[ 5 ] = 1000;
    cout << "\nAtribuindo um elemento no vetor inteiro1 na posição 5" << endl;
    cout << "inteiro1[ 5 ] = 1000" << endl;
    exibirValores(inteiro1);

    // tentativa de atribuir um elemento fora do intervalo
    cout << "\nTentativa de adicionar um valor fora do intervalo estabelecido" << endl;
    cout << "inteiro1.at( 25 ) = 12345; gera erro em tempo de execução." << endl;

    inteiro1.at( 25 ) = 12345;
    exibirValores(inteiro1);

    cout << endl;

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função exibirValores
void exibirValores(const vector< int > &vetor )
{
    size_t i; // variável de controle

    for( i = 0; i < vetor.size(); i++)
    {
        cout << setw(12) << vetor[ i ];

        if( (i + 1) % 4 == 0 )
            cout << endl;

    } // final for vetor

} // final exibirValores

// função adicionarValores
void adicionarValores(vector< int > &vetor )
{
    for(size_t i = 0; i < vetor.size(); i++)
        cin >> vetor[ i ]; // valores atribuidos via teclado na execução
} // final adicionarValores
