#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
int n=10; // n global.
int main (void)
{
    /*
        Declarações de variáveis podem ser realizadas em qualquer ponto do código,
        e seu escopo existe desde sua declaração até o fim de seu bloco atual.
    */
    int n=20; // n externo.
    { // Bloco de código.
    int n=30; // início do escopo do n interno.
    ::n++; // :: permite acessar variável global mesmo existindo variáveis locais de mesmo nome.
    cout << ::n << " " << n << endl;
    }   // fim do escopo do n interno.
    cout << ::n << " " << n << endl;
    getch();
    return 0;
}