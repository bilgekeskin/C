#include <stdio.h>
int main()
{
	//for d�ng�s�,ko�ula ba�l�, ko�ul ger�ekle�irse i�indeki atamalar� �al��t�r�r.
	
	int i; //e�er burada i ye bir de�er verirsek a�a��da i= yazmam�za gerek kalmaz. ama i<10 ifadesinin ba��na yine noktal� virg�l koymak zorunday�z
	
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
