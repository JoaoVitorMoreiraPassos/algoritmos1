#include <stdio.h>
long long int fibonacci(int n){
	long long int x = 0,xx = 1,y,c;
    for (c = 0 ;c <= n; c ++){
        if(c <=1){
        	y = c;
		}else{
	    	y = x + xx;
	    	x = xx;
	    	xx = y;
    	}
	}
	return y;
        
}
int main(){
    long long int escolhido,loop,cont,numero = 0;
    scanf("%lld",&loop);
    while(1){
        if(cont > loop){
            break;
        }
        scanf("%lld",&escolhido);
        numero = fibonacci(escolhido);
        printf("Fib(%lld) = %lld\n",escolhido,numero);
        cont ++;
    }
    return 0;
}
