#include <stdio.h>

int main(){
    int man0, man1, woman0, woman1,man_ol,man_young,woman_ol,woman_young;
    printf("Idades dos 2 homens:");
    scanf("%d %d",&man0,&man1);
    printf("Idades das 2 mulheres:");
    scanf("%d %d",&woman0,&woman1);
    if(man0 > man1){
        man_ol = man0;
        man_young = man1;
    }else if(man0 < man1){
        man_ol = man1;
        man_young = man0;
    }if(woman0 > woman1){
        woman_ol = woman0;
        woman_young = woman1;
    }else if(woman0 < woman1){
        woman_ol = woman1;
        woman_young = woman0;
    }
    printf("Soma do homem mais velho e mulher mais nova:   %d \n",man_ol+ woman_young);
    printf("Produto do homem mai novo e mulher mais velha: %d", man_young * woman_ol);
}