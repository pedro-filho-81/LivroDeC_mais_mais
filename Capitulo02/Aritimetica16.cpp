// inclua biblioteca
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Função principal
main()
{
    // Variáveis
    int n1;
    int n2;
    int soma;
    int diminui;
    int produto;
    int diferenca;
    int quociente;

    // Entrada de dados
    cout<<"Digite um inteiro: ";
    cin>>(n1);
    cout<<"Digite outro inteiro: ";
    cin>>(n2);

    // calculando
    soma = n1 + n2;
    diminui = n1 - n2;
    produto = n1 * n2;
    quociente = n1 / n2;
    diferenca = n1 % n2;

    // Mostra na tela
    cout<<"Soma = "<< soma <<endl;
    cout<<"diminuir = "<< diminui<<endl;
    cout<<"Produto = "<< produto<<endl;
    cout<<"Quociente = "<< quociente<< endl;
    cout<<"Diferenca = "<< diferenca << endl;

    if (n1 > n2){
        cout<<n1 <<" E maior.\n"<< n2<<" E o menor"<<endl;
    }
    if (n2 > n1){
        cout<< n2<< " E o maior.\n"<< n1<<" E o menor."<<endl;
    }

} // fim main
