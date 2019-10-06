#include <iostream>
#include <iomanip>

using namespace std;

typedef struct
{
    char *nome;
    char *fone;
} cliente;

void listar_clientes(const cliente *clientes);

int main(void)
{
    cliente *clientes = new cliente[5];
    clientes[0].nome = "Joao";
    clientes[0].fone = "888-8888";
    clientes[1].nome = "Rita";
    clientes[1].fone = "788-8888";
    clientes[2].nome = "Sergio";
    clientes[2].fone = "688-8888";
    clientes[3].nome = "Fernanda";
    clientes[3].fone = "588-8888";
    clientes[4].nome = "Lucas";
    clientes[4].fone = "488-8888";

    listar_clientes(clientes);
    return 0;
}

void listar_clientes(const cliente *clientes)
{
    cout << "Lista de Clientes" << endl;
    cout << setw(21) << setfill('-') << "-" << endl;
    cout << setw(10) << setfill(' ') << "Nome" << " | " << setw(8) << setfill(' ') << "Fone"<< endl;
    cout << setw(21) << setfill('-') << "-" << endl;
    for (int i=0;i<5;i++)
    {
        cout << setw(10) << setfill(' ') << clientes[i].nome << " | " << clientes[i].fone << endl;
    }
}