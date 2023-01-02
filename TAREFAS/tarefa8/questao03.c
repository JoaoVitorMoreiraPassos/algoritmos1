#include <stdio.h>

struct informacoes{
	char nome[30];
	int codigo;
	float preco;
};

int main(){
	int n;
	printf("numero de produtos: ");
	scanf("%d",&n);
	setbuf(stdin,NULL);
	struct informacoes produto[n];
	for(int i = 0; i < n; i ++){
		setbuf(stdin,NULL);
		printf("nome: ");
		scanf("%[^\n]s",produto[i].nome);
		setbuf(stdin,NULL);
		printf("codigo: ");
		scanf("%d",&produto[i].codigo);
		setbuf(stdin,NULL);
		printf("preco: R$");
		scanf("%f",&produto[i].preco);
		printf("<------------------->\n");
	}
	int codigo, product,access = 0;
	printf("insira o codigo do produto desejado: ");
	scanf("%d",&codigo);
	printf("<------------------->\n");
	setbuf(stdin,NULL);
	for(int i = 0; i < n; i ++){
		if(codigo == produto[i].codigo){
			access = 1;
			product = i;
		}
	}
	if(access == 1){
		printf("PRODUTO ------------- PRECO\n");
		printf("%s -------------- R$%.2f",produto[product].nome,produto[product].preco);
	}else{
		printf("Codigo invalido\n");
	}
	
	return 0;
}
