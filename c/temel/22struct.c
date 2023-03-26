#include <stdio.h>
#include <string.h>
int main()
{
	//1: bir öðrencinin okul numarasý,adý,soyadý ve yaþ bilgilerini tutan ogrenci_bilgi adlý bir yapý tanýmlayýnýz
	//2: ogrenci_1 ve ogrenci_2 deðiþkenilerini ogrenci_bilgi yapý tipinde tanýmlayýnýz
	//3: aþaðýdaki ögrenci bilgilerini ogrenci_1 deðiþkenine atayýnýz
	//okul no:522,ad:can,soyad:boz,yaþ:18
	//4: ogrenci_1 deðiþkenini ogrenci_2 deðiþkenine kopyalayýnýz
	
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
