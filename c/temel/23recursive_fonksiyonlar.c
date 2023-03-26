#include <stdio.h>

void listele(int sayi)
{
	if(sayi==0)
	{
		printf("%d",sayi);
	}
	else
	{
		printf("%d",sayi);
		listele(sayi-1);
	}

}

int main()
{
	//rekürsif fonksiyonlar(kendi kendine çaðýrýlan fonksiyonlar)
	//klavyeden girilen bir N pozitif tamsayýsýndan 0a kadar olan sayýlarýn ekrana yazdýrýlmasýný saplayan c prog
	
	int n;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&n);
	listele(n);
	return 0;
}
