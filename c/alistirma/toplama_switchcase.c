#include <stdio.h>
int main()
{
	int islem;
	float a,b;
	
	printf("yapmak istediginiz islemin isaretini giriniz: ");
	scanf("%c",&islem);
	
	printf("\niki sayi giriniz: ");
	scanf("%f %f",&a,&b);
	
	switch(islem)
	{
		case '+':
		printf("sayilarin toplami = %f",a+b);
		break;
		case '-':
		printf("sayilarin farki = %f",a-b);
		break;
		case '*':
		printf("sayilarin carpimi = %f",a*b);
		break;
		case '/':
		printf("sayilarin bolumu = %f",a/b);
		break;
		default:
		printf("gecersiz deger girdiniz");
	}
	
	return 0;
}
