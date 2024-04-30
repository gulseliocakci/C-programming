#include<stdio.h>
int main(void){
	int puan;
	printf("luften notunuzu giriniz.\n");
	scanf("%d", &puan);
	
	if((puan<=100) && (puan>=0)){
		if(puan<50)
			printf("harf notunuz F'dir.\n");
		else if(puan<60)
			printf("harf notunuz E'dir.\n");
		else if(puan<70)
			printf("harf notunuz D'dir.\n");
		else if(puan<80)	
			printf("harf notunuz C'dir.\n");	
		else if(puan<90)
			printf("harf notunuz B'dir.\n");
		else if(puan<=100)	
			printf("harf notunuz A'dir.\n");
	}	
	else
		printf("yanlis bir not girdiniz.\n");
	
	return(0);
}
