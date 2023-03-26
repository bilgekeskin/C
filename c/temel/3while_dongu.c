#include <stdio.h>
int main()
{
	//while döngüsü (koþul doðru ise komutlarý çalýþtýrýr)
	//0'dan 100e kadar olan sayýlarý birer birer arttýrarak yazýnýz.
	
	int i=0; //döngünün 0 dan baþlamasý için i deðiþkeni oluþturuyoruz.
	while(i<=100)//0 dan 100e kadar her þeyi alsýn
	{
		printf("%d\n",i);
		i++;
	}
	
	//0'dan 100e kadar olan sayýlarý ikiþer sonra üçer arttýrýnýz.
	
	int x=0;
	while(x<=100)
	{               //tek sayýlarý yazdýrmak için x%2==1
		if(x%2==0) //üçer arttýrmak için x%3==0 yazarýz. mod 2 eþittir 0 çiftleri yazdýrdý.
		{
			printf("%d\n",x);
		}
		
		x++; //birer arttýrarak git demezsek 1den 100e kadar olan çiftlerin adeti kadar 0 yazdýrýr.
	}
	
	
	
	
	return 0;
}
