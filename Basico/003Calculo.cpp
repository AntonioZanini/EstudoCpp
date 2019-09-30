#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;

int main (void)
{

    float comprimento, largura;
    cout << "Informe os lados do retangulo: ";
    cin >> comprimento >> largura; // Captura valores separados por espaço e coloca em cada variável.
    cout << largura << "\n";
    cout << comprimento << "\n";
    cout << "A area equivale a " << comprimento * largura << " m2\n";

    getch();
    return 0;
}