#include <stdio.h>
int main()
{
	int a,b,h,taban,yanal,toplam;
	
	printf("dikdortgenler prizmasi icin a,b,h degerlerini giriniz:");
	scanf("%d %d %d",&a,&b,&h);
	
	taban=a*b;
	yanal=(2*(a*h))+(2*(b*h));
	toplam=(2*taban)+(yanal);
	
	printf("taban alani=%d",taban);
	printf("\nyanal alani=%d",yanal);
	printf("\ntoplam alani=%d",toplam);
	return 0;
}
