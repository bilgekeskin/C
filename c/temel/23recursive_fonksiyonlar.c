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
	//rek�rsif fonksiyonlar(kendi kendine �a��r�lan fonksiyonlar)
	//klavyeden girilen bir N pozitif tamsay�s�ndan 0a kadar olan say�lar�n ekrana yazd�r�lmas�n� saplayan c prog
	
	int n;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&n);
	listele(n);
	return 0;
}
