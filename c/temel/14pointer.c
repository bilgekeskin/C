#include <stdio.h>
int main()
{
	// her de�i�kenin bir adresi vard�r bu adresin ba�lang�� ve biti� de�erleri bellidir
	//de�i�kenlerin tuttup�u byte a g�re ba�lang�� biti� belli olur boyutlar� belli olur
	//adres tutan de�i�kenlere pointer denir
	//pointer�n t�r� i�aret etti�i de�i�kenin t�r�n� anlamam�z� sa�lar
	//int* t�r�ndeki bir pointer int t�r�nde bir de�i�keni i�aret eder
	//vaariable pointed : pointer�n adresini tuttu�u de�i�ken
	
	int can=10;
	int *p;
	
	p=&can;
	
	
	printf("%d\n",*p); 
	printf("%d\n",p); //adreste tutuldu�u de�er
	printf("%d\n",can);
	printf("%d\n",&can);
	
	int *sayi;
	int n=20;
	
	sayi=&n;
	
	printf("%d\n",*sayi); 
	printf("%d\n",sayi); 
	printf("%d\n",n);
	printf("%d\n",&n);
	
	*sayi=30; //adres de�i�mez adresin g�sterdi�i de�er de�i�ir
	
	printf("%d\n",n);
	printf("%d",&n);
	
	
	
	return 0;
}
