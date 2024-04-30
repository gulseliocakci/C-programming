#include<stdio.h>
int i;
int fonk(int a[]);
int main(void){
	int a[5];
	
	printf("toplamak istediginiz 5 sayiyi giriniz.\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	fonk(a);
	
	return(0);
}
int fonk(int a[]){
	int toplam;
	for(i=0;i<5;i++)
		toplam+=a[i];
	printf("toplam=%d",toplam);
}
