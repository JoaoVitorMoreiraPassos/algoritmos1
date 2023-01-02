#include <stdio.h>
#include <math.h>

void equacao(int a, int b, int c){
	float d = (b*b) -4 * a * c;
    if(d < 0){
        printf("Impossivel calcular\n");
    }else if(a == 0){
        printf("Impossivel calcular\n");
    }else{
        float x = ((b*(-1)) + sqrt(d))/(2*a);
        float xx = ((b*(-1)) - sqrt(d))/(2*a);
        printf("R1 = %.5f\n",x);
        printf("R2 = %.5f\n",xx);
    }
}
 
int main() {
 
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    equacao(a,b,c);
 
    return 0;
}
