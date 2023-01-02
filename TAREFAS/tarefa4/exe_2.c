#include <stdio.h>

int main(){
    float sal, juros, total;
    printf("Salario:");
    scanf("%f",&sal);
    printf("Juros:");
    scanf("%f",&juros);
    total = sal+(sal*(juros/100));
    printf("Reajuste: %.2f",total);
    return 0;
};