#include <stdio.h>
void ussunu_al(int a,int b,int *cevap)
{
	int i;
	*cevap=1;
	for(i=0;i<b;i++)
	{
		*cevap=*cevap*a;
	}
}

int main()
{
	int x=4,y=5,sonuc;
	ussunu_al(x,y,&sonuc);
	printf("%d",sonuc);
	return 0;
}
