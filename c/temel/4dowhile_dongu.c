#include <stdio.h>
int main()
{
	//do while (komut �al���yor, komut �al��t�ktan sonra do�ru mu yanl�� m� diye bak�yor
	//e�er yanl��sa tekrar d�n�p komutu �al��t�rm�yor ama ilk a�amada yanl��ta olsa do�ru da olsa �al��t�r�yor.
	
	int i=10;
	
	do
	{
		printf("%d\n",i);
		i--;
	}
	while(i<10&&i>0);
	//i 10dan ba�l�yor, program 10dan k���k olanlar� yaz diyor(0a kadar). bu durumda 10 yazmamal�
	//ama do while ilk a�amada dopru mu yanl�� m� bakmad��� i�in 10u da yazacak
	
	
	
	
	return 0;
}
