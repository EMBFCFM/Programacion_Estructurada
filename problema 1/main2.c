#include <stdio.h>
#include <stdlib.h>

int muestra(int x, int y)
 {
     if(y==0)
     {
	 
         return 0;
     }else{
	 
         return(x * muestra(x,y-1);}
}
int main() {
	int x,y,z;
	printf("Ingresa x");
	scanf("%d",x);
	printf("Ingresa y");
	scanf("%d",y);
	z=muestra(x,y);
	return 0;
}
