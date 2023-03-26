#include <stdio.h>
int main()
{
	//klavyeden girilen bir kelimenin pallindrom (tersten okununca da ayný olan 'kabak')
	//bir kelime olup olmadýðýný kontrol eden program
	
	char kelime[100];
	char *p1,*p2;
	int kontrol;
	
	printf("max 100 karakterli bir kelime giriniz:");
	gets(kelime); //scanf boþluk gördüðü an durur ama gets durmaz
	
	for(p2=kelime;*p2;p2++); // *p2 karakterler bitinceye kadar devam eder
	
	p2--;
	
	kontrol=1;
	
	for(p1=kelime;kontrol && p1<p2;p1++,p2--)
	{
		if(*p1!=*p2)//p1 in gösterdiði deðer p2nin gösterdiði deðere eþit deðilse
		{
			kontrol=0;
		}
	}
	
	if(kontrol==1)
	{
		printf("girilen %s bir palindromdur",kelime);
	}
	else
	{
		printf("girilen %s bir palindrom degildir",kelime);
	}
	return 0;
}
