#include <stdio.h>
int main()
{
	//ev haliyla kaplanacak hal�n�n metrekaresi 40 tl i��ilik 200tl 
	
	int mkare,iscilik,toplam;
	
	printf("hali kac mkare olacak?");
	scanf("%d",&mkare);
	
	iscilik=200;
	toplam=(mkare*40)+200;
	
	printf("toplam tutar %d TL",toplam);
	return 0;
}
