#include <stdio.h>
#include <string.h>

int main()
{
	//D�Z�LER
	int sayilar[]={10,20,30,40,50};
	            //0,1,2,3,4 ilk karakter 0 ikinci 1 vs.
	printf("%d\n",sayilar[2]); //diziden �ekmek istedi�imiz say�n�n s�ras�n� k��eli paranteze yazar�z
	
	int i;
	for(i=0;i<6;i++) //6.index bo� oldu�u i�in 0 verir.
	{
		printf("%d\n",sayilar[i]);
	}
	
	
	
	
	return 0;
}
