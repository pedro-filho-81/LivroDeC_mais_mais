/*
    cria o objeto GradeBook utilizando um
    ARRAY bidimencional para as notas

*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include "GradeBook.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // cria o vetor das notas
    int gradesArray[ GradeBook::estudantes ][ GradeBook::testes ] =
            {
                { 87, 96, 70 },
                { 68, 87, 90 },
                { 94, 100, 90},
                { 100,81, 83 },
                { 83, 65, 85 },
                { 78, 87, 65 },
                { 85, 75, 83 },
                { 91, 94,100},
                { 76, 72, 84},
                { 87, 93, 73}
            };

    // cria o objeto da classe GradeBook
    GradeBook meuGradeBook("Livro C++ Como Programar", gradesArray);

    meuGradeBook.displaymessage();
    meuGradeBook.processGrades();
    system("pause"); // pausa do programa

    return 0;

} // final principal array bidi/*
