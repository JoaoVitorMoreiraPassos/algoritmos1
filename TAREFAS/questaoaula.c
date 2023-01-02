#include <stdio.h>
#include <stdio.h>

int main(){
	char nome[5][40];
	float notas[5][3];
	int i,j,cont;
	for(i = 0; i < 5; i ++){
		printf("nome:");
		scanf(" %[^\n]s",nome[i]);
		printf("\n");
		for(j = 0; j < 3; j ++){
			printf("notas [%f]: ",j+1);
			scanf(" %f",&notas[i][j]);
			printf("\n");
		}
	}
	printf("\n");
	cont = 0;
	for(i = 0; i < 5; i ++){
		while(nome[i][cont] != ' '){
			printf("%c",nome[cont]);
			cont ++;
		}
		for(j = 0; j < 3; j ++){
			printf("%f - ",notas[i][j]);
		}
		printf("\n");
	}
	return 0;
}
