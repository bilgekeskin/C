#include <stdio.h>

int topla(int a,int b)
{
	int toplam=a+b; //ÝNT DEÐER DÖNDÜRGÜ ÝÇÝN RETURN void döndürmez
	return toplam;
}


int main()
{
	int sayi1,sayi2;
	scanf("%d %d",&sayi1,&sayi2);
	
	int cevap=topla(sayi1,sayi2);
	
	printf("%d",topla(sayi1,sayi2));
	return 0;
}
