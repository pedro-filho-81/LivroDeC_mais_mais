/*
    defini��o do templeite de classe,
    sobrecarga de fun��o
*/
template<class T> // template<nomeDoTipo vari�vel>
T maximum( T valor1, T valor2, T valor3 )
{
    // vari�vel recebe o par�metro valor1
    T maiorValor = valor1;

    // verifica se o valor2 � maior que o maiorValor
    if(valor2 > maiorValor )
        maiorValor = valor2;

    // verifica se o valor3 � maior que o maiorValor
    if(valor3 > maiorValor )
        maiorValor = valor3;

    // retorna o maioraValor
    return maiorValor;

} // fim template
