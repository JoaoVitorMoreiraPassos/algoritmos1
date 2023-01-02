#include <stdio.h>

int main(){
    int a, b, result = 1,c;
    printf("base: ");
    scanf("%d",&a);
	printf("expoente: ");
	scanf("%d",&b);
    for(c = 0; c < b; c  ++){
        result *= a;
    }
    printf("resultado: %d",result);
    return 0;
}
