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
	
	c=a;  //c artýk a 
	a=b; //a artýk b
	b=c; //b artýk a
	
	printf("\nyeni ilk sayi = %d",a);
	printf("\nyeni ikinci sayi = %d",b);
	
	return 0;
}
