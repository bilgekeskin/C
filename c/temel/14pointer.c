#include <stdio.h>
int main()
{
	// her deðiþkenin bir adresi vardýr bu adresin baþlangýç ve bitiþ deðerleri bellidir
	//deðiþkenlerin tuttupðu byte a göre baþlangýç bitiþ belli olur boyutlarý belli olur
	//adres tutan deðiþkenlere pointer denir
	//pointerýn türü iþaret ettiði deðiþkenin türünü anlamamýzý saðlar
	//int* türündeki bir pointer int türünde bir deðiþkeni iþaret eder
	//vaariable pointed : pointerýn adresini tuttuðu deðiþken
	
	int can=10;
	int *p;
	
	p=&can;
	
	
	printf("%d\n",*p); 
	printf("%d\n",p); //adreste tutulduðu deðer
	printf("%d\n",can);
	printf("%d\n",&can);
	
	int *sayi;
	int n=20;
	
	sayi=&n;
	
	printf("%d\n",*sayi); 
	printf("%d\n",sayi); 
	printf("%d\n",n);
	printf("%d\n",&n);
	
	*sayi=30; //adres deðiþmez adresin gösterdiði deðer deðiþir
	
	printf("%d\n",n);
	printf("%d",&n);
	
	
	
	return 0;
}
