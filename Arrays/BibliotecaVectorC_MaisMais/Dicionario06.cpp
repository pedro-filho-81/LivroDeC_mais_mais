/*
    criando um mini dicionário
*/
#include <vector>
#include <algorithm>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // cria um vetor
    vector<string> dicionario;

    cout << "Digite algumas palavras para o dicionário:  ";
    // loop for para adicionar n palavras
    for(string palavra; cin >> palavra;)
        dicionario.push_back(palavra);

    cout << "Número de palavras = " << dicionario.size() << endl;

    // organizar palavras
    sort(dicionario.begin(), dicionario.end() );

    // Exibir
    // loop for para o dicionario
    for(int i = 0; i < dicionario.size(); i++)
        if(i == 0 || dicionario[i - 1] != dicionario[ i ])
            cout << dicionario[ i ] << endl;

    cout << endl; // nova linha

    system("pause"); // pausa do programa

    return 0;

} // final principal
