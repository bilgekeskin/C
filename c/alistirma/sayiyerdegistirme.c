#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("ilk sayi= ");
	scanf("%d",&a);
	printf("ikinci sayi= ");
	scanf("%d",&b);
	
	printf("girdiginiz ilk sayi = %d",a);
	printf("\ngirdiginiz ikinci sayi = %d",b);
	
	c=a;  //c art�k a 
	a=b; //a art�k b
	b=c; //b art�k a
	
	printf("\nyeni ilk sayi = %d",a);
	printf("\nyeni ikinci sayi = %d",b);
	
	return 0;
}
