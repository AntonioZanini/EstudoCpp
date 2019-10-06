#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int *p1 = new int();
	*p1 = 10;
	int *p2 = new int(*p1);
	int *p3 = new int[*p1];
	int (*p4)[3] = new int[2][3];

	p4[0][0] = 0;
	p4[0][1] = 1;
	p4[0][2] = 2;
	p4[1][0] = 1;
	p4[1][1] = 2;
	p4[1][2] = 3;
	
	for (int i =0; i<*p1;i++)
	{
		p3[i] = i;
	}
	cout << *p1 << endl << *p2 << endl;
	for (int j=0; j<*p1;j++)
	{
		cout << p3[j] << endl;
	}
	cout << endl << setw(10) << setfill('=') << "=" ;

	cout << endl << endl;

	for (int x=0; x<2; x++){
		for (int y=0; y<3; y++)
		{
			cout << p4[x][y] << " . ";
		}
		cout << endl;
	}
	delete p1;
	delete[] p4;

	cout << p1 << endl; 		//variáveis liberadas.
	cout << p4[2][2] << endl;

	return 0;
}