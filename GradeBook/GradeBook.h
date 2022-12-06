/*
    Definição da classe GradeBook que usa um array para
    armazenar as notas de teste.
    As funções membro serão definidas no GradeBook.cpp
*/
#include <string>

using namespace std;

// define a classe GradeBook
class GradeBook
{
public:
    // constamnte -- número de alunos que fizeram o teste
    const static int students = 10;
    const static int tests = 3;

    // construtor da classe
    GradeBook( string, const int [][ tests ] );

    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displaymessage(); // exibe uma mensagem de boas-vinda
    void processaGrade(); // realiza varias operações de dados
    int getminimum(); // localiza a menor nota
    int getmaximum(); // localiza a maior nota
    double getAverage(const int[], const int ); // calcula a média das notas
    void outputBarChart(); // gera a saída de gráfico de barras
    void outputGrades(); // gera a saída das notas do array

private:
    string courseName;  // nome do curso
    int grades[ students ][ tests ]; // vetor que armazenas as notas de curso

}; // final classe GradeBook
