#include <stdio.h>
int main()
{
	float x,fx;
	
	printf("f(x)=(x^3)+(13*(x^2))+(47*x)+5\n");
	printf("istediginiz x degerini giriniz: ");
	scanf("%f",&x);
	
	fx=(x*x*x)+(13*(x*x))+(47*x)+5;
	
	printf("f(%f)=%f",x,fx);
	return 0;
}
