#include <stdio.h>
int main()
{
	
	//koþullu ifadeler
	//notu 50nin altýnda olanlar sýnýfta kalýr
	//if else if else
	int ogrencinot;
	printf("ogrencinin notunu tam sayi seklinde giriniz: ");
	scanf("%d",&ogrencinot);
	
	if(ogrencinot<50)
	{
		printf("%d notu ile ogrenci sinifta kalir.\n",ogrencinot);
	}
	else
	{
		printf("%d notu ile ogrenci sinifi gecer.\n",ogrencinot);
	}
	
	//Switch-case deyimiyle yapabildiklerimi ayný þekilde if-else kullanarak da yapabiliriz fakat, uzun kod satýrlarý yerine düzenli switch-case bloklarý kod okunabilirliði için de önemlidir
	//Switch/case yapýsýnda, programýn kontrolünün ifadenin deðerine göre case seçeneklerinden sadece birini çalýþtýrýp bundan sonra switch/case yapýsýný terketmesini istiyorsak bu durumda her case seçeneðinden sonra break komutu yerleþtirmeliyiz.
	//switch deyiminin çalýþma prensibi basittir. switch ifadesi hangi case’i izleyen sabitle çakýþýyorsa, programýn kontrolü o case’i izleyen kýsma geçer. Bu case’den sonraki deyimler de kontrol edilmeden çalýþtýrýlýr.
	
	int secim;
	printf("1 ile 3 arasinda bir sayi seciniz(1 ve 3 dahil). \n");
	printf("seciminiz:");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			printf("ONE");
			break;
		case 2:
			printf("TWO");
			break;
		case 3:
			printf("THREE");
			break;
		default:
			printf("yanlis secim yapildi");
					
	} 
	//ÝÇ ÝÇE ÝF
	
	int x;
	scanf("%d",&x);
	
	if(x>0)
	{
		if(x<=99 && x>=10)
		{
			printf("x iki basamakli pozitif tam sayi"); 
		}
		else if(x<=9)
		{
			printf("x tek basamakli pozitif tam sayi");
		}
	}
	else
	{
		if(x<0 && x>-10)
		{
			printf("x tek basamakli negatif");
		}
		else
		{
			printf("x iki basamakli negatif");
		}
		
	}
	
	
	
	
	return 0;
}
