#include <stdio.h>
#include <stdlib.h>

int main(){
	int c;
	float altura[30],massa[30], imc= 0;
	
	for(c = 0; c < 30; c ++){
		altura[c] = 0;
		massa[c] = 0;
		while(massa[c]<50){
		massa[c] = rand() % 10000;
		massa[c] = massa[c] / 100 + 1;
		}
		while(altura[c] < 1.50){
		altura[c] = rand() % 100;
		altura[c] = altura[c] / 100 + 1;
	}
	}
	printf("	  MASSA| ALTURA| IMC\n");
	for(c = 0; c < 30; c ++){
		imc = massa[c]/(altura[c] * altura[c]);
		printf("Pessoa %d: %.2f - %.2f = %.2f\n",c+1,massa[c],altura[c],imc);
	}
	return 0;
}
