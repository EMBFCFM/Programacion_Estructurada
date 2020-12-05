  
#include <stdio.h>
#include <stdio.h>
#include <string.h>


typedef struct{
    char Matricula[8];
    int P1;
    int P2;
    int PIA;
    float Final;
}Evaluacion;

void funcion_captura(Evaluacion *, int *);
/*void funcion_impresion_en_archivo(FILE *, Evaluacion *, int *);*/

int main(){


   FILE *fp;
   int cont1, i, nummax_struct = 0;

   printf("Ingrese numero de estudiantes que desea capturar: ");
   scanf("%d", &nummax_struct);
   fp = fopen("C://Users/Windows/Desktop/Archivos/Calificacion funciones4.csv", "w+");
   Evaluacion Evaluaciones[50];

   for (cont1=0;cont1<nummax_struct;cont1++){
          funcion_captura (Evaluaciones, &cont1);
          /*funcion_impresion_en_archivo(*fp_puedesSerDiferente, Evaluaciones, &contador_1);*/
   }

   fprintf(fp, "Matricula, PrimerParcial, SegundoParcial, PIA, Final\n");
   for(i=0;i<nummax_struct;i++){
       Evaluaciones[i].Final=(float)(Evaluaciones[i].P1+Evaluaciones[i].P2+Evaluaciones[i].PIA)/3;
       fflush(stdin);
       fprintf(fp, "%s, %d, %d, %d, %.2f\n", Evaluaciones[i].Matricula, Evaluaciones[i].P1,Evaluaciones[i].P2,Evaluaciones[i].PIA,Evaluaciones[i].Final);
   }

   fclose(fp);
   printf("Archivo guardado");
 return 0;}

 void funcion_captura(Evaluacion A[], int *cont1){

         printf("\n\tALUMNO %d\n", *cont1 + 1);
         printf("\nIngrese numero de matricula: ");
         fflush(stdin);
         scanf("%s", &A[*cont1].Matricula);
         printf("\nIngrese Calificacion del primer parcial: ");
         fflush(stdin);
         scanf("%d", &A[*cont1].P1);
         printf("\nIngrese Calificacion del segundo parcial: ");
         fflush(stdin);
         scanf("%d", &A[*cont1].P2);
         printf("\nIngrese Calificacion del PIA: ");
         fflush(stdin);
         scanf("%d", &A[*cont1].PIA);

 }

