#include <stdio.h>

int main(){
    float sal, juros,total;
    scanf("%f%f",&sal,&juros);
    total = sal+(sal*(juros/100));
    printf("%.2f",total);
    return 0;
}
