#include <stdio.h>
void degistir(int *ad1,int *ad2)
{
	int gecici;
	
	gecici=*ad1;
	*ad1=*ad2;
	*ad2=gecici;
}


int main()
{
	//pointer deðiþkenin adresiyle fonksiyon caðýrma
	
	int a=10,b=20;
	
	printf("cagirmadan once %d %d\n",a,b);
	degistir(&a,&b);
	
	printf("cagirdiktan sonra %d %d\n",a,b);
	return 0;
}
