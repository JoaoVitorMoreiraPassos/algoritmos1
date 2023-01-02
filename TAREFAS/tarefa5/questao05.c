#include <stdio.h>

int main(){
    int i, c , n, p = 1, ma = 0, me = 0;
    printf("numero de repeticoes: ");
    scanf("%d",&c);
    for(i = 0; i < c; i ++){
    	printf("digite um numero: ");
        scanf("%d",&n);
        p *= n;
        if(i == 0){
            ma = n;
            me = n;
        }
        if(n > ma){
            ma = n;
        }
        if(n < me){
            me = n;
        }
    }
    printf("Produto: %d; Maior: %d; Menor:%d;",p,ma,me);
    return 0;
}
