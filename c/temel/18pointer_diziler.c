#include <stdio.h>
int main()
{
	//her dizi pointerd�r, her pointer da do�al bir dizidir
	
	char can[100]="canan";  //can=&can[0](�NEML�)
	char *p1;
	
	p1=can; //p1=&can[0]
	
	printf("besinci karakter %c",can[4]);
	printf("besinci karakter %c",*(p1+4));
	printf("birinci karakter %c",*(p1));
	printf("ikinci karakter %c",*(p1+1));
	
	//int tab[]=int *tab(�NEML�)
	
	return 0;
}
