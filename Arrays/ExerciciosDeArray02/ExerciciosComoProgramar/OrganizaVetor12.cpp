/*
    7.12 A classificação por borbulhamento descrita no Exercício 7.11
    é ineficiente para arrays grandes. Faça as seguintes modificações simples  para
    aprimorar o desempenho da classificação por borbulhamento:
    a) Depois da primeira passagem, garante-se que o maior número está no elemento
    de número mais alto do array; após a segunda passagem,  os dois números mais altos
    estão ‘no lugar’; e assim por diante. Em vez de fazer nove comparações em cada passagem,
    modifique a  classificação por borbulhamento para fazer oito comparações na segunda
    passagem, sete na terceira passagem e assim por diante.
    b) Os dados no array já podem estar na ordem adequada ou ordem quase adequada,
    então por que fazer nove passagens se menos seriam  suficientes?
    Modifique a classificação para verificar no fim de cada passagem se alguma troca foi feita.
    Se nenhuma troca tiver sido  feita, então os dados já devem estar na ordem apropriada;
    portanto, o programa deve terminar. Se trocas foram feitas, então pelo menos
    mais uma passagem é necessária.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edição do Kindle.
    Pedro, 11/12/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// protótipos
void adicionar(int [], int );
void organizar(int [], int );
void exibir(const int [], int );
int pesquisaLinear(int [], int, int );

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // constante
    const int tamanho = 15;

    // vetor
    int vetor[ tamanho ];

    // chama funções
    adicionar(vetor, tamanho );
    exibir(vetor, tamanho );

    cout << endl;
    organizar(vetor, tamanho);
    exibir(vetor, tamanho);

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// adicionar
void adicionar(int vetor[], int tamanho)
{
    // variáveis
    int resposta;
    int alea;
    srand(time( 0 ) ); // gera semente para rand()
    // loop para adicionar os valores
    for(int i = 0; i < tamanho; i++)
    {
        // gera valor aleatório
        alea = 1 + rand() % 20;

        // pesquisa o valor de alea para ver se tem repetido no vetor
        // se não encontrado reposta recebe o valor -1
        resposta = pesquisaLinear(vetor, tamanho, alea);

        // enquanto resposta diferente de -1 faça
        while( resposta > -1 )
        {
            // exibe o valor duplicado
            cout << "Valor repetido " << alea << endl;

            // gera um novo valor aleatório
            alea = 1 + rand() % 20;
           // que é verificado na função pesquisa linear
            // se o valor existe vo vetor, retorna -1 se não encontrado

            resposta = pesquisaLinear(vetor, tamanho, alea);
            // se a resposta for diferente de -1 repete o while
        } // final while

        // verifica se a resposta for igual a -1
        if(  resposta == -1)
        {
            // o vetor recebe o valor de alea
            vetor[ i ] = alea;
            // exibe o valor encontrado e não repetido
            cout << "Valor aleatório = " << alea << endl;

        } // final if

    } // final for
} // final função

// organizar
void organizar(int vetor1[], int tamanho1)
{
    int temp = 0;

    for(int passos = 0; passos < tamanho1 - 1; passos++)
    {
        bool valorTrocado = false;
        for(int ordem = 0; ordem < tamanho1 - passos - 1; ordem++)
        {
            // coloca em ordem crescente
            if(vetor1[ ordem ] > vetor1[ ordem + 1 ] )
            {
                temp = vetor1[ ordem ];
                vetor1[ ordem ] = vetor1[ ordem + 1];
                vetor1[ ordem + 1] = temp;
                valorTrocado = true;
            } // final if
        } // final for
        if( !valorTrocado )
            break;
    } // final for
} // final vetor1

// pesquisaLinear
int pesquisaLinear(int vetor[], int tamanho, int chave)
{
    // loop para pesquisar valor no vetor
    for(int i = 0; i < tamanho; i++ )
    {
        // verifica se o valor da chave é igual ao valor do vetor
        if( chave == vetor[ i ] ) {
            // retorna o valor da chave se localizado
            return chave;
        } // final if

    } // final for

    // retorna o valor -1 se chave não encontrado
    return -1;
} // final pesquisaLinear

// exibir
void exibir(const int vetor[], int tamanho)
{
    cout << "\nvetor[] = {";
    for(int valor = 0; valor < tamanho; valor++)
    {
        cout << setw(5) << vetor[ valor ];
    } // final for
    cout << "   };" << endl;
} // final exibir
