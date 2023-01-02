#include <stdio.h>

struct aluno{
	char nome[30];
	float ira;
	int begin_year;
};

int main(){
	int n;
	float soma = 0;
	printf("numero de alunos: ");
	scanf("%d",&n);
	struct aluno ficha[n];
	for(int i = 0; i < n; i++){
		setbuf(stdin,NULL);
		printf("nome: ");
		scanf("%[^\n]s",ficha[i].nome);
		setbuf(stdin,NULL);
		printf("ira: ");
		scanf("%f",&ficha[i].ira);
		setbuf(stdin,NULL);
		printf("ano inicial: ");
		scanf("%d",&ficha[i].begin_year);
		printf("<----------------->\n");
	}
	int veterano = 0,ano_veterano = 0;
	for(int i = 0; i < n; i++){
		if(i == 0){
			ano_veterano = ficha[i].begin_year;
		}
		if(ficha[i].begin_year < ano_veterano){
			veterano = i;
		}
		soma += ficha[i].ira;
	}
	printf("media turma: ");
	printf("%.2f\n",soma/n);
	printf("ira veterano: ");
	printf("%.2f\n",ficha[veterano].ira);
	
	return 0;
}
