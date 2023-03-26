#include <stdio.h>
int main()
{
	//her dizi pointerdýr, her pointer da doðal bir dizidir
	
	char can[100]="canan";  //can=&can[0](ÖNEMLÝ)
	char *p1;
	
	p1=can; //p1=&can[0]
	
	printf("besinci karakter %c",can[4]);
	printf("besinci karakter %c",*(p1+4));
	printf("birinci karakter %c",*(p1));
	printf("ikinci karakter %c",*(p1+1));
	
	//int tab[]=int *tab(ÖNEMLÝ)
	
	return 0;
}
