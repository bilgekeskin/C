#include <stdio.h>
int main()
{
	//ingiliz alfabesinde harfin kaçýncý harf olduðunu bulan program
	//büyük harf; (int)ch-(int)'A'+1    kücük harf; (int)ch-(int)'a'+1
	char ch;
	int sira;
	
	printf("buyuk ya da kucuk bir harf giriniz(ingiliz): ");
	scanf("%c",&ch);
	
	if((ch>='A')&&(ch<='Z'))
	{
		sira=(int)ch-(int)'A'+1;
	}
	else if((ch>='a')&&(ch<='z'))
	{
		sira=(int)ch-(int)'a'+1;
	}
	else
	{
		printf("boyle bir karakter yoktur");
	}
	
	printf("sira:%d",sira);
	
	return 0;
}
