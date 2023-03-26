#include <stdio.h>
int main()
{
	int elma=10;
	
	while(elma>0) //elma sayýsý 0 dan büyük olduðu durumlar
	{
		printf("Cebimde %d adet elma var.\n",elma);
		elma=elma-1;
	}
	
	printf("Cebimde elma yok.");
}
