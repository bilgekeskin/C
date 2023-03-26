#include <stdio.h>
int main()
{
	int a,b;
	
	printf("iki sayi giriniz: ");
	scanf("%d%d",&a,&b);
	
	if((a>0 && b>0) || (a<0 && b<0))
	{
		printf("sayilarin carpimi pozitif");
	}	
	else if((a>0 && b<0) || (a<0 && b>0))
	{
		printf("sayilarin carpimi negatif");
	}
	else
	{
		printf("sayilarin carpimi sifir");
	}
	
	return 0;
}
