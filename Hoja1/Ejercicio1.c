#include<stdio.h>
int main(){
	 int horas=75936/3600;
	 int min=(75936%3600)/60;
	 int seg=(75936%3600)%60;
	 printf("La hora es %d/%d/%d\n",horas,min,seg);
	return 0;
}
