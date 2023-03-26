#include <stdio.h>
#include <math.h>

void mesaj() //int gibi double gibi bu da bir deðisken, fonksiyonumuza int gibi vs deðiþkenler atayabiliriz//tamamen kendi içerisinde dönen bir fonk.
{
	printf("MERHABA\n");
}

void bilgi(char isim[30])
{
	printf("adiniz:%s",isim);
}



int main()
{
	mesaj();
	mesaj();
	mesaj();
	mesaj();
	mesaj();
	mesaj();
	
	char isim[20];
	printf("adinizi giriniz:");
	scanf("%s",&isim);
	
	bilgi(isim);
	
	return 0;
}



