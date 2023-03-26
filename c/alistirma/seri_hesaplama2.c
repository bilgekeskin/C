#include <stdio.h>
int main()
{
	//bir poz tamsayý olan n deðeri ile bir reel sayý olan c deðerini girdi olarak
	//alan ve 1/x^2+3/x^4+....+2n-1/x^2n serisini hesaplayan program yazýnýz
	//birden fazla n ve x çifti için hesaplama yapýnýz
	//her seri hesaplama devam etmek ister misiniz diye sorsýn evetse E veya e
	
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
