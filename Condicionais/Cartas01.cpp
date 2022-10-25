/*
    1. Este exerc�cio � escrever um programa que produza uma carta
        de formul�rio simples com base na entrada do usu�rio.
        Comece digitando o c�digo do �3.1 solicitando ao usu�rio que digite
        seu primeiro nome e escrevendo �Hello, first_name� onde first_name
        � o nome digitado pelo usu�rio. Em seguida, modifique seu c�digo da
        seguinte maneira: altere o prompt para �Digite o nome da pessoa para
        quem voc� deseja escrever� e altere a sa�da para �Dear first_name�.
        N�o esque�a da v�rgula.
    2. Adicione uma ou duas linhas introdut�rias, como �How are you? Estou bem.
        Eu sinto sua falta." Certifique-se de recuar a primeira linha. Adicione mais algumas
        linhas de sua escolha - � a sua carta.
    3. Agora solicite ao usu�rio o nome de outro amigo e armazene-o em friend_name.
        Adicione uma linha � sua carta: �Voc� viu nome_amigo ultimamente?�
    4. Declare uma vari�vel char chamada friend_sex e inicialize seu valor com 0.
        Pe�a ao usu�rio para inserir um m se o amigo for do sexo masculino e um f
        se o amigo for do sexo feminino. Atribua o valor inserido � vari�vel friend_sex.
        Em seguida, use duas instru��es if para escrever o seguinte:
        Se o amigo for do sexo masculino, escreva �Se voc� vir nome_amigo, pe�a para
        ele me ligar�. Se a amiga for do sexo feminino, escreva �Se voc� vir nome_amiga,
        pe�a para ela me ligar�.
    5. Pe�a ao usu�rio para inserir a idade do destinat�rio e atribua-o a uma idade vari�vel int.
        Fa�a com que seu programa escreva �Ouvi dizer que voc� acabou de fazer anivers�rio
        e tem anos de idade�. Se a idade for 0 ou menos ou 110 ou mais, chame simple_error
        ("voc� est� brincando!") usando simple_error() de std_lib_facilities.h.
        Pedro,25/10/2022
*/
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // muda a configura��o para portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese");

    // entrada de dados
    // por favor entre com seu primeiro nome
    cout << "Please enter your frist name: ";
    // primeiro_nome � uma vari�vel do tipo string
    string frist_name;  // frist_name is a variable of type string
    // l� caracteres na vari�vel primeiro_nome
    cin >> frist_name;  // read characters into frist_name

    // entre com o nome da pessoa para quem voc� quer escrever:
    cout << "Enter the name of the person you want to write to: ";
    // primeiro_nome_pessoa � uma vari�vel do tipo string
    string frist_name_person; // frist_name_person is a variable of type string
    // l� caracteres em primeiro_nome_pessoa
    cin >> frist_name_person; // read characters into frist_name_person

    // entre com o nome de outro amigo
    cout << "Enter the name of another friend: ";
    // nome do amigo � uma vari�vel do tipo string
    string friend_name; // friend_name is a variable of type string
    // L� caracteres em nome do amigo
    cin >> friend_name; // read characteres into friend_name

    char friend_sex = '0'; // friend_sex is a variabel of type char
    // entre um m se o amigo � masculino e f se o amigo � feminino
    cout << "Enter an m if friend is male and f if friend is female: ";
    // ler o caractere em sexo do amigo
    cin >> friend_sex; // read character into friend_sex

    // ouvi dizer que voc� fez anivers�rio e voc� tem anos de idade
    cout << "I hear you just had a birthday and you are age years old.";
    // idade � uma vari�vel do tipo inteiro
    int age; // age is a variabel of type int
    // l� um caractere em idade
    cin >> age; // read character into age


    // CARTA
    // Ol� frist_name
    cout << "\nHello " << frist_name << "! " << endl;

    // Caro frist_name
    cout << "\n  Dear " << frist_name_person << ", " << endl;

    // Como est� voc�? Eu estou bem.
    cout << "How are you? I am fine.\n"
            // sinto sua falta
            << "I miss you," << endl;

    // voc� viu friend_name ultimamente?
    cout << "Have you seen " << friend_name << " lately?" << endl;

    // se o sexo do amigo for m (masculino)
    if(friend_sex == 'm')
        // exiba se voc� ver o amigo por fafor pessa para ele ligar para mim
        cout << "If you see " << friend_name << " please ask him to call me." << endl;

    // se n�o, se o sexo do amigo for f (feminino)
    else if( friend_sex == 'f')
        // exiba: se voc� ver a amiga por favor pessa para ela ligar para mim.
        cout << "if you see " << friend_name << " please ask her to call me." << endl;

    cout << endl; // new line

    system("pause"); // pausa do programa

    return 0;

} // final principal
