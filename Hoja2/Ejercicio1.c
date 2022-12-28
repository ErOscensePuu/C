#include<stdio.h>
int main(){
	int seg;
	printf("¿Cuantos segundos han pasado desde las 00:00 horas?\n");
	scanf("%d",&seg);
	int horas=seg/3600;
	int min=(seg%3600)/60;
	int segu=(seg%3600)%60;
	printf("Son las %d:%d:%d.\n",horas,min,segu);
	return 0;
}
