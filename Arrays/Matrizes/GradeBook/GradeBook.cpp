/*
    Defini��o das fun��es-membro da classe GradeBook
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

// fun��o display
void GradeBook::displaymessage()
{
    cout << "\nBem vindo ao curso:\n" << getCurseName() << "! " << endl;
} // final displaymessage

void GradeBook::processGrades()
{
    outputGrades(); // gera sa�da de array de notas

    // chama as fun��es getminimum e getmaximum
    cout << "\nA menor nota = " << getminimum()
            << "\nA maior nota = " << getmaximum() << endl;

    // gera sa�da de gr�fico de barras
    outputBarChar();
} // final processGrades

// fun��o menor nota
int GradeBook::getminimum()
{
    // vari�vel para receber o menor valor da matriz
    int menor = 100;

    // loop para a linha
    for(int linha = 0; linha < estudantes; linha++)
        // loop para construir a coluna
        for(int coluna = 0; coluna < testes; coluna++)
            // verifica o menor valor na matriz
            if(grades[ linha ][ coluna ] < menor)
                // atribui o menor valor a vari�vel menor
                menor = grades[ linha ][ coluna ];

    return menor; // retorna o menor valor
} // final getminimum

// fun��o maior valor
int GradeBook::getmaximum()
{
    // vari�vel para receber o maior valor da matriz
    int maior = 0;

    // loop para linha
    for(int i = 0; i < estudantes; i++)
        // loop para a coluna
        for(int j = 0; j < testes; j++)
            // verifica o maior valor na matriz
            if(grades[ i ][ j ] > maior)
                // vari�vel recebe o maior valor da matriz
                maior = grades[ i ][ j ];

    return maior; // retorna o maior valor da matriz
} // final getmaximum

// fin��o m�dia
double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0;

    // soma notas do array
    for(int nota = 0; nota < grades; nota++)
        total += setOfGrades[ nota ];

    // retorna a m�dia das notas
    return static_cast< double >(total) / grades;

} // final m�dia

// gr�fico de barras
void GradeBook::outputBarChar()
{
    // cabe�alho
    cout << "\nDISTRIBUI��O DAS NOTAS" << endl;

    const int frequencySize = 11; // tamanho do vetor
    int frequancy[frequencySize] = {0}; // vetor

    // para cada nota incrementa a frequ�ncia apropriada
    for(int estudante = 0; estudante < estudantes; estudante++)
        for(int teste = 0; teste < testes; teste++)
            ++frequancy[ grades[ estudante ][ teste ] / 10 ];

    // para cada frequ�ncia de nota, imprima uma barra  no gr�fico
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

// cria sa�da das notas
void GradeBook::outputGrades()
{
    // cabe�alho
    cout << "\nTABELA DAS NOTAS\n" << endl;
    cout << "                   "; // alinhamento dos t�tulos das colunas

    // cria cabe�alho das colunas
    for(int teste = 0; teste < testes; teste++)
        cout << "teste" << teste + 1 << "  ";

    // t�tulo da coluna de m�dia
    cout << "Average" << endl;

    // cabe�alho das linhas
    for( int linha = 0; linha < estudantes; linha++)
    {
        cout << "Estudante " << setw(5) << linha + 1;

        // gera sa�da de notas dos alunos
        for( int coluna = 0; coluna < testes; coluna++)
            cout << setw(8) << grades[linha][coluna];

        double media = getAverage( grades[linha], testes );

        cout << setw(10) << setprecision(2) << fixed << media << endl;
    } // for linha
} // final outputGrades
