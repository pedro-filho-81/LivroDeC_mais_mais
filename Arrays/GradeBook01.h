/*
    cria a definição da classe GradeBook que usa um
    array para armazenar as notas de 10 alunos
    as funções membro da classe vão ser definidas
    na classe GradeBook.cpp que vai ser testada no programa
    testaGradeBook.cpp
*/
#include <string>

using namespace std;

class GradeBook
{
public:
    // constante - número de alunos que fizera o teste
    const static int estudantes = 10;

    // construtor da classe inicializa o nome do curso e o array de notas
    GradeBook(string, const int[]);

    // protótipos das funções-membro
    void setCourseName(string); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // exibe mensagen de boass-vindas ao curso
    void processGrades(); // executa varias operações nos dados
    int getMinimum(); // retorna a menor nota
    int getMaximum(); // retorna a maior nota
    double getAverage(); // retorna a média das notas
    void outputBarChar(); // cria gráfico de barras
    void outputGrades(); // gera a saída das notas

private:
    string courseName; // nome do curso
    int grades[ estudantes ]; // array para as notas
}; // final da classe GradeBook01
