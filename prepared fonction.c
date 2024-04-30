#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char str[]="bu cirkin bir cicek";
	char *gstr;
	
	puts(str);
	
	gstr=strstr(str,"cirkin");
	printf("%s\n",gstr);
	
	strncpy(gstr,"renkli",6);
	puts(str);
		
	return(0);
}
