#include <stdio.h>
int main()
{
	int i=0,a;
	
	printf("bir sayi giriniz=");
	scanf("%d",&a);
	
	while(a>=0) //a 0a e�it veya 0dan b�y�k oluncaya kadar d�nd�r a 0 dan k���k olan de�erleri yazma
	{           //bu i�teki de�er sa�land��� her zaman yazd�r�r 
		printf("%d\t",a);
		a--; //a=a-1
	}
	return 0;
} 
