#include <stdio.h>
int main()
{
	//kitap kodu 0,temel g�da 1,l�ks �r�n 2
	//vergi kitap %4,temel g�da %5.6,l�ks �r�n %19,6
	//kullan�c�dan kodu ve fiyat� al�n�z son fiyat� bast�r�n�z
	
	int kod;
	float kitap,gida,luks;
	
	printf("KITAP = 0\nTEMEL GIDA = 1\nLUKS URUN = 2");
	printf("\nAlmak istediginiz urunun kodunu giriniz:");
	scanf("%d",&kod);
	
	
	switch(kod)
	{
		case 0:
			printf("Urunun Fiyatini Giriniz:");
			scanf("%f",&kitap);
			kitap=kitap+(kitap*0,04);
			printf("Urunun yeni fiyati = %f",kitap);
			break;
		case 1:
			printf("Urunun Fiyatini Giriniz:");
			scanf("%f",&gida);
			gida=gida+(gida*0,056);
			printf("Urunun yeni fiyati = %f",gida);
			break;
		case 2:
			printf("Urunun Fiyatini Giriniz:");
			scanf("%f",&luks);
			luks=luks+(luks*0,196);
			printf("Urunun yeni fiyati = %f",luks);
			break;
		default:
			printf("Gecersiz Deger Girdiniz!");
	}
	
}
