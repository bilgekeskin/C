#include <stdio.h>
#include <string.h>
int main()
{
	//iki adet karakter dizisi olusturun
	//strcpy ve strncpy kullanarak iki karakter dizisini birleþtirin
	//elde ettiðinizi ekrana bastýrýn
	
	char dizi1[5]="bonne";
	char dizi2[6]="soiree";
	char dizi3[100]="";
	
	strcpy(dizi3,dizi1);
	strncpy(dizi3+3,dizi2,5);
	printf("%s",dizi3);
	
	return 0;
}
