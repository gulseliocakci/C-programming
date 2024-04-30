#include<stdio.h>
int main(void){
	struct tarih{
		int gun;
		char ay[10];
		int yil;
	};
	struct ogrenci{
		char isim[15];
		int yas;
		float ortalama;
		char cinsiyet;
	};
	struct ogrenci kisi={"Elif",19,3.5,'K'};
	struct tarih dogum={28,"mayis",2004};
	
	
	printf("ogrencinin adi: %s\nyasi: %d\n",kisi.isim,kisi.yas);
	printf("ortalamasi: %.2lf\ncinsiyeti: %c\n",kisi.ortalama,kisi.cinsiyet);
	printf("dogum tarihi: %d %s %d",dogum.gun,dogum.ay,dogum.yil);
	
	return(0);
}
