#include <stdio.h>
int main()
{
	int x,birler,onlar,yuzler;
	
	printf("bir sayi giriniz:");
	scanf("%d",&x);
	
	birler=x%10;
	onlar=x%100/10;
	yuzler=x%1000/100;
	
	printf("birler basamagi = %d\n",birler);
	printf("onlar  basamagi = %d\n",onlar);
	printf("yuzler basamagi = %d",yuzler);
	
	return 0;
}
