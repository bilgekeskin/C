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
	//pointer degiskenin degeriyle fonk cagirma (return deger olmal� veya fonk i�inde �al��t�rmal�y�z)

	int a=10,b=20;
	
	printf("cagirmadan once %d %d\n",a,b);
	degistir(a,b);
	
	printf("cagirdiktan sonra %d %d\n",a,b);
	return 0;
}

//EGER ADRESLE G�NDERMEZSEM GLOBAL OLARAK O ADRES�N G�NDERD�G� DE�ER� DE���T�REMEM
//AMA ADRESLE G�NDER�RSEM DEG�ST�RD���M DE�ER HER TARAFTA DE���M�� OLUR

