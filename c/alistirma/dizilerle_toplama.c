#include <stdio.h>
int main()
{
	//klavyeden girilen 4 sayinin toplamini yazan c programi(for,while ve dizi kullanarak)
	
	int dizi[4];
	int i=0;
	int toplam=0;
	
	while(i<4)
	{
		printf("bir tamsayi giriniz:\n");
		scanf("%d",&dizi[i]);
		
		
		i++;
	}
	
	for(i=0;i<4;i++)
	{
		toplam=toplam+dizi[i];
	
	}
	
	printf("toplam=%d",toplam);
	
	return 0;
}
