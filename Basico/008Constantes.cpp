#include <iostream>
#include <conio.h>
#include <stdlib.h>

using std::cout;
using std::endl;

int main(void)
{
    const float pi = 3.14;
    const int meses = 12;
    const char *msg = "Pressione enter para sair...";
    char *message = (char *) msg;
    cout << "PI = " << pi << "\n" 
        << meses << " Meses" << endl << endl;
        //<< message << endl;
    
    const char * ptr1 = "um";           // O objeto apontado é constante.
    char * const ptr2 = "dois";         // O objeto que aponta é constante.
    const char * const ptr3 = "tres";   // Ambos são constantes.

    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;

    ptr1 = "quatro";
    //ptr1[0] = 'Q';    Erro ao editado o valor do objeto apontado.
    //ptr2 = "cinco";   Erro ao alterar o ponteiro.
    //ptr2[0] = 'Q';
    //ptr3 = "seis";      Erro em ambos.
    //ptr3[0] = 'S';
    // Mesmo em variáveis pode ocasionar erros a edição de char *, sendo mais utilizado strings.
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl << endl;
    cout << msg << endl;
    getch();
    return 0;
}