#include <stdio.h>
int main()
{
	char isim[20]={'b','o','n','j','o','u','r','\0'};
	char *can;
	
	can=isim;
	
	printf("%c",*can);
	printf("%c",*(can+1));
	
	
	
	return 0;
}
