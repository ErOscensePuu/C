#include<stdio.h>
#include<string.h>
int num(int x){
	x=x*3;
	return x;
}
void Funcion(int *fun){
	int x=*fun;
	x=x*3;
	*fun=x;
}
void main(){
	int mul=3;
	int mul2=4;
        int y=num(mul);
	Funcion(&mul2);
	printf("%d %d\n",y,mul2);
         
}

