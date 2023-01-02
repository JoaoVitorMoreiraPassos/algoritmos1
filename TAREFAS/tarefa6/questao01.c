#include <stdio.h>

int main(){
    char palavra[46];
    int tam = 0, c;
    scanf("%s",palavra);
    while (palavra[tam] != 0){
	    tam ++;
    }
    for(c = 0; c < tam; c ++){
        if(palavra[c] == 'r'){
            printf("l");
        }else if(palavra[c] == 'R'){
            printf("L");
        }else{
            printf("%c",palavra[c]);
        }
    }
    return 0;
}
