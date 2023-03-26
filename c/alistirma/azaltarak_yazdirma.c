#include <stdio.h>
int main()
{
	int i=0,a;
	
	printf("bir sayi giriniz=");
	scanf("%d",&a);
	
	while(a>=0) //a 0a eþit veya 0dan büyük oluncaya kadar döndür a 0 dan küçük olan deðerleri yazma
	{           //bu içteki deðer saðlandýðý her zaman yazdýrýr 
		printf("%d\t",a);
		a--; //a=a-1
	}
	return 0;
} 
