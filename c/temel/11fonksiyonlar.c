#include <stdio.h>
int toplama(int a, int b)
{
	int topla=a+b;
	printf("a+b=%d",topla);
}
int cikarma(int a, int b)
{
	int cikar=a-b;
	printf("a-b=%d",cikar);
}


int main()
{
	
	int sayi1,sayi2;
	printf("iki sayi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
	
	toplama(sayi1,sayi2);
	cikarma(sayi1,sayi2);
	return 0;
}
