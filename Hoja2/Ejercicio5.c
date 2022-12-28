#include<stdio.h>
int main(){
	int num1;
	printf("Introduce un número de tres cifras:\n");
	scanf("%d",&num1);
	int num2;
	printf("Introduce un número de dos cifras:\n");
	scanf("%d",&num2);
	int y=num2%10;
	int x=num2-y;
	int num3=num1*x;
	int num4=num1*y;
	int num5=num3+num4;
	printf("%d*%d\n=\n",num1,num2);
	printf("  %d*%d\n+ %d*%d\n=\n",num1,x,num1,y);
	printf("  %d\n+ %d\n=\n",num3,num4);
	printf("  %d\n",num5);
	return 0;
}
