#include <stdio.h>
#define tavsanhiz 0.038
#define kushiz 0.012
int main()
{
	//bit �iftlikte tav�anlar�n say�s� 1042 iken, ku�klar�n say�s� 2272
	//bir y�lda tav�anlar %3,8 �o�al�r k��lar %1,2 �o�al�r
	//ka� y�l sonra tav�an say�s� ku�tan fazla olur
	
	float tavsan,kus;
	int yil=0;
	
	tavsan=1042;
	kus=2272;
	
	while(tavsan<kus) //sa�lad��� kondisyonu bir ge�ince ��kar, tavsan kusu ge�ti�inde ��kar
	{
		tavsan=tavsan+(tavsan*tavsanhiz);
		kus=kus+(kus*kushiz);
		yil++;
		printf("gecen yil:%d  tavsan=%d  kus=%d\n",yil,(int)tavsan,(int)kus);
	}
	
	printf("%d yil sonra tavsan kusu gecer.",yil);
	
	
	
	
	return 0;
}
