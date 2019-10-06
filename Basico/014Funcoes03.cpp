#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef enum {LEITURA, ESCRITA} tipo_arquivo;

tipo_arquivo abrir(FILE *&arquivo, char *nome);

int main (void)
{
    FILE *file;
    size_t result;
    long lSize;
    //char * buffer;

    if (abrir(file, "teste.txt") == LEITURA)
    {	
	    char char_leitura = fgetc(file);
	    while (char_leitura != EOF)
		{
            cout << char_leitura;
			char_leitura = fgetc(file);
		}
    }
    else
    {
        cout << "Digite uma frase: ";
        char *input;
        cin.getline(input,30);
		for(int i=0; i<strlen(input); i++) 
			putc(input[i],file);
    }
    fclose (file);
    return 0;
}

tipo_arquivo abrir(FILE *&arquivo, char *nome)
{
    tipo_arquivo arquivo_leitura = LEITURA;
    if((arquivo=fopen(nome, "r"))==NULL){
        arquivo=fopen(nome,"w"); 
        arquivo_leitura = ESCRITA;
    }
    return arquivo_leitura; 
} 