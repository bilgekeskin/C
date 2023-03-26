#include <stdio.h>
int main()
{
	int *ad1,*ad2,*ad;
	int n=10,p=20;
	
	ad1=&n;
	ad2=&p;
	
	printf("atamadan once ad1 %d\n",*ad1);
	printf("adres=%d\n",ad1);
	
	*ad1=*ad2+2; //adres deðiþmez deðer deðiþirz
	
	printf("atamadan sonra ad1 %d\n",*ad1);
	printf("adres=%d\n",ad1);
	
	//ADRESE SAYI DEGERÝ ATAMASI YAPAMAYIZ
	return 0;
}
