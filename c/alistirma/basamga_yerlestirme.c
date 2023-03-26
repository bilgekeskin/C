#include <stdio.h>
int main()
{
	int a,b,c,sayi;
	
	printf("3 sayi giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	
	sayi=(c*100)+(b*10)+(c);
	
	printf("sayi=%d",sayi);
	return 0;
}
