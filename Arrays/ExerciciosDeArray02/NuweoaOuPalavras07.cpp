/*
    7. Modifique a “minicalculadora” do exercício 5 para aceitar (apenas)
        números de um dígito escritos como dígitos ou soletrados.
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipos
void palavras(vector<string> &, string ); // digita ua palavra ostra u núero

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    string palavra = " ";

    //vetor
    vector<int> valor = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // entrada de dados
    cout << "Informe o nome do valor entre 0 e 9 [tipo sete]\n"
            << "para ver seu valor númerico." << endl;
            cin >> palavra;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal

// palavras
void palavras(vector<string> &vetor, string frase)
{

    if(frase == "zero")
        cout << "Você escreveu " << vetor[frase]
} // final palavras
