///array ko revrse krna hai ab likhate hai 


# include<stdio.h>
# include<conio.h>
int main()
{
int a[]={1,2,4,5,6,7,8},n,i;
for(i=0;i<=6;i++)
{
	if(a[6]==1)
	{
		printf("string is reversersed=8 7 6 5 4 2 1");
	}
	else
	{
		a[i]=a[i+1];
	}
}

getch();
}
