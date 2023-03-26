#include <stdio.h>
int main()
{
	/*struct araba
	{
		int model[25];
		char renk[10];
		int km;
	};*/
	
	struct tarih
	{
		int gun;
		char ay[10];
		int yil;
	};
	
	struct calisan_bilgi
	{
		int sicil_no;
		char isim[30];
		char adres[50];
		struct tarih ise_giris;
		double maas;
	};
	
	return 0;
}
