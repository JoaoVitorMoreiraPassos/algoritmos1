#include <stdio.h>

int main(){
	
	int n;
	while(1){
		int border = 1,i,j;
		scanf("%d",&n);
		if(n == 0){
			break;
		}
		int matriz[n][n];
		for(i = 0;i < n; i++){
			for(j = 0; i < n; i++){
				if(i == 0 || i == n -1 || j == 0 || j == n - 1){
					matriz[i][j] = 1;
				}else{
					border ++;
					matriz[i][j] = border;
				}
			}
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j ++){
				printf("%d | ",matriz[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
