#include <stdio.h>
int main()
{
	//tablo b�t�n de�erleri 0a e�itlemek i�in
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
