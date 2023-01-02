#include <stdio.h>
 
int main() {
 
    int n,i,j;
    while(1){
        scanf(" %d",&n);
        if(n == 0){
            break;
        }
        int matriz[n][n];
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                matriz[i][j] = 1;
            }
        }
        if(n > 2){
            int x=1, y = n-1, v = 2;
            while(y > n / 2){
                for(i = x; i < y; i++){
                    for(j = x; j < y; j++){
                        matriz[i][j] = v;
                    }
                }
                x++;
                y--;
                v ++;
            }
        }
        for(i = 0; i < n; i ++){
            for(j = 0; j < n; j++){
            	if(j == 0){
            		printf("%3d",matriz[i][j]);
				}else{
					printf(" %3d",matriz[i][j]);
				}
            }
            printf("\n");
        }
    }
 
    return 0;
}
