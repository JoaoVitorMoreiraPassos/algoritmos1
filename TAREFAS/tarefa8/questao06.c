#include <stdio.h>
#include <math.h>

void pot(int x, int n){
	int result = pow(x,n);
	printf("resultado: %d",result);
}

int main(){
	int x,n;
	printf("base: ");
	scanf("%d",&x);
	printf("expoente: ");
	scanf("%d",&n);
	pot(x,n);
	
	return 0;
}
