#include <stdio.h>

int menor2(int a, int b){
	if(a > b){
		return b;
	}else if(b > a){
		return a;
	}
}
int menor3(int a, int b, int c){
	int d = menor2(a,b);
	if (c < d){
		return c;
	}else if(d < c){
		return d;
	}
}

int main(){
	int vetor[3];
	for(int c = 0; c < 3; c ++){
		printf("numero %d: ",c+1);
		scanf("%d",&vetor[c]);
	}
	int menor = menor3(vetor[0],vetor[1],vetor[2]);
	printf("menor: %d",menor);
	
	return 0;
}
