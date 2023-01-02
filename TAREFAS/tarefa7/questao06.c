#include<stdio.h>

int main(){
    int i,j,n,x,y,l;
    while(1);{
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int matriz[n][n];
        x=1;
        for(i = 0;i < n;i++){
            x=i+1;
            y=2;
            for(j = 0;j <= i;j++,x--){
                matriz[i][j]=x;
            }
            for(j=i+1;j<n;j++,y++){
                matriz[i][j]=y;
            }
            x++;
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(j==0)printf("%3d",matriz[i][j]);
                else printf(" %3d",matriz[i][j]);
            }printf("\n");
        }printf("\n");
    }
    return 0;
}