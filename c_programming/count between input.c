#include<stdio.h>
int main()
{
	int a,b,c,n,i;
	scanf("%d%d%d",&a,&b,&c);
	for (i=a;i<=b;i++)
	{
		if(i%c==0)
		{
		n++;
	    }
	}
	printf("%d",n);
	return 0;
}

