#include <iostream>

using namespace std;

void inverte(int &a, int &b);

int main(void)
{
    int x = 8, y = 80;

    cout << "x = " << x << " y = " << y << endl;
    inverte(x,y);
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}

void inverte(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
