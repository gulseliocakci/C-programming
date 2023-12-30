#include<stdio.h>
int main(void){
	int sayi, miktar;
	int bakiye=10000;
	
	do{
	printf("lutfen yapmak istediginiz islemi seciniz.\n para cekmek icin 1 e,\n para yatirmak icin 2 ye,\n bakiye sorgulamak icin 3 e,\n cikmak icin 4 e basiniz.\n");
	scanf("%d", &sayi);	
	
	if(sayi==1){
		printf("cekmek istediginiz para miktarini yaziniz.\n");
		scanf("%d",&miktar);
		if(miktar>bakiye)
			printf("hesabinizda bu kadar para bulunmamaktadir.\n");
		bakiye=bakiye-miktar;
		printf("paranizi bolmeden alabilirsiniz.\n");
	}
	if(sayi==2){
		printf("yatirmak istediginiz para miktarini yaziniz.\n");
		scanf("%d", &miktar);
		bakiye=bakiye+miktar;
		printf("parayi bolmeye koyabilirsiniz.\n");
	}
	if(sayi==3)
		printf("mevcut bakiyeniz %d dir.\n", bakiye);	
	}
    while(sayi<4 && sayi>0);
	
	if(sayi==4)
		printf("cikis yaptiniz.\n");
	else
		printf("yanlis bir sayi girdiniz.\n");
	
	return(0);
}
