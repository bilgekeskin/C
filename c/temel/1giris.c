#include <stdio.h>
#include <stdbool.h>
// #define x 5 yazmak ve int x=5; yazmak ayn� �eydir.(sabit de�i�ken)
//veya de�i�kenin �n�ne const yazar�z. (const int x=5;)
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
	
	//printf ekrana yazd�r�r.
	// sizeof de�i�kenin bellekte kaplad��� yeri g�sterir.
	//"/n" -> bo�luk 
	//int: tam say� t�r�ndeki verileri saklamak i�in kullan�l�r.(4 byte) %d (%ld long decimal)
	//float: kesirli say�lar� saklamak i�in kullan�l�r.(4 byte) %f
	//double: kesirli say�lar� (daha b�y�k) saklamak i�in kullan�l�r. (8 byte) %lf (long float)
	//char: karakter (harf vb.) saklamk i�in kullan�l�r� (1 byte) %c
	
	int a=5,b=7;
	int bolum=a/b;
	
	printf("5/7=%d \n",5/7);
	printf("5/7=%d \n",(float)a/b);
	printf("5/7=%d \n",bolum);
	
	//toplama +,��kartma -,�arma *,b�lme /
	//i�lem �nceli�i matematikte oldu�u gibidir bu y�zden parantez kullan�m�n� unutma.
	
	int sayi1;
	int sayi2;
	int carpim;
	
	printf("ilk tam sayi:");
	scanf("%d",&sayi1);
	printf("\nikinci tam sayi");
	scanf("%d",&sayi2);
	
	carpim=sayi1*sayi2;
	
	printf("\niki tam sayinin carpimi = %d",carpim);
	
	
	//scanf kullan�c�dan veri almak i�in kullan�l�r. ampersand, bu adrese git ve girilen say�y� adrese kaydet anlam�nda kullan�l�r.

	
	int c=3,d=2,e;
	printf("\nkalan=%d",c%d);
	
	//mod alma i�leminde % i�areti kullan�l�r. (c%d = c'nin d'ye b�l�m�nden kalan)
	
	int f=5;
	int g=6;
	printf("a= %d \n",f++);
	printf("a= %d \n",f);
	printf("b= %d \n",++g);
	
	/*ARTIRMA VE AZALTMA; (++) bir artt�r�r,(--) bir azalt�r.
	a=++b (�nce b'nin de�erini bir artt�r�r sonra a'ya atar. a ve b ayn� olur.
	a=b++ (�nce b'nin de�erini a'ya atar sonra b'yi bir artt�r�r. b a'dan bir fazla olur
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
	
	//Kar��la�t�rma yapmak amac�yla if deyimi kullan�l�r. E�er kar��la�t�rman�n sonucu "do�ru" ise bu deyimin ard�ndan gelen sat�r i�lem g�r�r.; "do�ru de�il" ise else deyiminin ard�ndan gelen sat�r i�lem g�r�r.
	//bool(boolean) true (1) ya da false (0)
	//== -> e�it mi != -> e�it de�il mi 
	
	
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
	
	// MANTIKSAL ��LE�LER: && -> ve, || -> veya, ! -> de�il
	
	//TERNARY ��LEC�=  <if> yap�s�n�n yapt��� g�revi yapmaktad�r. Kullan�m� �u �ekildedir: <ko�ul> ? <do�ru_ise> : <yanl��_ise>
	//Ko�ul ger�ekle�irse < : > i�aretinin solundaki ifade, ko�ul ger�ekle�mezse < : > i�aretinin sa��ndaki ifade ge�erli olur.
	
	int p=10, r=5, s=25, t=15, u, v;
	u=p>r ? p:s;
	v=s<t ? 9:13;
	printf("e degeri= %d \n",u);
	printf("f degeri= %d \n",v);
    
    //type cast bir tipteki de�i�keni ba�ka tipe d�n��t�rmek i�in kullan�l�r.(tip d�n���mleri)
    
	int i;
	float f = 3.14;
	i = (int) f;
	printf("%d",i);
	
	//ya da i = int( f ); 	
	
	//gets aradaki bo�luklar� da al�r scanf almaz gets(bilmemne); diy eyaz�l�r
	
	
	
	
	
	return 0;
}
