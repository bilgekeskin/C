#include <stdio.h>
#include <string.h>

int main()
{
	//DÝZÝLER
	int sayilar[]={10,20,30,40,50};
	            //0,1,2,3,4 ilk karakter 0 ikinci 1 vs.
	printf("%d\n",sayilar[2]); //diziden çekmek istediðimiz sayýnýn sýrasýný köþeli paranteze yazarýz
	
	int i;
	for(i=0;i<6;i++) //6.index boþ olduðu için 0 verir.
	{
		printf("%d\n",sayilar[i]);
	}
	
	
	
	
	return 0;
}
