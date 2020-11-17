#include<stdio.h>
#include<stdlib.h>

int Fun_fibonacci(int numero){
	if(numero==0||numero==1){
		return 1;
	}else{
		return Fun_fibonacci(numero-1)+Fun_fibonacci(numero-2);
	}
}

int main(){
	int v=0;
	do{
		printf("Ingrese un valor para calcular el termino fibonacci\n");
		scanf("%d",&v);
	}while(v>40||v<1);
printf("\nEl Valor: %d\t Valor de fibonacci:%d",v,Fun_fibonacci(v));

return 0;
}


