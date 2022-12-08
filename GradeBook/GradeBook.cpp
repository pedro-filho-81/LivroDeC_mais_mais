/*
    Defini��o das fun��es membro da classe GradeBook que
    utiliza um array para armazenar as notas dos alunos
*/
#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;

// construtor da classe
GradeBook::GradeBook(string name, const int gradesArray[][ tests ] )
{
    // chama a fun��o para configurar o nome do curso
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
    // vari�vel da classe recebe o nome do curso
    courseName = name;
} // final set course name

// fun��o getCourseName retorna o nome do curso
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

// realiza varias opera��es de dados
void GradeBook::processaGrade()
{
    // gera sa�da de array de notas
    outputGrades();

    // mostra o menor e maior valor
    cout << "\nO menor valor � " << getminimum()
            << "\nO maior valor � " << getmaximum() << endl;

    // chama outputBar() para imprimir gr�fico de barras
    outputBarChart();

} // finalfrprocessa

// localiza menor nota
int GradeBook::getminimum()
{
    // sup�e que a menor nota � 100
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
                // a vari�vel recebe o valor do elemento do array
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
    // vari�vel
    int maior = 0;

    // loop pelas linhas do array
    for(int student = 0; student < students; student++)
    {
        // loop pelas colunas da linha student
        for( int test = 0; test < tests; test++)
        {
            // verifica se existe no array um valor maior
            // que a vari�vel maior
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

// m�DIA
double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0;

    // loop para somar os valores do array
    for( int grade = 0; grade < grades; grade++ )
        // soma os valores do array
        total += setOfGrades[ grade ];

    // retorna a m�dia das notas
    return static_cast< double >( total ) / grades;
} // final getAverage

// gera sa�da de gr�fico de barras
void GradeBook::outputBarChart()
{
    cout << "\nGR�FICO DE BARRAS" << endl;

    // armazena a frequ�ncia de notas em cada intervalo de notas de 10 notas
    const int frequencySize = 11;
    int frequency[ frequencySize ] = {0};

    // para cada nota, incrementa a frequ�ncia apropriada
    for(int student = 0; student < students; student++)
        for( int test = 0; test < tests; test++ )
            ++frequency[ grades[ student ][ test ] / 10 ];

    // para cada frequ�ncia de notas, imprime uma barra no gr�fico
    for(int conta = 0; conta < frequencySize; conta++ )
    {
        // gera sa�da do r�tulo da barra "00-9"
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

// gera sa�da dos valores das notas
void GradeBook::outputGrades()
{
    cout << "As Notas S�o" << endl;
    cout << "              ";

    // loop para criar as colunas
    for(int test = 0; test < tests; test++)
        cout << "Test" << test + 1 << "  ";

    cout << "  m�dia" << endl;

    // cria linha/colunas do array grades
    for(int student = 0; student < students; student++)
    {
        cout << "Student" << setw(2) << student + 1;

        // gera sa�da das notas
        for(int test = 0; test < tests; test++ )
        {
            cout << setw(8) << grades[ student ][ test ];
        } // final for test

    // chama a fun��o getAverage para calcular a m�dia do aluno
    //   passa a linha das notas e o valor dos testes
    double average = getAverage( grades[student ], tests );
    cout << setw(9) << setprecision(2) << fixed << average << endl;

    } // final for student
} // final fun��o
