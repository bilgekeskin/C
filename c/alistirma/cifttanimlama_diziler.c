#include <stdio.h>
int main()
{
	//ilk 10 çift elemaný diziye tanýmlamak
	
	int cift[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		cift[i]=i*2;
		printf("%d\n",cift[i]);
	}
	return 0;
}
