#include <stdio.h>
int main()
{
	int n,i,satir;
	
	printf("17'nin katlari hangi sayiya kadar yazdirilsin?");
	scanf("%d",&n);
	
	i=0;
	satir=0;                    //satir iþlemleri her satýrda 10 deðer olmasý için
	
	while(i<=n)
	{
		if(i%17==0)
		{
			printf("%5d",i);
			
			satir++;   //satir degerini if e girmeden önce arttýrmasaydýk 0ýn 10a bölümü 0 olduðu için 0ý ayrý yazdýrýcaktý
			if(satir%10==0)
			{
				printf("\n");
			}
		}
		i++;
	}
	return 0;
}
