#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("ucgenin 3 aci degerini giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b+c==180)
	{
		if(a==60 && b==60 && c==60)
		{
			printf("eskenar");
		}
		else if(a==b || a==c || c==b)
		{
			printf("ikizkenar");
		}
		else
		{
			printf("cesitkenar");
		}
	}
	else
	{
		printf("acilar ucgen olusturmaz");
	}
	
	return 0;
}
