#include <stdio.h>

void main(){
    int a[4], x;
	float m = 0;
    for (x = 0; x < 4; x ++){
    	printf("Nota %d: ",x+1);
    	scanf("%d",&a[x]);
	}
    for (x = 0; x < 4; x ++){
    	m += a[x];
	}
	printf("Media: %.2f", m/4);
}
