#include <stdio.h>

//int ustunu_al(int x,int y) fonksiyonunu yazýnýz fonksiyon x ve y deðerlerini parametre olarak alýyor ve x üzeri y deðerini hesaplayýp sonucu döndürüyor. x=4 y=5 olduðunda sonuç olarak
//1024 döndürmesi gerekiyor ve sonucu 4 üzeri 5 = 1024 olarak ekrana yazdýrýnýz

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
