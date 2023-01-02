#include <stdio.h>

int main(){
    int i, n, classe;
	float abono;
    printf("Numero de funcionarios: ");
    scanf("%d", &n);
    for(i = 0 ; i < n; i ++){
        printf("\nClasse: ");
        scanf("%d", &classe);
        printf("Abono: ");
        scanf("%f",&abono);
        switch (classe){
        case 1:
            printf("O desconto e de: R$%.2f",abono*0.2);
            break;
        case 2:
            printf("O desconto e de: R$%.2f",abono*0.25);
            break;
        case 3:
            printf("O desconto e de: R$%.2f",abono*0.3);
            break;
        default:
            printf("Voce informou um valor incorreto.");
            break;
        }
        printf("\n-------------------");
    }
    return 0;
}
