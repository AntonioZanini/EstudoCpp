#include <iostream>
#include <conio.h>
#include <math.h>

using std::cout;
using std::endl;

int delta(int a, int b, int c);
void raiz(int &a);

int main(void)
{
    int a = 2, b = 3, c = 5;
    int d = delta(a,b,c);
    cout << d << endl;
    raiz(d);
    cout << d;
    getch();
    return 0;
}

int delta(int a, int b, int c)
{
    return (pow(b,2) + (4 * a * c));
}

void raiz(int &a)
{
    a = sqrt(a);
}