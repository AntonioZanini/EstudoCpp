#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;

int main(void)
{
    char nome[80];
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Seu nome e " << nome << "!\n";
    getch();
    return 0;
}