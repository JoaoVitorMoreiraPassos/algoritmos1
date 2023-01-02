#include <stdio.h>

struct dados{
	char nome[36];
	float altura,massa;
	int rg;
};

int main(){
	int n;
	printf("numero de pessoas: ");
	scanf("%d",&n);
	struct dados pessoa[n];
	for(int i = 0; i < n; i ++){
		setbuf(stdin,NULL);
		printf("  nome: ");
		scanf("%[^\n]s",pessoa[i].nome);
		setbuf(stdin,NULL);
		printf("  altura: ");
		scanf("%f",&pessoa[i].altura);
		setbuf(stdin, NULL);
		printf("  massa: ");
		scanf("%f",&pessoa[i].massa);
		setbuf(stdin, NULL);
		printf("  RG: ");
		scanf("%d",&pessoa[i].rg);
		printf("<------------------->\n");
	}
	int rg, access = 0, select;
	printf("insira o RG para consultar os dados: ");
	scanf("%d",&rg);
	for( int i = 0; i < n; i ++){
		if(rg == pessoa[i].rg){
			access = 1;
			select = i;
		}
	}
	printf("<------------------->\n");
	if(access == 1){
		printf("  nome: ");
		printf("%s\n",pessoa[select].nome);
		printf("  IMC: ");
		printf("%.2f\n",pessoa[select].massa/(pessoa[select].altura*pessoa[select].altura));	
	}else{
		printf("RG invalido\n");
	}
	
	return 0;
}
