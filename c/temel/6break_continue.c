#include <stdio.h>
int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			break; //5e kadar olan say�lar� yaz sadece
			continue; //5 hari� 10 a kadar t�m say�lar� yaz i%2==0 sadece tekleri yazar
		}
		printf("%d\n",i);
	}
	
}
