#include <stdio.h>

int menor2(int a, int b){
	if(a > b){
		return b;
	}else if(b > a){
		return a;
	}
}

int main(){
	int a,b,menor;
	printf("numero 1: ");
	scanf("%d",&a);
	printf("numero 2: ");
	scanf("%d",&b);
	menor = menor2(a,b);
	printf("menor: %d",menor);
	
	return 0;
}
