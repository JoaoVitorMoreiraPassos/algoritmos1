#include <stdio.h>

int main(){
	int i1,i2;
	printf("Insira a idade da pessoa 1:");
	scanf("%d",&i1);
	printf("Insira a idade da pessoa 2:");
	scanf("%d",&i2);
	
	if(i1 > i2){
		printf("a pessoa 1 e mais velha.");
	}else if(i1 < i2){
		printf("a pessoa 2 e mais velha.");
	}else{
		printf("as duas pessoas tem a mesma idade.");
	}
	return 0;
	
}
