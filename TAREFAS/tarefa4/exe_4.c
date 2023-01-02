#include <stdio.h>

int main(){
    float val_compra,reajuste;
    printf("Valor de compra: R$");
    scanf("%f",&val_compra);
    if(val_compra < 20){
        reajuste = 0.45;
    }else{
        reajuste = 0.30;
    }
    printf("Preco de revenda: R$%.2f",(val_compra+(val_compra*reajuste)));
    return 0;
}
