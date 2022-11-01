/*
    programa para exibir dois valores inteiro e um loop while
    1. Escreva um programa que consista em um loop while que
    (a cada volta do loop) leia dois inteiros e os imprima.
    Saia do programa quando terminar '|' é introduzido.
    2. Altere o programa para escrever o menor valor é: seguido pelo
    menor dos números e o maior valor é: seguido pelo maior valor.
    3. Aumente o programa para que ele escreva na linha os números
    são iguais (somente) se forem iguais.
    // 4. Altere o programa para que ele use doubles em vez de ints.
    // Pedro, 20/10/2022
    // 5. Altere o programa para que ele escreva os números quase iguais
    // depois de escrever qual é o maior e o menor se os dois números
    // diferirem por menos de 1,0/100.
    // Pedro, 23/10/2022
    // 6. Agora mude o corpo do loop para que ele leia apenas um double de cada vez.
    // Defina duas variáveis ​​para acompanhar qual é o menor e qual é o maior valor que
    // você viu até agora. Cada vez que passar pelo loop, escreva o valor inserido.
    // Se for o menor até agora, escreva o menor até agora após o número.
     // Se for o maior até agora, escreva o maior até agora após o número.
    // Pedro, 23/10/2022
    // 7. Adicione uma unidade a cada entrada dupla; ou seja, insira valores
    // como 10 cm, 2,5 pol, 5 pés ou 3,33 m. Aceite as quatro unidades: cm, m, pol, ft.
    // Considere os fatores de conversão 1m == 100cm, 1in == 2,54cm, 1ft == 12in.
    // Leia o indicador de unidade em uma string.
    // Você pode considerar 12 m (com espaço entre o número e a unidade)
    // equivalente a 12 m (sem espaço).
    // Pedro, 31/10/2022
    // 8. Rejeite valores sem unidades ou com representações “ilegais” de unidades,
    // como y, jarda, metro, km e galões.
    // 9. Acompanhe a soma dos valores inseridos (assim como o menor e o maior)
    // e o número de valores inseridos. Quando o loop terminar, imprima o menor,
    // o maior, o número de valores e a soma dos valores.
    // Observe que, para manter a soma, você deve decidir qual unidade usar para essa soma;
    // usar medidores.
    10. Mantenha todos os valores inseridos (convertidos em metros) em um vetor.
        No final, escreva esses valores.
    11. Antes de escrever os valores do vetor, ordene-os (isso os fará sair em ordem crescente).
*/
#include <algorithm>
#include <vector>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void entradaDeDados(vector<double> & ); // adiciona valores ao vetor via teclado
void exibirValores( const vector<double> & ); // exibe os valores do vetor
double menorValor( vector<double> & ); // encontra o menor valor do vetor
double maiorValor( vector<double> & ); // encontra o maior valor do vetor
void somaValores( vector<double> & ); // soma os valores do vetor
void valoresIguais( vector<double> & ); // com para se existe 2 valores iguais no vetor
void converteValores( vector<double> &, double valor, string tipo ); // converte valores para m, cm, pol, pés
void entradaDeValores(vector<double> & ); // entra com o valor e o tipo

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria um vetor
    vector<double> valores;

    // variáveis
    double maiorVl = 0.0;
    double menorVl = 0.0;

    // RECEBE Um VALOR E VERIFICA SE O NÚmERO DIGITADO
    // É O maior OU o menor VALOR DIGITADO ATÉ O PRESENTE mOmENTO
    // entradaDeDados(valores);
    entradaDeValores( valores );

    sort(valores.begin(), valores.end() ); // organiza vetor
    cout << "\n\tRESUMO";
    exibirValores(valores );
    cout << "\tMaior valor = " << maiorValor( valores ) << endl;
    cout << "\tMenor valor = " << menorValor( valores ) << endl;
    somaValores( valores );
    valoresIguais( valores );

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// entradaDeDados
void entradaDeDados(vector<double> &vetor)
{
    // variáveis
    double numero = 0;

    cout << "Digite números reais: ";
    cin >> numero;
    vetor.push_back( numero );
    double maiorVl1 = maiorValor( vetor );
    double menorVl1 = menorValor( vetor );

    // enquanto número igual a um valor faça
    while( cin >> numero )
    {
        // push_back adiciona elementos no final do vetor
        vetor.push_back( numero );

        // VERIFICA SE O VALOR DIGITADO É O maior OU O menor
        // valor QUE EXISTE NO VETOR ATÉ O PRESENTE momento
        double maiorVl2 = maiorValor( vetor );
        double menorVl2 = menorValor( vetor );

        if(maiorVl1 > maiorVl2)
            cout << "O maior valor até agora é " << maiorVl1 << endl;
        else
            cout << "O maior valor até agora é " << maiorVl2 << endl;

        if(menorVl1 < menorVl2)
            cout << "O menor valor até agora é " << menorVl1 << endl;
        else
            cout << "O menor valor até agora é " << menorVl2 << endl;

    } // final while

} // final entradaDeDados

