#include <stdio.h>
void tempo(int s){
	int m= 0, h = 0;
	if(s > 60){
    	while(s > 60){
    		m +=1;
    		s = s - 60;
		}
	}
	if(m > 60){
		while(m > 60){
			h += 1;
			m = m - 60;
		}
	}
	printf("%d:%d:%d\n",h,m,s);
}
 
int main() {
 
    int s;
    scanf("%d",&s);
    tempo(s);
    
 
    return 0;
}
