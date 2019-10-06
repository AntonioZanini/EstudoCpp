#include <iostream>

using namespace std;

void taboada (int numero, int inicio = 1);
int soma(int a, int b);
int soma(int a, int b, int c);
double soma(double a, double b, double c);
inline void quadrado (int numero) { cout << numero * numero;}

int main (void)
{
    taboada(5);
    cout << endl;
    taboada(10,6);
    cout << endl;
    quadrado(100);
    cout << endl;
    cout << soma(1,2) << " " << soma(1,2,3) << " " << soma(1.5,2.5,1.3) << endl;

    return 0;
}

int soma(int a, int b)
{
   return a + b; 
}

int soma(int a, int b, int c)
{
   return a + b + c; 
}

double soma(double a, double b, double c)
{
   return a + b + c; 
}

void taboada (int numero, int inicio)
{
    for (int i=inicio; i<=10;i++)
    {
        cout << i << " x " << numero << " = " << i * numero << endl;
    }
}