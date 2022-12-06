#include <iostream>
#include <locale>

#include "GradeBook.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    // array
    int gradesArray[ GradeBook::students ][ GradeBook::tests ] =
    {
        { 87, 96, 70 },
        { 68, 89, 90 },
        { 94, 100, 90 },
        { 100, 81, 82 },
        { 83, 65, 85 },
        { 78, 87, 65 },
        { 85, 75, 83 },
        { 91, 94, 100 },
        { 76, 72, 84 },
        { 87, 93, 73 }
    };

    // cria objeto GradeBook
    GradeBook myGradeBook("Introdução ao C++ Como Programar", gradesArray);

    myGradeBook.displaymessage();
    myGradeBook.processaGrade();

    cout << "Hello world!" << endl;
    return 0;
}
