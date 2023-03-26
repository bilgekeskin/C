#include <stdio.h>
#define N 3
int main()
{
	int i,min,max;
	int *eleman;
	int dizi[N];
	
	printf("%d deger giriniz:",N);
	
	for(eleman=dizi;eleman<dizi+N;eleman++)
	{
		scanf("%d",eleman);
	}
	
	max=min=dizi[0]; //*dizi ilk eleman dizi 0 demek
	
	for(eleman=dizi+1;eleman<dizi+N;eleman++)
	{
		if(*eleman>max)
		{
			max=*eleman;
		}
		if(*eleman<min)
		{
			min=*eleman;
		}
	}
	
	printf("Min = %d\nMax = %d",min,max);
	
	return 0;
}
