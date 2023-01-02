#include <stdio.h>
#define m 2
#define n 30

int main() {
	int i, j;
	char nome[m][n];
	
	for(i=0;i<m;i++){
		scanf(" %[^\n]s", nome[i]);
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(nome[i][j] != ' '){
				printf("%c", nome[i][j]);
			}else{
				j = n;
			}
		}
		printf("\n");
	}
		
	return 0;
}
