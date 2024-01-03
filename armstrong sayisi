#include<stdio.h>
#include<math.h>
int main(void){
	int basamak[4];
	int i, toplam, yuz, on, bir;
	
	printf("Uc basamakli bir sayinizin tamamini daha sonra da ");
	printf("yuzler basamagindan baslayarak her basamagi ayri giriniz (entera basarak)\n");
	for(i=0;i<4;i++){
		scanf("%d",&basamak[i]);
	}
	yuz=pow(basamak[1],3);
	on=pow(basamak[2],3);
	bir=pow(basamak[3],3);
	toplam=yuz+on+bir;
	
	if(toplam==basamak[0])
		printf("girdiginiz sayi bir armstrong sayisidir.\n");
	else
		printf("girdiginiz sayi bir armstrong sayisi degildir.\n");
	
	return(0);
}
