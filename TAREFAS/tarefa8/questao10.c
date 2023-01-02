#include <stdio.h>

void primo(int n){
	int cont = 0;
	for (int c = 2; c < n; c++){
		cont = 1;
		for (int i = 1; i < c; i ++){
			if(c % i == 0){
				cont ++;
			}
		}
		if(cont <= 2){
			printf("%d\n",c);
		}
	}
}

int main(){
	int n;
	printf("insira um numero: ");
	scanf("%d",&n);
	primo(n);
	
	return 0;
}
