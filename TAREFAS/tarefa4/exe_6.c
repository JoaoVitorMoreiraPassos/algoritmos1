#include <stdio.h>
#include <stdbool.h>

int main(){
    int lugar, passagem;
    float preco;
    bool tf;
    tf = false;
    printf("-------------------\nDestino\n-------------------\n");
    printf("Norte --------[0]\nNordeste -----[1]\nCentro-Oeste -[2]\nSul ----------[3]\n");
    printf("Escolha:");
    scanf("%d",&lugar);
    printf("-------------------\nPassagem\n-------------------\nSomente ida --[0]\nIda e volta --[1]\n");
    printf("Escolha:");
    scanf("%d",&passagem);
    if(lugar == 0){
        if(passagem == 0){
            preco = 500;
        }else if(passagem == 1){
            preco = 900;
        }
    }else if(lugar == 1){
       if(passagem == 0){
            preco = 350;
        }else if(passagem == 1){
            preco = 650;
        }
    }else if(lugar == 2){
        if(passagem == 0){
            preco = 350;
        }else if(passagem == 1){
            preco = 600;
        }
    }else if (lugar == 3){
        if(passagem == 0){
            preco = 300;
        }else if(passagem == 1){
            preco = 550;
        }
    }else{
        tf = true;
        printf("Voce informou algum dado incorretamente!");
    }
    if(tf == false){
        printf("-------------------\nO preco da sua passagem e: R$%.2f \n--------------------------------------",preco);
    }
    return 0;
}