// exibirValores
void exibirValores( const vector<double> &vetor)
{
    cout << "\n\tvalores em metros = \n{";

    // loop para mostra os elementos do vetor
    for( double valor : vetor)
        // exibir valores
        cout << setw(8) << valor;

    cout << "   };" << endl;
} // final exibirValores

// menorValor
double menorValor(vector<double> & vetor)
{
    // variável menor recebe o valor do vetor zero
    double menor = vetor[ 0 ];
    // loop pelo vetor
    for(double valor : vetor)
        // verifica se tem um valor no vetor menor que a variável menor
        if(valor < menor) // se verdade
            // variável recebe o valor
            menor = valor;

    // após exibe o menor valor
    // cout << "O menor valor até agora é " << menor << endl;
    return menor;

} // final menorValor

// maiorValor
double maiorValor(vector<double> &vetor)
{
    double maior = vetor[ 0 ];
    for(double valor: vetor)
        if(valor > maior)
            maior = valor;

    // cout << "O maior valor até agora é " << maior << endl;
    return maior;

}  // final maior valor

// valoresIguais
void valoresIguais(vector<double> &vetor)
{
    double soma = 0.0;

    // loop para o primeiro vetor
    for(int i = 0; i < vetor.size(); i++)
    { // loop para o segundo vetor
        for( int j = i + 1; j < vetor.size(); j++)
        {
            // verifica se o vetor[ i ] é igual  ao vetor[ j ]
            if(vetor[ i ] == vetor[ j ] ) // se verdade
            {
                cout << "\tvetor " << vetor[ i ] << " posição " << j + 1 << endl;
                soma++;
            } // final if

        } // final for j
    } // final for i

    if( soma > 0)
        cout << "\tVetor valores possui " << soma << " valor(es) igual(is)." << endl;
    else
        cout << "\tVetor não possui valores iguais." << endl;
} // final valoresIguais

// converteValores
void converteValores( vector<double> &vetor, double valor, string tipo)
{
    // variáveis
    double m = 0.0;
    double cm = 0.0;
    double mm = 0.0;
    double pol = 0.0;
    double pe = 0.0;

    if( tipo == "m")
    {
        vetor.push_back( valor );
            cm = valor * 100;
            mm = valor * 1000;
            pol = valor * 39.37;
            pe = valor * 3.28084;
    } // final
    else if ( tipo == "cm")
    {
            m = valor * 0.01;
            vetor.push_back(m);
            mm = valor * 10;
            pol = valor * 0.393701;
            pe = valor * 0.0328084;
     } // final
     else if(tipo == "mm")
    {
            m = valor * 0.001;
            vetor.push_back(m);
            cm = valor * 0.1;
            pol = valor * 0.0393701;
            pe = valor * 0.00328084;
     } // final
    else if( tipo == "pol")
    {
            m = valor * 0.0254;
            vetor.push_back(m);
            cm = valor * 2.54;
            mm = valor * 25.4;
            pe = valor * 0.0833333;
     } // final
     else if( tipo == "pe")
    {
            m = valor * 0.3048;
            vetor.push_back(m);
            cm = valor * 30.48;
            mm = valor * 304.8;
            pol = valor * 12;
    } // final
    else
    {
            cout << "\tTipo indevido. Informe o tipo (m, cm, mm, pol ou pes)." << endl;
     } // final

    // exibir resultado
    cout << "\n\tCONVERSÃO DE VALORES:" << endl;
    cout << "\t" << valor << tipo << " equivale a:" << endl;
    cout << "\tmetros = " << m << "m"
            << "\n\tCentimetros = " << cm << "cm"
            << "\n\tmilimetros = " << mm << "mm"
            << "\n\tPolegadas = " << pol << "pol"
            << "\n\tPes = " << pe << "pe" << endl;

} // final converteValores

// entradaDeValores
void entradaDeValores(vector<double> &vetor)
{
    // variáveis
    string tipo = " ";
    double valor =0.0;
    int contador = 0;

    // entrada de dados
    cout << "Informe o valor para a conversão: ";

    while(cin >> valor)
    {
        cout << "Informe o tipo a ser convertido \nExp.:(m, cm, mm, pol ou pé): ";
        cin >> tipo;

        if(tipo == "m" || tipo == "cm" || tipo == "mm" || tipo == "pol" || tipo == "pe")
        {
            converteValores(vetor, valor, tipo);
            contador++;

        } // final if
        else
            cout << "TIPO INVALIDO." << endl;

        // entrada de dados
        cout << "\nInforme o valor para a conversão: ";

    } // final while

    cout << "Foram cadastrados " << contador << " valores.";

} // final entradaDeValores

// somaValores
void somaValores(vector<double> &vetor)
{
    // variável
    double total = 0.0;

    for( int i = 0; i < vetor.size(); i++ )
        total += vetor[ i ];

    cout << "\tSoma = " << total << endl;

} // final somaValores
