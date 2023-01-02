#include <stdio.h>

int main(){
	char nome[50],temp[50];
	int c,x = 0,tam = 0;
	scanf("%s",nome);
	while (nome[tam] != 0){
		temp[tam] = nome[tam];
		tam ++;
	}
	printf("------\n");
	for(c = 0;c <= tam*2; c++){
		if(c % 2 == 0 || c == 0){
			nome[c] = temp[x];
			nome[c+1] = ' ';
			x++;
		}
	}
	x = 0;
	while(nome[x] != 0){
		x ++;
	}
	for(c = 0; c < x; c ++){
		printf("%c",nome[c]);
	}
	return 0;
}
