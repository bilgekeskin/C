#include <stdio.h>
#include <string.h>
int main()
{
	//1: bir ��rencinin okul numaras�,ad�,soyad� ve ya� bilgilerini tutan ogrenci_bilgi adl� bir yap� tan�mlay�n�z
	//2: ogrenci_1 ve ogrenci_2 de�i�kenilerini ogrenci_bilgi yap� tipinde tan�mlay�n�z
	//3: a�a��daki �grenci bilgilerini ogrenci_1 de�i�kenine atay�n�z
	//okul no:522,ad:can,soyad:boz,ya�:18
	//4: ogrenci_1 de�i�kenini ogrenci_2 de�i�kenine kopyalay�n�z
	
	struct ogrenci_bilgi
	{
		int no;
		char ad[10];
		char soyad[10];
		int yas;
	};
	
	struct ogrenci_bilgi ogrenci_1,ogrenci_2;
	
	ogrenci_1.no=522;
	strcpy(ogrenci_1.ad,"Can");
	strcpy(ogrenci_1.soyad,"Boz");
	ogrenci_1.yas=18;
	
	ogrenci_2=ogrenci_1;
	
	printf("%d \t %s \t %s \t %d",ogrenci_1.no,ogrenci_1.ad,ogrenci_1.soyad,ogrenci_1.yas);
	
	
	
	
	return 0;
}
