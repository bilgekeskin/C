#include <stdio.h>

//int ustunu_al(int x,int y) fonksiyonunu yaz�n�z fonksiyon x ve y de�erlerini parametre olarak al�yor ve x �zeri y de�erini hesaplay�p sonucu d�nd�r�yor. x=4 y=5 oldu�unda sonu� olarak
//1024 d�nd�rmesi gerekiyor ve sonucu 4 �zeri 5 = 1024 olarak ekrana yazd�r�n�z

int ustunu_al(int a,int b)
{
	int i,cevap;
	for(i=0;i<b;i++)
	{
		cevap=cevap*a;
	}
	return cevap;
}


int main()
{
	int x=4,y=5,sonuc;
	sonuc=ustunu_al(x,y);
	printf("%d",sonuc);
	return 0;
}
