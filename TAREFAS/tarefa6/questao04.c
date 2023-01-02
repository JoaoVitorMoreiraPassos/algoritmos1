#include <stdio.h>

int main(){
	int vetor[12], x, y,c;
	for(c = 0; c < 12;c ++){
		printf("digite um numero:");
		scanf("%d",&vetor[c]);
	}
	printf("----------------\n");
	printf("posicao x(1-12): ");
	scanf("%d",&x);
	printf("posicao y(1-12): ");
	scanf("%d",&y);
	printf("soma: %d",vetor[x-1]+vetor[y-1]);
	
	return 0;
}
