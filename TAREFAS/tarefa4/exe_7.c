#include <stdio.h>

int main(){
    float quant, preco;
    printf("Quantidade de macas:");
    scanf("%f",&quant);
    if(quant < 12){
        preco = 1.30;
    }else{
        preco = 1.00;
    }
    printf("Preco: R$%.2f",preco*quant);
    return 0;
}
