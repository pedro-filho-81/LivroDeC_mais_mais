/*
    Copiando uma string usando a notação de array e a notação de ponteiro
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void copy1(char *, const char *);
void copy2(char *, const char *);

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // variáveis / ponteiro
    char string1[ 10 ]; // vetor com 10 elementos
    char *string2 = "Hello"; // ponteiro recebe a string hello
    char string3[ 10 ]; // vetor para 10 elementos
    char string4[] = "Good Bye"; // cria outro vetor

    // copia string2 para string1
    copy1(string1, string2);
    cout << "string1 = " << string1<< endl;

    // copia elementos do vetor4 para o vetor3
    copy2(string3, string4);
    cout << "\nstring3 = " << string3 << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// copy1 copia s2 para s1 utilizando array2 para array1
void copy1(char *s1, const char *s2)
{
    // a cópia é feita no cabeçalho do for
    // s1[ ] recebe s2[ ] enquanto diferente de nulo(\0)
    for(int i = 0; ( s1[ i ] = s2[ i ]) != '\0'; i++)
        ; // não faz nada on corpo
} // final função copy1

// copy2 copia s2 para s1 utilizando ponteiro2 para ponteiro1
// *s1 recebe *s2 enquanto diferente de nulo(\0)
void copy2(char *s1, const char *s2)
{
    // a cópia é feita no cabeçalho do for
    // s1[ ] recebe s2[ ] enquanto diferente de nulo(\0)
    for( ; (*s1 = *s2) != '\0'; s1++, s2++)
        ; // não faz nada on corpo
} // final copy2
