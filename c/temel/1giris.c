#include <stdio.h>
#include <stdbool.h>
// #define x 5 yazmak ve int x=5; yazmak ayný þeydir.(sabit deðiþken)
//veya deðiþkenin önüne const yazarýz. (const int x=5;)
int main()
{
	int x=1;
	float y=2.1;
	double z=5.150989;
	char w='T';
	
	printf("integer= %d \n",x);
	printf("float= %f \n",y);
	printf("double= %lf \n",z);
	printf("char= %c \n",w);
	
	printf("int byte=%ld \n",sizeof(x));
	printf("float byte=%ld \n",sizeof(y));
	printf("double byte=%ld \n",sizeof(z));
	printf("char byte=%ld \n",sizeof(w));
	
	//printf ekrana yazdýrýr.
	// sizeof deðiþkenin bellekte kapladýðý yeri gösterir.
	//"/n" -> boþluk 
	//int: tam sayý türündeki verileri saklamak için kullanýlýr.(4 byte) %d (%ld long decimal)
	//float: kesirli sayýlarý saklamak için kullanýlýr.(4 byte) %f
	//double: kesirli sayýlarý (daha büyük) saklamak için kullanýlýr. (8 byte) %lf (long float)
	//char: karakter (harf vb.) saklamk için kullanýlýrç (1 byte) %c
	
	int a=5,b=7;
	int bolum=a/b;
	
	printf("5/7=%d \n",5/7);
	printf("5/7=%d \n",(float)a/b);
	printf("5/7=%d \n",bolum);
	
	//toplama +,çýkartma -,çarma *,bölme /
	//iþlem önceliði matematikte olduðu gibidir bu yüzden parantez kullanýmýný unutma.
	
	int sayi1;
	int sayi2;
	int carpim;
	
	printf("ilk tam sayi:");
	scanf("%d",&sayi1);
	printf("\nikinci tam sayi");
	scanf("%d",&sayi2);
	
	carpim=sayi1*sayi2;
	
	printf("\niki tam sayinin carpimi = %d",carpim);
	
	
	//scanf kullanýcýdan veri almak için kullanýlýr. ampersand, bu adrese git ve girilen sayýyý adrese kaydet anlamýnda kullanýlýr.

	
	int c=3,d=2,e;
	printf("\nkalan=%d",c%d);
	
	//mod alma iþleminde % iþareti kullanýlýr. (c%d = c'nin d'ye bölümünden kalan)
	
	int f=5;
	int g=6;
	printf("a= %d \n",f++);
	printf("a= %d \n",f);
	printf("b= %d \n",++g);
	
	/*ARTIRMA VE AZALTMA; (++) bir arttýrýr,(--) bir azaltýr.
	a=++b (önce b'nin deðerini bir arttýrýr sonra a'ya atar. a ve b ayný olur.
	a=b++ (önce b'nin deðerini a'ya atar sonra b'yi bir arttýrýr. b a'dan bir fazla olur
	a++ -> a=a+1
	a-- -> a=a-1
	a=3; b=a++; -> a=4 b=3
	a=3; b=++a; -> a=4 b=4 */
	
	int sayac; 
	int h;
	sayac=5; h=0;
	h=sayac++;
	printf("h= %d \n",h++);
	printf("sayac= %d \n",sayac);
	printf("---- \n");
	sayac=5; h=0;
	h=++sayac;
	printf("h= %d \n",++h);
	printf("sayac= %d \n",sayac);
	
	//a+=b (a=a+b), a-=b (a=a-b), a*=b (a=a*b), a/=b (a=a/b)
	
	//Karþýlaþtýrma yapmak amacýyla if deyimi kullanýlýr. Eðer karþýlaþtýrmanýn sonucu "doðru" ise bu deyimin ardýndan gelen satýr iþlem görür.; "doðru deðil" ise else deyiminin ardýndan gelen satýr iþlem görür.
	//bool(boolean) true (1) ya da false (0)
	//== -> eþit mi != -> eþit deðil mi 
	
	
	bool j;
	j=(6<3);
	bool k=(5>8);
	bool l=(10<=10);
	bool m=(12>=15);
	bool n=(1==1);
	bool o=(0!=0);
	printf("a degeri= %d\n",j);
	printf("b degeri= %d\n",k);
	printf("c degeri= %d\n",l);
	printf("d degeri= %d\n",m);
	printf("e degeri= %d\n",n);
	printf("f degeri= %d\n",o);
	
	// MANTIKSAL ÝÞLEÇLER: && -> ve, || -> veya, ! -> deðil
	
	//TERNARY ÝÞLECÝ=  <if> yapýsýnýn yaptýðý görevi yapmaktadýr. Kullanýmý þu þekildedir: <koþul> ? <doðru_ise> : <yanlýþ_ise>
	//Koþul gerçekleþirse < : > iþaretinin solundaki ifade, koþul gerçekleþmezse < : > iþaretinin saðýndaki ifade geçerli olur.
	
	int p=10, r=5, s=25, t=15, u, v;
	u=p>r ? p:s;
	v=s<t ? 9:13;
	printf("e degeri= %d \n",u);
	printf("f degeri= %d \n",v);
    
    //type cast bir tipteki deðiþkeni baþka tipe dönüþtürmek için kullanýlýr.(tip dönüþümleri)
    
	int i;
	float f = 3.14;
	i = (int) f;
	printf("%d",i);
	
	//ya da i = int( f ); 	
	
	//gets aradaki boþluklarý da alýr scanf almaz gets(bilmemne); diy eyazýlýr
	
	
	
	
	
	return 0;
}
