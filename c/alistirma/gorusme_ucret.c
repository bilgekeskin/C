#include <stdio.h>
int main()
{
	float dakika,ucret,ucret_arti;
	
	printf("gorusme suresi dk cinsinden giriniz=");
	scanf("%f",&dakika);
	
	ucret=0.25;
	ucret_arti=0.25+((dakika-3)*0.08);
	
	if(dakika<=3)
	{
		printf("ucret= %f TL",ucret);
	}
	else
	{
		printf("ucret= %f TL",ucret_arti);
	}
	return 0;
}
