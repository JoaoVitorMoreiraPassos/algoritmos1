#include <stdio.h>

int main(){
    int c;
    for(c = 1; c <=100; c ++){
        if(c % 5 == 0){
            printf("%d \n",c);
        }
    }
    return 0;
}