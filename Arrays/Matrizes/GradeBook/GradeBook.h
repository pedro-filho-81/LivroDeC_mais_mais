/*
    defini��o da classe grade book que
    utiliza um array bidimencional para armazenar as notas dos testes
    as fun��es-membro ser�o definidas em GradeBook.cpp.
*/
#include <string>

using namespace std;

class GradeBook
{
public:

    // define o tamanho da linha e da coluna
    const static int estudantes = 10; // linha
    const static int testes = 3; // coluna

    // fun��es-mebro
    GradeBook(string, int[][testes]); // construtor da classe
    void setCourseName(string); // configura o nome do curso
    string getCurseName(); // retorna o nome do curso
    void displaymessage(); // mensage de boas-vindas ao curso
    void processGrades(); // processa os dados da classe
    int getminimum(); // retorna a menor nota
    int getmaximum(); // retorna a maior nota
    double getAverage(const int [], const int ); // retorna a m�dia das notas
    void outputBarChar(); // exibi as barras de caracteres
    void outputGrades(); // Exibe as notas dos testes

private:
    // vari�veis de inst�ncia
    string courseName; // nome do curso
    int grades[estudantes][testes]; // matriz para arazenar as notas dos testes

}; // final classe
