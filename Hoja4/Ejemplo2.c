#include<stdio.h>
int main(){
	double num;
	do{
	printf("Introduce notas del 0 al 10\n");
	scanf("%f",num);
	if(num<0 || num>10){
		printf("Por favor introduce un número del 0 al 10\n");
		boolean res=false;
	}
	while(res==false);
	}
	return 0;
}

