#include <stdio.h>
int main()
{
	char isim[10];
	char soyisim[10];
	int yas;
	
	printf("isim:");
	scanf("%s",&isim);
	
	printf("soyisim:");
	scanf("%s",&soyisim);
	
	printf("yas:");
	scanf("%d",&yas);
	
	//printf("isim soyisim:");
	//scanf("%s %s",&isim,&soyisim);
	
	if(yas>=18)
	{
		printf("%s %s isimli kullanici ehliyet alabilir.",isim,soyisim);
	}
	else
	{
		printf("%s %s isimli kullanici ehliyet alamaz.",isim,soyisim);
	}
	
	
	
	
	
return 0;
}
