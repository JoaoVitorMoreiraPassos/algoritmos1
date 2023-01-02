#include <stdio.h>
 
int main(){
    int x,y,cont,c, n;
    scanf("%d",&c);
    for(x = 0;x <= c; x ++){
        cont = 0;
        scanf("%d",&n);
        for (y = 1; y <=n; y ++){
            if(n % y == 0){
                cont = cont + 1;
            }
        }if(cont > 2){
            printf(n," eh primoo\n");
        }else{
            printf(n," nao eh primo\n");
        }
    }
    return 0;
}