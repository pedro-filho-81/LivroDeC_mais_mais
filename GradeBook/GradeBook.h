/*
    Defini��o da classe GradeBook que usa um array para
    armazenar as notas de teste.
    As fun��es membro ser�o definidas no GradeBook.cpp
*/
#include <string>

using namespace std;

// define a classe GradeBook
class GradeBook
{
public:
    // constamnte -- n�mero de alunos que fizeram o teste
    const static int students = 10;
    const static int tests = 3;

    // construtor da classe
    GradeBook( string, const int [][ tests ] );

    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displaymessage(); // exibe uma mensagem de boas-vinda
    void processaGrade(); // realiza varias opera��es de dados
    int getminimum(); // localiza a menor nota
    int getmaximum(); // localiza a maior nota
    double getAverage(const int[], const int ); // calcula a m�dia das notas
    void outputBarChart(); // gera a sa�da de gr�fico de barras
    void outputGrades(); // gera a sa�da das notas do array

private:
    string courseName;  // nome do curso
    int grades[ students ][ tests ]; // vetor que armazenas as notas de curso

}; // final classe GradeBook
