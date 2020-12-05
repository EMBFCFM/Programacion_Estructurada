/*Ramon Alberto Zapata Cruz mat: 1848881*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	char caracter;
	fp=fopen("C://Users/Windows/Desktop/Archivos/Guarda datos/evaluaciones.csv","r+");
	   if (fp == NULL){
 
                printf("\nError de apertura del archivo. \n\n");
        }else{
 
 
            printf("\nEl contenido del archivo de prueba es \n\n");
 
            while (feof(fp) == 0)
            {
                caracter = fgetc(fp);
                printf("%c",caracter);
            }
        }
        fclose(fp);
	
return 0;
}

