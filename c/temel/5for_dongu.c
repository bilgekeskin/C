#include <stdio.h>
int main()
{
	//for döngüsü,koþula baðlý, koþul gerçekleþirse içindeki atamalarý çalýþtýrýr.
	
	int i; //eðer burada i ye bir deðer verirsek aþaðýda i= yazmamýza gerek kalmaz. ama i<10 ifadesinin baþýna yine noktalý virgül koymak zorundayýz
	
	for(i=0;i<=10;i++)
	{
		printf("%d\n",i);
	}
	
	
	
	int x;
	int sayi;
	int cifttoplam=0;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(x=0;x<=sayi;x++)
	{
		if(x%2==0)
		{
			printf("%d\n",x);
			cifttoplam=cifttoplam+x;
		}
	}
	
	printf("\ngirdiginiz sayiya kadar olan cift toplami:%d",cifttoplam);
	
	
	return 0;
}
