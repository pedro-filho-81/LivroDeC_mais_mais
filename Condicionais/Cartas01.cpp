/*
    1. Este exercício é escrever um programa que produza uma carta
        de formulário simples com base na entrada do usuário.
        Comece digitando o código do §3.1 solicitando ao usuário que digite
        seu primeiro nome e escrevendo “Hello, first_name” onde first_name
        é o nome digitado pelo usuário. Em seguida, modifique seu código da
        seguinte maneira: altere o prompt para “Digite o nome da pessoa para
        quem você deseja escrever” e altere a saída para “Dear first_name”.
        Não esqueça da vírgula.
    2. Adicione uma ou duas linhas introdutórias, como “How are you? Estou bem.
        Eu sinto sua falta." Certifique-se de recuar a primeira linha. Adicione mais algumas
        linhas de sua escolha - é a sua carta.
    3. Agora solicite ao usuário o nome de outro amigo e armazene-o em friend_name.
        Adicione uma linha à sua carta: “Você viu nome_amigo ultimamente?”
    4. Declare uma variável char chamada friend_sex e inicialize seu valor com 0.
        Peça ao usuário para inserir um m se o amigo for do sexo masculino e um f
        se o amigo for do sexo feminino. Atribua o valor inserido à variável friend_sex.
        Em seguida, use duas instruções if para escrever o seguinte:
        Se o amigo for do sexo masculino, escreva “Se você vir nome_amigo, peça para
        ele me ligar”. Se a amiga for do sexo feminino, escreva “Se você vir nome_amiga,
        peça para ela me ligar”.
    5. Peça ao usuário para inserir a idade do destinatário e atribua-o a uma idade variável int.
        Faça com que seu programa escreva “Ouvi dizer que você acabou de fazer aniversário
        e tem anos de idade”. Se a idade for 0 ou menos ou 110 ou mais, chame simple_error
        ("você está brincando!") usando simple_error() de std_lib_facilities.h.
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
    // muda a configuração para português brasileiro
    setlocale(LC_ALL, "Portuguese");

    // entrada de dados
    // por favor entre com seu primeiro nome
    cout << "Please enter your frist name: ";
    // primeiro_nome é uma variável do tipo string
    string frist_name;  // frist_name is a variable of type string
    // lê caracteres na variável primeiro_nome
    cin >> frist_name;  // read characters into frist_name

    // entre com o nome da pessoa para quem você quer escrever:
    cout << "Enter the name of the person you want to write to: ";
    // primeiro_nome_pessoa é uma variável do tipo string
    string frist_name_person; // frist_name_person is a variable of type string
    // lê caracteres em primeiro_nome_pessoa
    cin >> frist_name_person; // read characters into frist_name_person

    // entre com o nome de outro amigo
    cout << "Enter the name of another friend: ";
    // nome do amigo é uma variável do tipo string
    string friend_name; // friend_name is a variable of type string
    // Lê caracteres em nome do amigo
    cin >> friend_name; // read characteres into friend_name

    char friend_sex = '0'; // friend_sex is a variabel of type char
    // entre um m se o amigo é masculino e f se o amigo é feminino
    cout << "Enter an m if friend is male and f if friend is female: ";
    // ler o caractere em sexo do amigo
    cin >> friend_sex; // read character into friend_sex

    // ouvi dizer que você fez aniversário e você tem anos de idade
    cout << "I hear you just had a birthday and you are age years old.";
    // idade é uma variável do tipo inteiro
    int age; // age is a variabel of type int
    // lê um caractere em idade
    cin >> age; // read character into age


    // CARTA
    // Olá frist_name
    cout << "\nHello " << frist_name << "! " << endl;

    // Caro frist_name
    cout << "\n  Dear " << frist_name_person << ", " << endl;

    // Como está você? Eu estou bem.
    cout << "How are you? I am fine.\n"
            // sinto sua falta
            << "I miss you," << endl;

    // você viu friend_name ultimamente?
    cout << "Have you seen " << friend_name << " lately?" << endl;

    // se o sexo do amigo for m (masculino)
    if(friend_sex == 'm')
        // exiba se você ver o amigo por fafor pessa para ele ligar para mim
        cout << "If you see " << friend_name << " please ask him to call me." << endl;

    // se não, se o sexo do amigo for f (feminino)
    else if( friend_sex == 'f')
        // exiba: se você ver a amiga por favor pessa para ela ligar para mim.
        cout << "if you see " << friend_name << " please ask her to call me." << endl;

    cout << endl; // new line

    system("pause"); // pausa do programa

    return 0;

} // final principal
