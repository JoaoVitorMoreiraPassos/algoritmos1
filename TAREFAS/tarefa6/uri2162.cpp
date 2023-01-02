#include <stdio.h>
#include <stdbool.h>
 
int main() {
 
    int n,c;
    scanf("%d",&n);
    int h[n];
    bool tf = true;
    for(c = 0; c < n; c ++){
    	scanf("%d",&h[c]);
	}
    for(c = 0; c < n; c ++){
    	printf("c: %d - h[c]: %d \n",c,h[c]);
        if(c > 0){
            if(h[c] == h[c-1]){
                tf = false;
            }
        }
    }
    if(tf == false){
        printf("0");
    }else{
        printf("1");
    }
    
 
    return 0;
}
