/*
    7.20 (Sistema de reservas de passagens �reas) Uma pequena companhia
    a�rea acabou de comprar um computador para seu novo sistema  automatizado
    de reservas. Voc� foi solicitado a programar o novo sistema.
    Voc� escrever� um programa para atribuir assentos em cada  v�o da companhia
    a�rea (capacidade: 10 assentos).  Seu programa deve exibir o seguinte menu de
    alternativas � Please type 1 for �First Class� e Please type 2 for �Economy�.
    Se a pessoa digitar 1, seu programa deve atribuir um assento na primeira classe
    (assentos 1-5). Se a pessoa digitar 2, seu programa deve atribuir um assento na
    classe econ�mica (assentos 6-10). Seu programa deve imprimir um bilhete de
    embarque indicando o n�mero  do assento da pessoa e se ela est� na primeira
    classe ou na classe econ�mica do avi�o.  Utilize um array unidimensional para
    representar o gr�fico de assentos do avi�o. Inicialize todos os elementos do array
    como 0 para indicar  que todos os assentos est�o vazios. � medida que cada assento
    � atribu�do, configure os elementos correspondentes do array como 1 para  indicar
    que o assento n�o est� mais dispon�vel.  Naturalmente, seu programa nunca deve
    atribuir um assento que j� foi atribu�do. Quando a primeira classe estiver lotada,
    seu programa  deve perguntar � pessoa se ela aceita ficar na classe econ�mica
    (e vice-versa). Se ela aceitar, fa�a a atribui��o apropriada de assento.
    Caso  contr�rio, imprima a mensagem �Next flight leaves in 3 hours.�
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 305). Edi��o do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 304). Edi��o do Kindle.
    Pedro, 03/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// prot�tipos
void primeiraClasse( int);
void classeEconomica(int);
void menu();
void exibir(int [], int); // exibe vetor

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constante
    const int arraySize = 10; // tamanho do vetor
    // vetor passagens a�reas
    int passagensAereas[ arraySize ] = {0};

    // vari�veis
    int opcao = 0; // para o menu
    int contador = 0;
    int contador2 = arraySize / 2;
    int outraPassagem = 0;

    while( contador < arraySize)
    {
        system("cls"); // lipa a tela
        menu(); // chama o menu

        // entrada de dados
        cout << "\tInforme a op��o desejada: ";
        cin >> opcao; // entrada do usu�rio

        if(opcao == 1 && contador < arraySize / 2)
        {
             // emite a passagem da primeira classe
            primeiraClasse( contador);
            // vetor recebe o n�mero da passagem
            passagensAereas[contador] += contador + 1;
            // incrementa o contador
            contador++;
        }
        else if(opcao == 2 && contador2 < arraySize)
        {
            // emite a passagem da classe econ�mica
            classeEconomica(contador2);
            // vetor recebe o n�mero da passagem
            passagensAereas[ contador2 ] = contador2 + 1;
            // incrementa em 1 o contador2
            contador2++;

        } // final else if contador 2

        if(opcao == 3)
        {
            // exibe o vetor passagens a�reas
            exibir(passagensAereas, arraySize);
            break; // sa� do sistema

        } // final op��o

        if(contador >= 5 && opcao == 1)
        {
            cout << "Primeira classe lotada," << endl;
        }// final if interno

        else if(contador2 >= arraySize && opcao == 2)
        {
            cout << "Classe econ�mica lotada." << endl;
        } // final else if

        cout << "Deseja emitir outra passagem (1 = sim / 0 = n�o)? ";
        cin >> outraPassagem;
        if( outraPassagem <= 0)
        {
            cout << "O pr�ximo avi�o sair� em 3 horas." << endl;
            exibir(passagensAereas,arraySize);
            break;
        } // final if outra passagem

    } // final enquanto

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// menu
void menu()
{
    cout << setw(35) << "PASSAGENS A�REAS" << endl;
    cout << "\t************************************" << endl;
    cout << "\t** Por favor digite a sua op��o:  **" << endl;
    cout << "\t**    1 => Primeira classe        **" << endl;
    cout << "\t**    2 => Classe econ�mica       **" << endl;
    cout << "\t**    3 => Sair                   **" << endl;
    cout << "\t************************************" << endl;

} // final menu

// fun��o exibir
void exibir(int vetor[], int arraySize)
{
    cout << "\nPoltronas vendiadas: ";

    for(int i = 0; i < arraySize; i++)
    {
        cout << setw(5) << vetor[ i ];
    }

    cout << endl; // nova linha

} // final exibir

// fun��o primeiraClasse
void primeiraClasse( int contador)
{
    cout << setw(20) << "Passagem A�rea:" << endl;
    cout << " Plotrona n� " << contador + 1
            << " Primeira Classe." << endl;
} // final primeiraClass

// fun��o primeiraClasse
void classeEconomica( int contador)
{
    cout << setw(20) << "Passagem A�rea:" << endl;
    cout << " Plotrona n� " << contador + 1
            << " Classe Econ�mica." << endl;
} // final primeiraClasse
