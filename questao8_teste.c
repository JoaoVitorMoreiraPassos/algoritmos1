#include <stdio.h>

int main(){
    int n = 1,nn = 1,c;
    for (c =0 ;c < 20; c ++){
		printf("%d\n",n);
		nn = n - nn;
		n = n + nn;
	
    }
    return 0;
}
