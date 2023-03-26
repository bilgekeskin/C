#include <stdio.h>
int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		if(i==2)
		{
			continue;
		}
		if(i==7)
		{
			break;
		}
		
		printf("%d\t",i);
	}
	return 0;
}
