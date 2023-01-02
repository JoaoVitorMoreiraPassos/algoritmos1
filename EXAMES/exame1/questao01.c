#include <stdio.h>

int main(){
    double n, cont = 1;
    scanf("%d",&n);
    for (int x = 0; x < n; x ++){
        printf("%d %d %d\n",cont,cont*cont,cont*cont*cont);
        cont ++;
    }
    return 0;
}