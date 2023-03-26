#include <stdio.h>
#define tavsanhiz 0.038
#define kushiz 0.012
int main()
{
	//bit çiftlikte tavşanların sayısı 1042 iken, kuşkların sayısı 2272
	//bir yılda tavşanlar %3,8 çoğalır kışlar %1,2 çoğalır
	//kaç yıl sonra tavşan sayısı kuştan fazla olur
	
	float tavsan,kus;
	int yil=0;
	
	tavsan=1042;
	kus=2272;
	
	while(tavsan<kus) //sağladığı kondisyonu bir geçince çıkar, tavsan kusu geçtiğinde çıkar
	{
		tavsan=tavsan+(tavsan*tavsanhiz);
		kus=kus+(kus*kushiz);
		yil++;
		printf("gecen yil:%d  tavsan=%d  kus=%d\n",yil,(int)tavsan,(int)kus);
	}
	
	printf("%d yil sonra tavsan kusu gecer.",yil);
	
	
	
	
	return 0;
}
