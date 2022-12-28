#include<stdio.h>
#include<string.h>
int main(){
	char cadena[200];
	scanf("%s",cadena);
	int x=strlen(cadena);
	int cont=0;
	for (int i = 0; i < x; i++)
	{
		if(cadena[i]=='a')
		{
		cont++;
		}
	}
	printf("%d \n",cont);
	return 0;
}
