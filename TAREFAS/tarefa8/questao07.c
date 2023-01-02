#include <stdio.h>

float calcImc(float massa,float altura){
	float imc = massa/(altura * altura);
	return imc;
}

int main(){
	float massa,altura;
	printf("massa: ");
	scanf("%f",&massa);
	printf("altura: ");
	scanf("%f",&altura);
	float imc = calcImc(massa,altura);
	if(imc > 25){
		printf("acima do peso.");
	}
	
	return 0;
}
