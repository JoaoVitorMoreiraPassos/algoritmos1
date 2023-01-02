#include <stdio.h>

int main(){
    float sal,reajuste = 0;
    printf("Salario atual: R$");
    scanf("%f",&sal);
    if(sal > 600 && sal <= 1200){
        reajuste = 0.20;
    }else if(sal > 1200 && sal <= 2000){
        reajuste = 0.25;
    }else if(sal > 2000){
        reajuste = 0.30;
    }
    printf("Desconto do INSS: R$%.2f",sal * reajuste);
    return 0;
}