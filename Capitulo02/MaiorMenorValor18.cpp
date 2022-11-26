
// incluir bibliotecas
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Função principal
main()
{ // inicio de main

    // Variáveis
    int n1;
    int n2;

    // Entrada de dados
    cout<<"Digite um inteiro: ";
    cin>>(n1);
    cout<<"digite outro inteiro: ";
    cin>>(n2);

    //Verifica que é o maior
    if (n1 > n2){
        cout<<n1 <<" o maior.\n"<< n2 <<" o menor."<<endl;
    }
    if (n2 > n1){
        cout<<n2 <<" o maior.\n"<<n1<<" o menor."<<endl;
    }

} // fim de main
