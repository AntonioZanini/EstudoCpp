#include <iostream>
#include <iomanip> 
#include <conio.h>

using namespace std;

struct Cliente
{  
	char *nome; 
	char *fone;
	enum {Novato, Fregues, Premium } categoria;
};


int main()
{
	struct Cliente joao;

	joao.nome = "Joao";
	joao.fone = "4563-2222";
	joao.categoria = Premium;

	cout <<joao.nome<<endl
		 <<joao.fone<<endl
		 <<setw((int)joao.categoria+1)<<setfill('*')<<"";

	getch();
	return 0;
}