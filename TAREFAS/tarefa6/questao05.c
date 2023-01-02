#include <stdio.h>

int main(){
	int vetor[10],iguais[10],c,i,x = 0,contc=0,conty = 0;
	for(c = 0; c < 10;c ++){
		printf("digite um numero: ");
		scanf("%d",&vetor[c]);
	}
	for(c= 0; c < 10; c ++){
		for(i = 0; i < 10; i ++){
			if(vetor[c] == vetor[i] && c != i ){
				iguais[x] = vetor[i];
				x ++;
				break;
			}
			conty ++;
		}
		contc ++;
	}
	int tam = 0;
	while(iguais[tam] > 0){
		tam ++;
	}
	if(tam > 2){
		for(c = 0; c < x; c ++){
			printf("%d - ",iguais[c]);
		}
	}
	return 0;
}
