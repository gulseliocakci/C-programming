#include<stdio.h>
#define PI 3.14
int main(void){
	int r, pi;
	float cevre, alan;
	
	printf("cemberin yaricapini giriniz\n");
	scanf("%d", &r);
	//pi=3;
	
	cevre=2*PI*r;
	printf("cemberin cevresi: %.2lf\n", cevre);
	
	alan=PI*r*r;
	printf("cemberin alani: %.2lf\n", alan);
	
	
	
	return(0);
}
