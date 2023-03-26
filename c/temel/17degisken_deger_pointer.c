#include <stdio.h>
void degistir(int ad1,int ad2)
{
	int gecici;
	
	gecici=ad1;
	ad1=ad2;
	ad2=gecici;
	
	printf("ilk sayi %d ikinci sayi %d\n",ad1,ad2);
}


int main()
{
	//pointer degiskenin degeriyle fonk cagirma (return deger olmalý veya fonk içinde çalýþtýrmalýyýz)

	int a=10,b=20;
	
	printf("cagirmadan once %d %d\n",a,b);
	degistir(a,b);
	
	printf("cagirdiktan sonra %d %d\n",a,b);
	return 0;
}

//EGER ADRESLE GÖNDERMEZSEM GLOBAL OLARAK O ADRESÝN GÖNDERDÝGÝ DEÐERÝ DEÐÝÞTÝREMEM
//AMA ADRESLE GÖNDERÝRSEM DEGÝSTÝRDÝÐÝM DEÐER HER TARAFTA DEÐÝÞMÝÞ OLUR

