#include <stdio.h>
int esit(int a,int b)
{
	if(a==b)
	{
		return 1; //true
	}
	else
	{
		return 0; //false
	}
}


int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	
	bool deger= esit(x,y);
	
	if(deger)
	{
		printf("esit");
	}
	else
	{
		printf("esit degil");
	}
	return 0;
}
