#include <stdio.h>
#include <stdbool.h>

int main(){
    float n1, n2;
    char processo;
    bool exit = false;
    while (exit == false){
        printf("\n--------------------\nMENU\n--------------------");
        printf("\nA - Maior Numero\nB - Menor Numero\nC - Media Aritmetica\nD - Finalizar");
        printf("\nNumero1: ");
        scanf("%f",&n1);
        printf("Numero 2: ");
		scanf("%f",&n2);
        printf("processo: ");
        scanf(" %c",&processo);
        printf("--------------------");
        switch (processo){
        case 'a':
        case 'A':
            if(n1>n2){
                printf("\nO maior e: %.2f",n1);
            }else if(n1<n2){
                printf("\nO maior e: %.2f",n2);
            }else{
                printf("\nOs dois são iguais.\n");
            }
            break;
        case 'b':
        case 'B':
            if(n1<n2){
                printf("\nO menor e: %.2f",n1);
            }else if(n1>n2){
                printf("\nO menor e: %.2f",n2);
            }else{
                printf("\nOs dois são iguais.");
            }
            break;
        case 'c':
        case 'C':
            printf("\nMedia: %.2f",(n1+n2)/2);
            break;
        case 'd':
        case 'D':
            exit = true;
            printf("\nEncerrado.");
            break;
        default:
            printf("\nValor incorreto, tente novamente.");
            break;
        }
    }
    return 0;
}
