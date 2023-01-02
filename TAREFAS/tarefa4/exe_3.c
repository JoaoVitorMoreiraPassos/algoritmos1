#include <stdio.h>
#include <math.h>

int main(){
    int x,n,alg;
    printf("Digite aqui: ");
    scanf("%d",&n);
    for(x=0;x<5; x=x+1){
        alg = n % 10;
        if(alg % 2 == 0){
            printf("%d e um numero par \n",alg);
        }else{
            printf("%d e um numerio impar \n",alg);
        }
        n = n / 10;
    }
    return 0;
}
