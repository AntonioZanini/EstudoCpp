#include <iostream>
using namespace std;

int main()
{
	int n = 32;
	int &nref = n;
	int *ptr = &nref;
	cout << "n: " << n << " nref: " << nref << " ptr: "<< *ptr << endl; 
	n ++;
	cout << "n: " << n << " nref: " << nref << " ptr: "<< *ptr << endl; 
	nref += 2;
	cout << "n: " << n << " nref: " << nref << " ptr: "<< *ptr << endl; 
	*ptr = n + nref;
	cout << "n: " << n << " nref: " << nref << " ptr: "<< *ptr << endl; 
	return 0;
}