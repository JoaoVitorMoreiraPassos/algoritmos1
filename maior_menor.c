#include <stdio.h>

int main(){
	int i1,i2,ma,me;
	scanf("%d",&i1);
	scanf("%d",&i2);
	if (i1> i2){
		ma = i1;
		me = i2;
	}else{
		me = i1;
		ma = i2;
	}
	printf("%d",me*ma+me);
	return 0;
}