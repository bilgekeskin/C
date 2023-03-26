#include <stdio.h>
int main()
{
	int a,b,c,x,cevap;
	printf("ax^2+bx+c fonksiyonu icin a degerini giriniz: ");
	scanf("%d",&a);
	printf("ax^2+bx+c fonksiyonu icin b degerini giriniz: ");
	scanf("%d",&b);
	printf("ax^2+bx+c fonksiyonu icin c degerini giriniz: ");
	scanf("%d",&c);
	printf("ax^2+bx+c fonksiyonu icin x degerini giriniz: ");
	scanf("%d",&x);
	
	printf("foksiyonun yeni hali = %d.%d^2+%d.%d+%d",a,x,b,x,c);
	
	cevap=a*(x*x)+b*x+c*x;
	
	printf("\nfonksiyonun cevabi = %d",cevap);
	
	return 0;
}
