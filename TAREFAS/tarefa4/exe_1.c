#include <stdio.h>

int main(){
    float n1, n2, n3, n4, m;
    printf("notas:");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    m = ((n1*1)+(n2*2)+(n3*3)+(n4*4))/10;
    printf("Media Ponderada:%.2f",m);
    return 0;
}
