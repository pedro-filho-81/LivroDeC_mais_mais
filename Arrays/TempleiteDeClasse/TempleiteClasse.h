/*
    definição do templeite de classe,
    sobrecarga de função
*/
template<class T> // template<nomeDoTipo variável>
T maximum( T valor1, T valor2, T valor3 )
{
    // variável recebe o parâmetro valor1
    T maiorValor = valor1;

    // verifica se o valor2 é maior que o maiorValor
    if(valor2 > maiorValor )
        maiorValor = valor2;

    // verifica se o valor3 é maior que o maiorValor
    if(valor3 > maiorValor )
        maiorValor = valor3;

    // retorna o maioraValor
    return maiorValor;

} // fim template
