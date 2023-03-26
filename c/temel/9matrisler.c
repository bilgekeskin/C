#include <stdio.h>
#include <string.h>
int main()
{
	//matrisler
	int matris[3][3]={{1,2,5},{3,4,6}}; //ilk köþeli=sütun ikinci köþeli=satýr
	//matris[0][0]=1;
	//matris[0][1]=2;
	printf("%d\n",matris[1][2]);
	//hepsini çekmek için döngü kurmalýyýz
	int i;
	int j;
	for(i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%d/",matris[i][j]);
		}
		printf("\n");
	}
	
	//sonsuz matris=> intmatrice[][P]={{1,2,3},{4,5,6},{7,8,9}} (P deðerini vermek zorundayýzzz)
	
return 0;
}
