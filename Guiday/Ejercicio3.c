#include<stdio.h>
int main(){
 	int día;
	scanf("%d",&día);
	printf("%d \n",día);
	switch(día){
		case 1:
		printf("Es lunes\n");
		break;
		case 2:
                printf("Es Martes\n");
                break;
		case 3:
                printf("Es Miercoles\n");
                break; 
		case 4:
                printf("Es Jueves\n");
                break;
		case 5:
                printf("Es Viernes\n");
                break;
		case 6:
                printf("Es Sabado\n");
                break;
		case 7:
                printf("Es Domingo\n");
                break;
		default:
		printf("Es invalido\n");
		break;
	}
	return 0;
}
