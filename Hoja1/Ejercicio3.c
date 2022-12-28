#include<stdio.h>
int main(){
	int unidades=753%10;
	int centenas=753/100;
	int decenas=(753/10)%10;
	printf("El inverso del número es: %d%d%d\n",unidades,decenas,centenas);
	return 0;
}
