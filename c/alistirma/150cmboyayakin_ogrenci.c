#include <stdio.h>
#define tam 150
int main()
{
	//bir sýnfýtaki öðrencilerin hangisinin boyunun 150cmye yakýn olduðunu bulan program
	//boy ve numarayý girdi olarak alýnýz negatif girinciye kadar devam etmeli öðrenci no 
	int boy,no,fark,minboy,minno;
	
	printf("ogrenci no: \n");
	scanf("%d",&no);
	printf("ogrenci boy: \n");
	scanf("%d",&boy);
	
	minno=no;
	fark=abs(boy-tam);
	
	while(no>0)
	{
		printf("ogrenci no: \n");
		scanf("%d",&no);
		printf("ogrenci boy: \n");
		scanf("%d",&boy);
		
		if(abs(boy-tam)<fark)
		{
			fark=abs(boy-tam);
			minno=no;
			minboy=boy;
		}
	}
	
	printf("%d numarali ogrenci %d cm boyuyla %d cme en yakindir",minno,minboy,tam);
	
	return 0;
}
