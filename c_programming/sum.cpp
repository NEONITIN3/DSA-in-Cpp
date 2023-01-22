# include<stdio.h>
# include<conio.h>
int main()
{

int add( int a,int  b);

{
	int c,b,a;
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("%d",c);
}
}

int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
	
}
