#include <stdio.h>
int main()
{
	int n,i,satir;
	
	printf("17'nin katlari hangi sayiya kadar yazdirilsin?");
	scanf("%d",&n);
	
	i=0;
	satir=0;                    //satir i�lemleri her sat�rda 10 de�er olmas� i�in
	
	while(i<=n)
	{
		if(i%17==0)
		{
			printf("%5d",i);
			
			satir++;   //satir degerini if e girmeden �nce artt�rmasayd�k 0�n 10a b�l�m� 0 oldu�u i�in 0� ayr� yazd�r�cakt�
			if(satir%10==0)
			{
				printf("\n");
			}
		}
		i++;
	}
	return 0;
}
