#include <stdio.h>

int main(){
	int horas;
	printf("digite o numero de horas:");
	scanf("%d", &horas);
	printf("Minutos: %d\n",horas *60);
	printf("Segundos: %d",horas *3600);
	return 0;
}
