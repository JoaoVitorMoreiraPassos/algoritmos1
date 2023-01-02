#include <stdio.h>

void matriz(int n){
	int matriz[n][n],l1 = 0,l2 = n-1,i,j;
	    for(i = 0; i < n; i ++){
	        for(j = 0; j < n; j ++){
	            if(j == l2){
	                matriz[i][j] = 2;
	            }else if(j == l1){
	                matriz[i][j] = 1;
	            }else{
	                matriz[i][j] = 3;
	            }
	        }l1 ++;
	        l2 --;
	    }
	    for(i = 0; i < n; i ++){
	        for(j = 0; j < n; j++){
	            printf("%d",matriz[i][j]);
	        }
	        printf("\n");
	    }
}
 
int main() {
 	int c;
	int n;
	while(scanf("%d",&n) != '\0'){
	    matriz(n);
	}
    return 0;
}
