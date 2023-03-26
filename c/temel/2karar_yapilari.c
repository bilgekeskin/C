#include <stdio.h>
int main()
{
	
	//ko�ullu ifadeler
	//notu 50nin alt�nda olanlar s�n�fta kal�r
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
	
	//Switch-case deyimiyle yapabildiklerimi ayn� �ekilde if-else kullanarak da yapabiliriz fakat, uzun kod sat�rlar� yerine d�zenli switch-case bloklar� kod okunabilirli�i i�in de �nemlidir
	//Switch/case yap�s�nda, program�n kontrol�n�n ifadenin de�erine g�re case se�eneklerinden sadece birini �al��t�r�p bundan sonra switch/case yap�s�n� terketmesini istiyorsak bu durumda her case se�ene�inden sonra break komutu yerle�tirmeliyiz.
	//switch deyiminin �al��ma prensibi basittir. switch ifadesi hangi case�i izleyen sabitle �ak���yorsa, program�n kontrol� o case�i izleyen k�sma ge�er. Bu case�den sonraki deyimler de kontrol edilmeden �al��t�r�l�r.
	
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
	//�� ��E �F
	
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
