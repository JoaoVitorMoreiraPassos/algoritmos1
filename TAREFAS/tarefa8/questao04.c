#include <stdio.h>
#include <math.h>

struct cordenadas{
	float x,y;
};

int main(){
	struct cordenadas ponto1,ponto2;
	printf("ponto 1(X): ");
	scanf("%f",&ponto1.x);
	printf("ponto 1(Y): ");
	scanf("%f",&ponto1.y);
	printf("ponto 2(X): ");
	scanf("%f",&ponto2.x);
	printf("ponto 2(Y): ");
	scanf("%f",&ponto2.y);
	float d;
	d = pow(pow(ponto2.x - ponto1.x,2) + pow(ponto2.y - ponto1.y,2),0.5);
	printf("%.2f",d);
	
	return 0;
}
	
