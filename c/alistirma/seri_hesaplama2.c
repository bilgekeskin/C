#include <stdio.h>
int main()
{
	//bir poz tamsay� olan n de�eri ile bir reel say� olan c de�erini girdi olarak
	//alan ve 1/x^2+3/x^4+....+2n-1/x^2n serisini hesaplayan program yaz�n�z
	//birden fazla n ve x �ifti i�in hesaplama yap�n�z
	//her seri hesaplama devam etmek ister misiniz diye sors�n evetse E veya e
	
	int n,i;
	float x,seri;
	char devam;
	
	do
	{
		printf("\nbir pozitif tam sayi giriniz:");
	scanf("%d",&n);
	
	printf("\nbir reel sayi giriniz:");
	scanf("%f %c",&x,&devam);
	
	for(i=1;i<=2*n-1;i=i+2)
	{
		seri=seri+i/pow(x,i+1);
	}
	
	printf("seri=%f",seri);
	
	
	}
	while((devam=='E'||devam=='e'));
	printf("\nbye");
	return 0;
}
