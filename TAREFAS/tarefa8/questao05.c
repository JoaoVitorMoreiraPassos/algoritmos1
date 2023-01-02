#include <stdio.h>
#include <math.h>

void calculaEquacao(float a,float b,float c){
	int delta = (b*b) - 4 * a * c;
	if(delta < 0){
		printf("raies nao sao numeros reais");
	}else{
		float x1 = ((b*(-1)) + pow(delta,0.5))/ (2 * a);
		float x2 = ((b*(-1)) - pow(delta,0.5))/ (2 * a);
		printf("x1: %.2f\nx2: %.2f",x1,x2);
	}
}

int main(){
	float a,b,c;
	printf("valor de a: ");
	scanf("%f", &a);
	printf("valor de b: ");
	scanf("%f", &b);
	printf("valor de c: ");
	scanf("%f", &c);
	calculaEquacao(a,b,c);
	
	return 0;
}
