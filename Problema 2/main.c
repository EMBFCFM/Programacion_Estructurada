#include <stdio.h>
#include <stdlib.h>

/* Ramon Alberto Zapata Cruz */

int main() {
	char caracter= '#';
	int valor_ascii=(int) caracter;
	printf("\nEl valor ascii es: %d", valor_ascii);
	
	if(valor_ascii>=48 && valor_ascii<=57)
	{
		printf("\nEl valor %c es digito",caracter);
	}else 
	{
		if(valor_ascii>=65 && valor_ascii<=90)
		{
			printf("\nEl valor %c es una letra mayuscula",caracter);
		}
	 else if (valor_ascii>=97 && valor_ascii<=122)
		{
			printf("\nEl valor %c es una letra minuscula");
		}
		else
	{
	printf("\nEl valor %c es un caracter especial");
	}
}
	return 0;
}
