#include <stdio.h>
#define MIL 1.609
int main()
{
	float mil_yol,km_yol;
	
	printf("arabanin gittigi yolu mil cinsinden giriniz: ");
	scanf("%f",&mil_yol);
	
	km_yol=mil_yol*MIL;
	
	printf("mil cinsinden arabanin gittigi yol: %f",mil_yol);
	printf("\nkm  cinsinden arabanin gittigi yol: %f",km_yol);
	
	return 0;
}
