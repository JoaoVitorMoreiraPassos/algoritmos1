#include <stdio.h>
int ganha(int n){
	int num_wins,cont,porta_carro;
	while(1){
        if(cont == n){
            break;
        }
        scanf("%d",&porta_carro);
        if(porta_carro != 1){
            num_wins ++;
        }
        cont ++;
    }
    return num_wins;
}
 
int main() {
 
    int loop,num_wins = 0;
    scanf("%d",&loop);
    num_wins = ganha(loop);
    printf("%d\n",num_wins);
    return 0;
}
