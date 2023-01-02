#include <stdio.h>

int main(){
    long long int n, alg;
    printf("Digite um numero aqui: ");
    scanf("%d",&n);
    while(n > 0){
        alg = n % 10;
        if(alg % 2 == 0){
            printf("%d e par\n",alg);
        }else{
            printf("%d e impar\n",alg);
        }
        n /= 10;
    }       
    return 0;
}
