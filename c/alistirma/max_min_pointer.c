#include <stdio.h>
#define N 3
int main()
{
	int i,min,max;
	int dizi[N];
	
	printf("%d deger giriniz:",N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d",dizi+i);
	}
	
	max=min=*dizi; //*dizi ilk eleman dizi 0 demek
	
	for(i=1;i<N;i++)
	{
		if(*(dizi+i)>max)
		{
			max=*(dizi+i);
		}
		if(*(dizi+i)<min)
		{
			min=*(dizi+i);
		}
	}
	
	printf("Min = %d\nMax = %d",min,max);
	
	return 0;
}
