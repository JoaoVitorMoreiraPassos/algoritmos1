#include <stdio.h>
#include <stdlib.h>

int main(){ 
	int vetor[10],maior=0,menor = 0,c;
	for(c = 0;c < 10;c++){
		printf("digite um numero: ");
		scanf("%d",&vetor[c]);
	}
	for(c = 0; c < 10; c ++){
		if (c == 0){
		maior = vetor[c];
		menor = vetor[c];
		}
		if(vetor[c] > maior){
			maior = vetor[c];
		}else if(vetor[c] < menor){
			menor = vetor[c];
		}
	}
	for(c = 0; c < 10; c ++){
		if(vetor[c] == maior){
			vetor[c] = menor;
		}else if(vetor[c] == menor){
			vetor[c] = maior;
		}
	}
	for(c = 0; c < 10; c ++){
		printf("%d - ",vetor[c]);
	}
	return 0;
}
