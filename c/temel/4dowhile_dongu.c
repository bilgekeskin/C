#include <stdio.h>
int main()
{
	//do while (komut çalýþýyor, komut çalýþtýktan sonra doðru mu yanlýþ mý diye bakýyor
	//eðer yanlýþsa tekrar dönüp komutu çalýþtýrmýyor ama ilk aþamada yanlýþta olsa doðru da olsa çalýþtýrýyor.
	
	int i=10;
	
	do
	{
		printf("%d\n",i);
		i--;
	}
	while(i<10&&i>0);
	//i 10dan baþlýyor, program 10dan küçük olanlarý yaz diyor(0a kadar). bu durumda 10 yazmamalý
	//ama do while ilk aþamada dopru mu yanlýþ mý bakmadýðý için 10u da yazacak
	
	
	
	
	return 0;
}
