#include <stdio.h>

int main(){
	char palavra[46];
	int tam = 0, c = 0;
	scanf("%s",palavra);
	while (palavra[tam] != 0){
		tam ++;
	}
	for(c = 0; c < tam; c ++){
		if(palavra[c] >= 97 && palavra[c]<= 122){
			palavra[c] -= 32;
			printf("%c",palavra[c]);
		}else{
			printf("%c",palavra[c]);
		}
	}
	return 0;
}
