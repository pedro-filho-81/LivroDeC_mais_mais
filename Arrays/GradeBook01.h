/*
    cria a defini��o da classe GradeBook que usa um
    array para armazenar as notas de 10 alunos
    as fun��es membro da classe v�o ser definidas
    na classe GradeBook.cpp que vai ser testada no programa
    testaGradeBook.cpp
*/
#include <string>

using namespace std;

class GradeBook
{
public:
    // constante - n�mero de alunos que fizera o teste
    const static int estudantes = 10;

    // construtor da classe inicializa o nome do curso e o array de notas
    GradeBook(string, const int[]);

    // prot�tipos das fun��es-membro
    void setCourseName(string); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // exibe mensagen de boass-vindas ao curso
    void processGrades(); // executa varias opera��es nos dados
    int getMinimum(); // retorna a menor nota
    int getMaximum(); // retorna a maior nota
    double getAverage(); // retorna a m�dia das notas
    void outputBarChar(); // cria gr�fico de barras
    void outputGrades(); // gera a sa�da das notas

private:
    string courseName; // nome do curso
    int grades[ estudantes ]; // array para as notas
}; // final da classe GradeBook01
