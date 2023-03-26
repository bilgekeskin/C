#include <stdio.h>
int main()
{
	int a,b;
	
	printf("iki tam sayi giriniz:");
	scanf("%d%d",&a,&b);
	
	if(a==b)
	{
		printf("%d = %d",a,b);
	}
	else if(a<b)
	{
		printf("iki sayi esit degildir\n");
		printf("%d < %d",a,b);
	}
	else
	{
		printf("iki sayi esit degildir\n");
		printf("%d > %d",a,b);
	}
	
	if(a%b==0)
	{
		printf("\nilk sayi ikinci sayinin katidir");
	}
	else
	{
		printf("\nilk sayi ikinci sayinin kati degildir");
	}
	return 0;
}
