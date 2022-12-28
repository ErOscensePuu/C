#include<stdio.h>
int main(){
 	int num;
 	printf("Introduce un número:\n");
 	scanf("%d",&num);
 	int unidades=2*(num%10);
	int centenas=2*(num/100);
	int decenas=2*((num/10)%10);
	if (unidades>=10)
	{
		unidades=unidades%10;
	}
	if (centenas>=10)
        {       
		centenas=centenas%10;
                decenas++;
        }   
	if (decenas>=10)
        {       
		decenas=decenas%10;
                unidades++;
        }   
	printf("El inverso del número es: %d%d%d\n",unidades,decenas,centenas);
	return 0;
}
