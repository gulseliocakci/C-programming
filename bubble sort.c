#include<stdio.h>
int main(void){
	int dizi[10];
	int i, j, gecici;
	
	printf("10 elemanli dizinin elemanlarini giriniz.\n");
	for(i=0; i<10; i++){
		scanf("%d",&dizi[i]);
	}
	for(i=0; i<10; i++){
		j=i+1;
		if(dizi[j]<dizi[i]){
			gecici=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=gecici;
		}
	}
	printf("girdiginiz dizi elemanlarinin degerleri bubble sort algoritmasina gore yeniden duzenlenmistir.\n");
	for(i=0; i<10; i++){
		printf("%d ", dizi[i]);
	}
	return(0);
}
