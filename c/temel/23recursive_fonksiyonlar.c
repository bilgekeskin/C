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
	//rekürsif fonksiyonlar(kendi kendine çağırılan fonksiyonlar)
	//klavyeden girilen bir N pozitif tamsayısından 0a kadar olan sayıların ekrana yazdırılmasını saplayan c prog
	
	int n;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&n);
	listele(n);
	return 0;
}
