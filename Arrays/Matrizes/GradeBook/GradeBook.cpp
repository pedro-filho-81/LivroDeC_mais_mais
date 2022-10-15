/*
    Definição das funções-membro da classe GradeBook
    que utiliza array bidimencional para arazenaras notas
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "GradeBook.h"

using namespace std;

// construtor
GradeBook::GradeBook(string courseName, int gradesArray[][testes])
{
    setCourseName(courseName);

    for(int linha = 0; linha < estudantes; linha++)
    {
        for(int coluna = 0; coluna < testes; coluna++)
        {
            //
            grades[ linha ][ coluna ] = gradesArray[ linha ][ coluna ];
        } // final for interno
    } // for externo
} // final construtor

void GradeBook::setCourseName(string name)
{
    courseName = name;
} // final setCourseName

string GradeBook::getCurseName()
{
    return courseName;
} // final getCurseName

// função display
void GradeBook::displaymessage()
{
    cout << "\nBem vindo ao curso:\n" << getCurseName() << "! " << endl;
} // final displaymessage

void GradeBook::processGrades()
{
    outputGrades(); // gera saída de array de notas

    // chama as funções getminimum e getmaximum
    cout << "\nA menor nota = " << getminimum()
            << "\nA maior nota = " << getmaximum() << endl;

    // gera saída de gráfico de barras
    outputBarChar();
} // final processGrades

// função menor nota
int GradeBook::getminimum()
{
    // variável para receber o menor valor da matriz
    int menor = 100;

    // loop para a linha
    for(int linha = 0; linha < estudantes; linha++)
        // loop para construir a coluna
        for(int coluna = 0; coluna < testes; coluna++)
            // verifica o menor valor na matriz
            if(grades[ linha ][ coluna ] < menor)
                // atribui o menor valor a variável menor
                menor = grades[ linha ][ coluna ];

    return menor; // retorna o menor valor
} // final getminimum

// função maior valor
int GradeBook::getmaximum()
{
    // variável para receber o maior valor da matriz
    int maior = 0;

    // loop para linha
    for(int i = 0; i < estudantes; i++)
        // loop para a coluna
        for(int j = 0; j < testes; j++)
            // verifica o maior valor na matriz
            if(grades[ i ][ j ] > maior)
                // variável recebe o maior valor da matriz
                maior = grades[ i ][ j ];

    return maior; // retorna o maior valor da matriz
} // final getmaximum

// finção média
double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0;

    // soma notas do array
    for(int nota = 0; nota < grades; nota++)
        total += setOfGrades[ nota ];

    // retorna a média das notas
    return static_cast< double >(total) / grades;

} // final média

// gráfico de barras
void GradeBook::outputBarChar()
{
    // cabeçalho
    cout << "\nDISTRIBUIÇÃO DAS NOTAS" << endl;

    const int frequencySize = 11; // tamanho do vetor
    int frequancy[frequencySize] = {0}; // vetor

    // para cada nota incrementa a frequência apropriada
    for(int estudante = 0; estudante < estudantes; estudante++)
        for(int teste = 0; teste < testes; teste++)
            ++frequancy[ grades[ estudante ][ teste ] / 10 ];

    // para cada frequência de nota, imprima uma barra  no gráfico
    for(int contar = 0; contar < frequencySize; contar++)
    {
        if(contar == 0)
            cout << "  0-9: ";
        else if(contar == 10)
            cout << "  100: ";
        else
            cout << contar * 10 <<  "-" << (contar * 10) + 9 << ": ";

        // imprime barra de asterisco
        for(int estrela = 0; estrela < frequancy[contar]; estrela++)
            cout << '*';

        cout << endl;

    } // final for contar
} // final outputBarChar

// cria saída das notas
void GradeBook::outputGrades()
{
    // cabeçalho
    cout << "\nTABELA DAS NOTAS\n" << endl;
    cout << "                   "; // alinhamento dos títulos das colunas

    // cria cabeçalho das colunas
    for(int teste = 0; teste < testes; teste++)
        cout << "teste" << teste + 1 << "  ";

    // título da coluna de média
    cout << "Average" << endl;

    // cabeçalho das linhas
    for( int linha = 0; linha < estudantes; linha++)
    {
        cout << "Estudante " << setw(5) << linha + 1;

        // gera saída de notas dos alunos
        for( int coluna = 0; coluna < testes; coluna++)
            cout << setw(8) << grades[linha][coluna];

        double media = getAverage( grades[linha], testes );

        cout << setw(10) << setprecision(2) << fixed << media << endl;
    } // for linha
} // final outputGrades
