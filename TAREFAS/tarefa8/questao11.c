#include <stdio.h>


struct data{
	int dd, mm, aa;
};

int main(){
	struct data data1, data2;
	int quantdias1[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int quantdias2[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	printf("exemplo de data: 01 01 2001\n");
	printf("digite a data 1: ");
	char date1[10],date2[10];
	scanf("%d %d %d",&data1.dd,&data1.mm,&data1.aa);
	printf("digite a data 2: ");
	scanf("%d %d %d",&data2.dd,&data2.mm,&data2.aa);
	int dias1 = 0;
	for(int c = 0; c < data1.aa; c++){
		if(c % 4 == 0){
			dias1 += 366;
		}else{
			dias1 += 365;
		}
	}
	for(int c = 0; c < data1.mm; c ++){
		if(data1.aa % 4 == 0){
			dias1 += quantdias2[c];
			if(c == data1.mm - 1){
				dias1 -= (quantdias2[c]-data1.dd);
			}
		}else{
			dias1 += quantdias1[c];
			if(c == data1.mm - 1){
				dias1 -= (quantdias1[c]-data1.dd);
			}
		}	
	}
	int dias2 = 0;
	for(int c = 0; c < data2.aa; c++){
		if(c % 4 == 0){
			dias2 += 366;
		}else{
			dias2 += 365;
		}
	}
	for(int c = 0; c < data2.mm; c ++){
		if(data2.aa % 4 == 0){
			dias2 += quantdias2[c];
			if(c == data2.mm - 1){
				dias2 -= (quantdias2[c]-data2.dd);
			}
		}else{
			dias2 += quantdias1[c];
			if(c == data2.mm - 1){
				dias2 -= (quantdias1[c]-data2.dd);
			}
		}
	}	
	int dias;
	if(dias2 - dias1 < 0){
		dias = (dias2 - dias1) * -1;
	}else{
		dias = dias2 - dias1;
	}
	if(dias > 40){
		printf("ultrapassa quarentena");
	}else{
		printf("%d dias.",dias);
	}
	
	
	return 0;
}
