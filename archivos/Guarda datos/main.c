#include <stdio.h>
#include <string.h>



struct Evaluacion{
    char Mat[15];
    int PParcial;
    int SParcial;
    int PIA;
    float Final;
};



int main(){
	int i;
   FILE *fp;
   fp = fopen("C://Users/Windows/Desktop/Archivos/Guarda datos/evaluaciones.csv", "w+");
   struct Evaluacion Evaluaciones[3];
   strcpy(Evaluaciones[0].Mat, "11");
   Evaluaciones[0].PParcial = 9;
   Evaluaciones[0].SParcial = 9;
   Evaluaciones[0].PIA = 9;
   Evaluaciones[0].Final = 9;



   strcpy(Evaluaciones[1].Mat, "12");
   Evaluaciones[1].PParcial = 8;
   Evaluaciones[1].SParcial = 8;
   Evaluaciones[1].PIA = 8;
   Evaluaciones[1].Final = 8;



   strcpy(Evaluaciones[2].Mat, "13");
   Evaluaciones[2].PParcial = 7;
   Evaluaciones[2].SParcial = 7;
   Evaluaciones[2].PIA = 7;
   Evaluaciones[2].Final = 7;
   fprintf(fp, "Matricula, PrimerParcial, SegundoParcial, PIA, Final\n");
   for( i= 0; i < 3; i++){
       fprintf(fp, "%s, %d, %d, %d, %.2f\n", Evaluaciones[i].Mat, Evaluaciones[i].PParcial, Evaluaciones[i].SParcial, Evaluaciones[i].PIA, Evaluaciones[i].Final);
   }
   fclose(fp);
   printf("Archivo guardado");
 return 0;}
