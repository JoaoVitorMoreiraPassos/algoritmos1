#include <stdio.h>
 
int main() {
 
    int input, senha = 2002,acess = 0;
    while (acess == 0){
        scanf("%d",&input);
        if(input == senha){
            acess = 1;
        }else{
            printf("Senha Invalida\n");
        }
    }
    printf("Acesso Permitido\n");
    return 0;
}