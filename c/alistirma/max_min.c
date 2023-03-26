#include <stdio.h>
int main()
{
	int a,b,c;
	int max,min;
	
	printf("3 tane farkli tam sayi giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	
	max=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	printf("max=%d\n",max);
	
	min=a;
	if(b<min)
	{
		min=b;
	}
	if(c<min)
	{
		min=c;
	}
	printf("min=%d",min);
	return 0;
}
