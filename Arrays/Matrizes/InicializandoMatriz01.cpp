/*

*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

// protótipo
void exibir(const int [][ 3 ]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // matrizes
    int matriz1[2][3] = {{1, 2, 3}, {4, 5, 6} };
    int matriz2[2][3] = {1, 2, 3, 4, 5, 6};
    int matriz3[2][3] = { {1,2}, {4} };

    cout << "int matriz1[2][3] = {{1, 2, 3}, {4, 5, 6} };" << endl;
    cout << "matriz1 = " << endl;
    exibir(matriz1);

    cout << "int matriz2[2][3] = {1, 2, 3, 4, 5, 6};" << endl;
    cout << "matriz2 = " << endl;
    exibir(matriz2);

    cout << "int matriz3[2][3] = { {1,2}, {4} };" << endl;
    cout << "matriz3 = " << endl;
    exibir(matriz3);

    system("pause"); // pausa do programa

    return 0;

} // final principal

// função exibir
void exibir(const int matriz[][3])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << matriz[ i ][ j ] << ' ';
        } // final for coluna
        cout << endl;
    } // final for linha
} // final exibir
