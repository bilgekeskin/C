#include <stdio.h>
int main()
{
	int sayi;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	if(sayi%2==0)
	{
		printf("sayi cifttir.");
	}
	else if(sayi%2==1)
	{
		printf("sayi tektir.");
	}
	else
	{
		printf("tan�msiz deger girdiniz.");
	}

return 0;
}
