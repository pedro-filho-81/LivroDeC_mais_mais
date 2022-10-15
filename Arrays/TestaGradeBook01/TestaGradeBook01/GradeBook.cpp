/*
    define as funções ebro da classe GradeBook01
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

#include "../../GradeBook01.h"

using namespace std;

    // construtor da classe
    GradeBook::GradeBook(string name, const int gradesArray[])
    {
        // configura o nome do curso
        setCourseName(name);

        // copia notas de gradeArray para grades
        for(int nota = 0; nota < estudantes; nota++)
            grades[ nota ] = gradesArray[ nota ];

    } // final construtor

    // configura o nome do curso
    void GradeBook::setCourseName(string name)
    {
        courseName = name;
    } // final setCourseName

    // retorna o nome do curso
    string GradeBook::getCourseName()
    {
        return courseName;
    } // final getCourseName

    // mostra mensage de boas-vindas
    void GradeBook::displayMessage()
    {
        // chama a função getCourseName e dá às boas-vindas
        cout << "Bem vindo ao curso: " << getCourseName() << "!" << endl;
    } // final display

    // realiza varias operações
    void GradeBook::processGrades()
    {
        outputGrades(); // gera saida do array de notas

        // exibe a média das notas
        cout << "média das notas: " << setprecision(2)
                << fixed <<getAverage() << endl;

        // exibe o menor e o maior valor das notas
        cout << "Menor nota = " << getMinimum()
                << "\nMaior nota = " << getMaximum() << endl;

        // chama o gráfico de barras
        outputBarChar();

    } // final processGrades

    // exibe a menor nota
    int GradeBook::getMinimum()
    {
        int menorNota = 100;

        // loop para pesquisar a menor nota
        for( int nota = 0; nota < estudantes; nota++)
        {
            if(grades[ nota ] < menorNota)
                menorNota = grades[nota];
        } // final for

        return menorNota;
    } // final função minimum

    // função maior nota
    int GradeBook::getMaximum()
    {
        int maiorNota = 0; // maior nota

        // loop para pesquisar a maior nota
        for(int nota = 0; nota < estudantes; nota++)
        {
            if(grades[ nota] > maiorNota)
                maiorNota = grades[ nota ];
        } // final for

        return maiorNota; // retorna a maior nota
    } // final função

    // função média
    double GradeBook::getAverage()
    {
        int total = 0;

        // loop para calcular a média das notas
        for(int nota = 0; nota < estudantes; nota++)
            total += grades[nota];

        return static_cast<double> (total) / estudantes;
    } // final média

    // gráfico de barras
    void GradeBook::outputBarChar()
    {
        cout << "\nDistribuição das Notas" << endl;

        // armazena frequência das notas
        const int frequencySize = 11;
        int frequency[ frequencySize ] = {0}; // vetor

        // loop para frequência das notas
        for(int nota = 0; nota < estudantes; nota++)
            frequency[ grades[ nota ] / 10 ]++;

        // imprime as barras no gráfico
        for(int contar = 0; contar < frequencySize; contar++ )
        {
            if(contar == 0)
                cout << "  0-9:  ";
            else if(contar == 10)
                cout << "  100:  ";
            else
                cout << contar * 10 << "-" << (contar * 10) + 9 << ":  ";

            // loop para exibir as estrelas
            for(int estrelas = 0; estrelas < frequency[ contar ]; estrelas++)
                cout << '*';

            cout << endl; // pula linha

        } // final for externo

    } // final função

    // função das notas
    void GradeBook::outputGrades()
    {
        cout << "\nAs Notas São:\n\n";

        // loop gera a saida das notas de cada aluno
        for(int student = 0; student < estudantes; student++)
            cout << "Estudante " << setw(2) << student + 1 << ":  "
                    << setw( 3 ) << grades[ student ] << endl;
    } // final outputGrades

