#include <stdio.h>
int main()
{
	//n*n eleman içeren program
	
	int mat[10][10];
	int i,j;
	
	for(i=0;i<10;i++)
	{
		
		for(j=0;j<10;j++)
		{
			if(i==j)
			{
				mat[i][j]=1;
			} 
			else
			{
				mat[i][j]=0;
			}
		}
	
	}
	
	
	for(i=0;i<10;i++)
	{
		
		for(j=0;j<10;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
