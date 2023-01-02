#include <stdio.h>

int main(){
	int vetor[10],reg = 10,c,i,x;
	for(c = 0; c < 10; c ++){
		printf("digite um numero: ");
		scanf("%d",&vetor[c]);
	}
	for(c = 0; c < reg; c ++){
		for(i = 0; i < 10; i ++){
			if(vetor[c] == vetor[i] && c !=i){
				for(x = c; x < 10;x ++){
					vetor[x] = vetor[x+1];
				}
				reg --;
				break;
			}
		}
	}
	for(c = reg; c < 10; c++){
		vetor[c] = '\0';
	}
	printf("\n");
	for(c = 0;c < 10; c++){
		printf("%d - \n",vetor[c]);
	}

	return 0;
}
