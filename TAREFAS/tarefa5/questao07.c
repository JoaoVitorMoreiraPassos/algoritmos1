#include <stdio.h>
#include <stdbool.h>

int main(){
    char sexo;
    int quant_man = 0, quant_woman = 0;
    bool exit = false;
    while (exit == false){
        printf("Sexo: ");
        scanf(" %c", &sexo);
        switch (sexo){
        case 'm':
            quant_man +=1;
            break;
        case 'f':
            quant_woman +=1;
            break;
        case '@':
            exit = true;
            break;
        default:
            break;
        }
    }
    printf("Quantidade de homens: %d \nQuantidade de Mulheres: %d",quant_man,quant_woman);
    return 0;
}