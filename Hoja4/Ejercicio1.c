#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	double num1;
	do{
	printf("Introduzca un número positivo:\n");
	scanf("%lf",&num1);
	if(num1<0)
	{
		printf("Por favor introduzca un número positivo o nulo\n");
	}
	}
	while(num1<0);
		double num2= sqrt(num1);
		printf("La raíz cuadrada de %lf es %lf\n",num1,num2);
return 0;
}
