#include <stdio.h>
int main()
{
	int elma=10;
	
	while(elma>0) //elma say�s� 0 dan b�y�k oldu�u durumlar
	{
		printf("Cebimde %d adet elma var.\n",elma);
		elma=elma-1;
	}
	
	printf("Cebimde elma yok.");
}
