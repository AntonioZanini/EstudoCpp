#include <iostream>
using namespace std;

int main()
{
	int *p1 = new int();
	*p1 = 10;
	int *p2 = new int(*p1);
	int *p3 = new int[*p1];
	for (int i =0; i<*p1;i++)
	{
		p3[i] = i;
	}
	cout << *p1 << endl << *p2 << endl;
	for (int j=0; j<*p1;j++)
	{
		cout << p3[j] << endl;
	}
	return 0;
}