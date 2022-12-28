#include<stdio.h>
int main(){
	int deposito;
	printf("Introduce el valor del depósito:\n");
	scanf("%d",&deposito);
	int interes;
	 printf("Introduce el valor del interés:\n");
	scanf("%d", &interes);
	double a=interes/100.0;
	double beneficio=deposito*a;
	printf("El depósito es de: %d$, y el interés es de:%d por lo tanto el beneficio es de: %lf.\n",deposito,interes,beneficio);
	return 0;
}
