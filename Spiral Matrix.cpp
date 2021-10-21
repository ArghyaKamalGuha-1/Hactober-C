#include <stdlib.h>
#include <stdio.h>
int main()
{
	int n,m,c=1,A[100],k;
	printf("\nInput the number of rows : ");
	scanf("%d",&n);
	printf("\nInput the number of columns : ");
	scanf("%d",&m);
	int arr[n][m];
	int i,j;
	printf("\nInput the matrix \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("arr[%d][%d]=",i,j);
		    scanf("%d",&arr[i][j]);
		}
	}
	printf("\nThe Matrix is \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("%d, ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nSpiral Matrix : ");
	int p = 0, l = 0;
	while(p < n && l < m)
	{
		for(i = l; i < m; i++)
		{
			printf("%d ",arr[p][i]);
			A[c++]=arr[p][i];
		}
		p++;
		for(i = p; i < n; i++)
		{
			printf("%d ",arr[i][m-1]);
			A[c++]=arr[i][m-1];
		}
		m--;
		if(p < n)
		{
			for(i = m-1; i >= 0;--i)
			{
				printf("%d ",arr[n-1][i]);
				A[c++]=arr[n-1][i];
			}
			n--;
		}
		if(l < m)
		{
			for(i = n-1; i >= p; i--)
			{
				printf("%d ",arr[i][l]);
				A[c++]=arr[i][l];
			}
			l++;
		}
	}
	printf("\n\nEnter position of element to be searched: ");
	scanf("%d",&k);
	for(i=1;i<=c;i++)
	{
		if(i==j)
		{
			printf("kth element in Spiral Form=%d",A[i]);
		}
	}
	return 0;
}


