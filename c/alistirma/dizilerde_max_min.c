#include <stdio.h>
int main()
{
	//10 tane integer tipinde de�er tutan bir dizi tan�mlay�n�z
	//dizinin t�m elemanlar�n� kullan�c� girsin
	//en b�y�k en k���k elemanlar�n� for kullanarak ekrana bast�r�n
	
	int eleman[10];
	int i,max,min;
	
	printf("10 eleman giriniz:");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&eleman[i]);
	}
	
	max=min=eleman[0];
	
	for(i=1;i<10;i++)
	{
		if(eleman[i]>max)
		{
			max=eleman[i];
		}
		if(eleman[i]<min)
		{
			min=eleman[i];
		}
	}
	
	printf("MAX= %d \n",max);
	printf("MIN= %d",min);
	
	
	return 0;	
}
