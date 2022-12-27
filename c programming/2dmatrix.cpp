#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,i,j,a[100][100];
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		scanf("%d",&a[i][j]);
	}
}

for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d",a[j][i]);
	}
	printf("\n");
}

getch();
}

