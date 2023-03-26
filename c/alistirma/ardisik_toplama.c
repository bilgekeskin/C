#include <stdio.h>
int main()
{
	int i,a,toplam;
	
	printf("bir sayi giriniz ");
	scanf("%d",&a);
	toplam=0;
	
	for(i=0;i<=a;i++)
	{
		toplam=toplam+i;
	}
	
	printf("toplam=%d",toplam);
	return 0;
}
