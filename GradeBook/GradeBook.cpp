/*
    Definição das funções membro da classe GradeBook que
    utiliza um array para armazenar as notas dos alunos
*/
#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;

// construtor da classe
GradeBook::GradeBook(string name, const int gradesArray[][ tests ] )
{
    // chama a função para configurar o nome do curso
    setCourseName( name );

    // loop para as linhas
    for(int student = 0; student < students; student++)
    {
        // loop para copiar as notas de gradesArray para grades
        for(int test =  0; test < tests; test++ )

            // array grades recebe os elementos do array gradesArray
            grades[ student ][ test ] = gradesArray[ student ][ test ];

    } // final for student

} // final construtor

// configura o nome do curso
void GradeBook::setCourseName( string name )
{
    // variável da classe recebe o nome do curso
    courseName = name;
} // final set course name

// função getCourseName retorna o nome do curso
string GradeBook::getCourseName()
{
    return courseName;
} // final getCourseName

// function displaymessage exibe mensagem de boas vindas
void GradeBook::displaymessage()
{
    // exibe a mendagem de boas-vindas
    cout << "Bem vindo ao curso:\n " << getCourseName() << "!" << endl;
} // final displaymessage

// realiza varias operações de dados
void GradeBook::processaGrade()
{
    // gera saída de array de notas
    outputGrades();

    // mostra o menor e maior valor
    cout << "\nO menor valor é " << getminimum()
            << "\nO maior valor é " << getmaximum() << endl;

    // chama outputBar() para imprimir gráfico de barras
    outputBarChart();

} // finalfrprocessa

// localiza menor nota
int GradeBook::getminimum()
{
    // supõe que a menor nota é 100
    int menor = 100;

    // faz um loop pelas linhas do array de notas
    for(int student = 0; student < students; student++ )
    {
        // faz u loop pelas colunas da linha student do array de notas
        for( int test = 0; test < tests; test++)
        {
            // se no array tiver um elemento menor que menor
            if(grades[student][test] < menor)
            {
                // a variável recebe o valor do elemento do array
                menor = grades[student][test];
            } // final if
        } // final for test
    } // final for student

    // retorne o valor menor
    return menor;

} // final minimum

// maior valor
int GradeBook::getmaximum()
{
    // variável
    int maior = 0;

    // loop pelas linhas do array
    for(int student = 0; student < students; student++)
    {
        // loop pelas colunas da linha student
        for( int test = 0; test < tests; test++)
        {
            // verifica se existe no array um valor maior
            // que a variável maior
            if(grades[student][test] > maior)
            {
                // maior recebe o elemento do array grades
                maior = grades[student][test];
            } // final if
        } // final for test
    } // final for student

    // retorna o maior valor
    return maior;

} // final maior valor

// mÉDIA
double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0;

    // loop para somar os valores do array
    for( int grade = 0; grade < grades; grade++ )
        // soma os valores do array
        total += setOfGrades[ grade ];

    // retorna a média das notas
    return static_cast< double >( total ) / grades;
} // final getAverage

// gera saída de gráfico de barras
void GradeBook::outputBarChart()
{
    cout << "\nGRÁFICO DE BARRAS" << endl;

    // armazena a frequência de notas em cada intervalo de notas de 10 notas
    const int frequencySize = 11;
    int frequency[ frequencySize ] = {0};

    // para cada nota, incrementa a frequência apropriada
    for(int student = 0; student < students; student++)
        for( int test = 0; test < tests; test++ )
            ++frequency[ grades[ student ][ test ] / 10 ];

    // para cada frequência de notas, imprime uma barra no gráfico
    for(int conta = 0; conta < frequencySize; conta++ )
    {
        // gera saída do rótulo da barra "00-9"
        if(conta == 0)
            cout << "  0-9:  ";
        else if( conta == 10)
            cout << "  100:  ";
        else
            cout << conta * 10 << "-" << (conta * 10)  + 9 << ":  ";

        // imprime as barras de asteriscos
        for(int barras = 0; barras < frequency[ conta ]; barras++)
            cout << '*';

        cout << endl; // nova linha

    } // final for externo
} // final outputBar

// gera saída dos valores das notas
void GradeBook::outputGrades()
{
    cout << "As Notas São" << endl;
    cout << "              ";

    // loop para criar as colunas
    for(int test = 0; test < tests; test++)
        cout << "Test" << test + 1 << "  ";

    cout << "  média" << endl;

    // cria linha/colunas do array grades
    for(int student = 0; student < students; student++)
    {
        cout << "Student" << setw(2) << student + 1;

        // gera saída das notas
        for(int test = 0; test < tests; test++ )
        {
            cout << setw(8) << grades[ student ][ test ];
        } // final for test

    // chama a função getAverage para calcular a média do aluno
    //   passa a linha das notas e o valor dos testes
    double average = getAverage( grades[student ], tests );
    cout << setw(9) << setprecision(2) << fixed << average << endl;

    } // final for student
} // final função
