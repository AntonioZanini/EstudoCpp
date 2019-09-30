#include <iostream>
#include <stdio.h>
#include <conio.h>

using std::cout;

int main (void)
{
    int i = 1234;
    double d = 567.89;
    //printf("\ni = %i, d = %d", i, d);
    printf("\ni = %i, d = %lf", i, d);
    cout << "\ni = " << i << ", d = " << d;

    getch();
    return 0;
}