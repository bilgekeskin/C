#include <stdio.h>
int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			break; //5e kadar olan sayýlarý yaz sadece
			continue; //5 hariç 10 a kadar tüm sayýlarý yaz i%2==0 sadece tekleri yazar
		}
		printf("%d\n",i);
	}
	
}
