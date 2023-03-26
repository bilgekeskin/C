#include <stdio.h>
int main()
{
	//tablo bütün deðerleri 0a eþitlemek için
	int t[100];
	int i;
	
	for(i=10;i<100;i++)
	{
		t[i]=0;
	}
	for (i=10;i<100;i++)
	{
		printf("%d\n",t[i]);
	}
	
	return 0;
}
