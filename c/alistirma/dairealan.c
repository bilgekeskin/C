#include <stdio.h>
#define PI 3.141
int main()
{
	float r,alan;
	
	printf("dairenin yaricapini giriniz:");
	scanf("%f",&r);
	
	alan=PI*r*r;
	
	printf("dairenin alani=%f",alan);
	return 0;
}
