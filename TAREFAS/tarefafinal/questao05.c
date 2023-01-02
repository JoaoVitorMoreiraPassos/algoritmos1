#include <stdio.h>
#include <string.h>

int conta_string(char *linha){
	int tam = 0;
	while(linha[tam] != '\0'){
		tam ++;
	}
	return tam;
}

int main(){
	
	int n,i;
	scanf("%d",&n);
	for(i = 0; i < n; i ++){
		char linha[102];
		scanf("%s", linha);
		int tam,c;
		tam = conta_string(linha);
		char linha_invertida[tam];
		int cont = 0;
		for(int j = tam/2-1; j >=0; j --){
			printf("i: %d - linha[i]: %c\n", j, linha[j]);
			linha_invertida[cont] = linha[j];
			cont ++;
		}
		for(int j = tam-1; j >= tam/2; j --){
			printf("i: %d - linha[i]: %c\n", j, linha[j]);
			linha_invertida[cont] = linha[j];
			cont ++;
		}
		linha_invertida[cont] = '\0';
		printf("%s\n", linha_invertida);
	}		
	return 0;
}
