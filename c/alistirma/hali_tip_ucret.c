#include <stdio.h>
int main()
{
	int toplam,mkare;
	char kod;
	
	printf("twetty='T'\nbugs='B'\nspiderman='S'");
	printf("\nistediginiz hali tipinin kodunu giriniz:");
	scanf("%c",&kod);
	
	switch(kod)
	{
		case 'T':
			printf("kac mkare olacak? ");
			scanf("%d",&mkare);
			toplam=mkare*18;
			printf("odenecek ucret=%d",toplam);
			break;
		case 'B':
			printf("kac mkare olacak?");
			scanf("%d",&mkare);
			toplam=mkare*17;
			printf("odenecek ucret=%d",toplam);
			break;
		case 'S':
			printf("kac mkare olacak?");
			scanf("%d",&mkare);
			toplam=mkare*19;
			printf("odenecek ucret=%d",toplam);
			break;	
	}
	
	return 0;
}
