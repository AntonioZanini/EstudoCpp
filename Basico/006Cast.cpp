#include <iostream>
#include <conio.h>

using std::cout;

int main (void)
{
    int i, j;
    double d = 9.87;
    i = (int)d;     // cast estilo C
    j = int(d);    // cast funcional
    cout << i << " = " << j << "\n";

    //  Cast funcional só pode ser usada com tipos simples ou definidos pelo usuário. 
    //  Para utilizá-la com ponteiros e vetores, precisamos antes criar novos tipos.

    typedef int * ptr;
    int *b;
    b = ptr(&d);
    cout << b;
    getch();
    return 0;
}