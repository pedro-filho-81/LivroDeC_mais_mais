#include <iostream>
#include "../../GradeBook01.h"

using namespace std;

int main()
{
    // vetor das notas dos alunos
    int gradesArray[GradeBook::estudantes] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

    // cria objeto GradeBook
    GradeBook meuGradeBook("Livro C++ Como Programar", gradesArray);

    meuGradeBook.displayMessage();

    meuGradeBook.processGrades();

    cout << "Hello world!" << endl;
    return 0;
}
