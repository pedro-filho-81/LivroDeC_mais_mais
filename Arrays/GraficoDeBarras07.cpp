/*
    cria gráfico de barras
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ARRAY_SIZE = 11;

    int valores[ARRAY_SIZE] = {0, 0, 0, 3, 2, 3, 1, 2, 4, 2, 1 };

    cout << "Tabela de Notas" << endl;

    // loop para criar 2
    for( int i = 0; i < ARRAY_SIZE; i++)
    {
        // gera saída rótulada de barras - ( "0 - 9:", ..., "90 - 99:", "100:" )
        if( i == 0 )
            cout << "00 - 09:  ";
        else if ( i == 10 )
            cout << "    100: ";
        else
            cout << i * 10 << " - " << (i * 10) + 9 << ": ";

        for(int estrelas = 0; estrelas < valores[i]; estrelas++)
            cout << "*";

        cout << endl; // pula linha
    } // final for

    system("pause"); // pausa do programa

    return 0;

} // final principal
