/*
        TestaTautologia (fbf P; fbf Q)
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    //Dadas duas fbfs P e Q, decide se a fbf P → Q é, ou não, uma tautologia.
    //Suponha que P → Q não é uma tautologia
    //P = verdadeira      //atribui V a P
    //Q = falsa               //atribui F a Q

    bool p = true;
    bool q = false;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
