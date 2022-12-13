/*
    7.20 (Sistema de reservas de passagens áreas) Uma pequena companhia
    aérea acabou de comprar um computador para seu novo sistema  automatizado
    de reservas. Você foi solicitado a programar o novo sistema.
    Você escreverá um programa para atribuir assentos em cada  vôo da companhia
    aérea (capacidade: 10 assentos).  Seu programa deve exibir o seguinte menu de
    alternativas — Please type 1 for “First Class” e Please type 2 for “Economy”.
    Se a pessoa digitar 1, seu programa deve atribuir um assento na primeira classe
    (assentos 1-5). Se a pessoa digitar 2, seu programa deve atribuir um assento na
    classe econômica (assentos 6-10). Seu programa deve imprimir um bilhete de
    embarque indicando o número  do assento da pessoa e se ela está na primeira
    classe ou na classe econômica do avião.  Utilize um array unidimensional para
    representar o gráfico de assentos do avião. Inicialize todos os elementos do array
    como 0 para indicar  que todos os assentos estão vazios. À medida que cada assento
    é atribuído, configure os elementos correspondentes do array como 1 para  indicar
    que o assento não está mais disponível.  Naturalmente, seu programa nunca deve
    atribuir um assento que já foi atribuído. Quando a primeira classe estiver lotada,
    seu programa  deve perguntar à pessoa se ela aceita ficar na classe econômica
    (e vice-versa). Se ela aceitar, faça a atribuição apropriada de assento.
    Caso  contrário, imprima a mensagem “Next flight leaves in 3 hours.”
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 305). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 304). Edição do Kindle.
    Pedro, 03/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// protótipos
void primeiraClasse( int);
void classeEconomica(int);
void menu();
void exibir(int [], int); // exibe vetor

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constante
    const int arraySize = 10; // tamanho do vetor
    // vetor passagens aéreas
    int passagensAereas[ arraySize ] = {0};

    // variáveis
    int opcao = 0; // para o menu
    int contador = 0;
    int contador2 = arraySize / 2;
    int outraPassagem = 0;

    while( contador < arraySize)
    {
        system("cls"); // lipa a tela
        menu(); // chama o menu

        // entrada de dados
        cout << "\tInforme a opção desejada: ";
        cin >> opcao; // entrada do usuário

        if(opcao == 1 && contador < arraySize / 2)
        {
             // emite a passagem da primeira classe
            primeiraClasse( contador);
            // vetor recebe o número da passagem
            passagensAereas[contador] += contador + 1;
            // incrementa o contador
            contador++;
        }
        else if(opcao == 2 && contador2 < arraySize)
        {
            // emite a passagem da classe econômica
            classeEconomica(contador2);
            // vetor recebe o número da passagem
            passagensAereas[ contador2 ] = contador2 + 1;
            // incrementa em 1 o contador2
            contador2++;

        } // final else if contador 2

        if(opcao == 3)
        {
            // exibe o vetor passagens aéreas
            exibir(passagensAereas, arraySize);
            break; // saí do sistema

        } // final opção

        if(contador >= 5 && opcao == 1)
        {
            cout << "Primeira classe lotada," << endl;
        }// final if interno

        else if(contador2 >= arraySize && opcao == 2)
        {
            cout << "Classe econômica lotada." << endl;
        } // final else if

        cout << "Deseja emitir outra passagem (1 = sim / 0 = não)? ";
        cin >> outraPassagem;
        if( outraPassagem <= 0)
        {
            cout << "O próximo avião sairá em 3 horas." << endl;
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
    cout << setw(35) << "PASSAGENS AÉREAS" << endl;
    cout << "\t************************************" << endl;
    cout << "\t** Por favor digite a sua opção:  **" << endl;
    cout << "\t**    1 => Primeira classe        **" << endl;
    cout << "\t**    2 => Classe econômica       **" << endl;
    cout << "\t**    3 => Sair                   **" << endl;
    cout << "\t************************************" << endl;

} // final menu

// função exibir
void exibir(int vetor[], int arraySize)
{
    cout << "\nPoltronas vendiadas: ";

    for(int i = 0; i < arraySize; i++)
    {
        cout << setw(5) << vetor[ i ];
    }

    cout << endl; // nova linha

} // final exibir

// função primeiraClasse
void primeiraClasse( int contador)
{
    cout << setw(20) << "Passagem Aérea:" << endl;
    cout << " Plotrona nº " << contador + 1
            << " Primeira Classe." << endl;
} // final primeiraClass

// função primeiraClasse
void classeEconomica( int contador)
{
    cout << setw(20) << "Passagem Aérea:" << endl;
    cout << " Plotrona nº " << contador + 1
            << " Classe Econômica." << endl;
} // final primeiraClasse
