#include <stdio.h>

struct carro{
	char nome[20],montadora[20];
	int kml;
};

int main(){
	struct carro c1,c2;
	printf("carro 1: ");
	scanf("%s %s %d", c1.nome,c1.montadora,&c1.kml);
	printf("carro 2: ");
	scanf("%s %s %d", c2.nome,c2.montadora,&c2.kml);
	if(c1.kml > c2.kml){
		printf("%s e mais eficiente",c1.nome);
	}else if(c1.kml < c2.kml){
		printf("%s e mais eficiente",c2.nome);
	}
	return 0;
}
