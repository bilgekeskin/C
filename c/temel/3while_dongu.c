#include <stdio.h>
int main()
{
	//while d�ng�s� (ko�ul do�ru ise komutlar� �al��t�r�r)
	//0'dan 100e kadar olan say�lar� birer birer artt�rarak yaz�n�z.
	
	int i=0; //d�ng�n�n 0 dan ba�lamas� i�in i de�i�keni olu�turuyoruz.
	while(i<=100)//0 dan 100e kadar her �eyi als�n
	{
		printf("%d\n",i);
		i++;
	}
	
	//0'dan 100e kadar olan say�lar� iki�er sonra ��er artt�r�n�z.
	
	int x=0;
	while(x<=100)
	{               //tek say�lar� yazd�rmak i�in x%2==1
		if(x%2==0) //��er artt�rmak i�in x%3==0 yazar�z. mod 2 e�ittir 0 �iftleri yazd�rd�.
		{
			printf("%d\n",x);
		}
		
		x++; //birer artt�rarak git demezsek 1den 100e kadar olan �iftlerin adeti kadar 0 yazd�r�r.
	}
	
	
	
	
	return 0;
}
