#include <stdio.h>
#define KM 450
int main()
{
	int saat;
	float ort_hiz;
	
	printf("varis suresini saat cinsinden giriniz: ");
	scanf("%d",&saat);
	
	ort_hiz=KM/saat;
	
	printf("ortalama hiziniz = %f",ort_hiz);
	
	return 0;
}
