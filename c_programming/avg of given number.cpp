#include<stdio.h>
#include<conio.h>
int main()
{   int n,s=0,digit;
	scanf("%d",&n);
	while(n>0)
	{
	
	digit=n% 10;//ye hame digit dega
	s=s+digit; //digit ko alag kar k sum karte chalenge
	n=n/10; //us digit ko original value m se hata denge 
	//par ye process loop  chalana hai to upar condition laga denge
	
}
	
	printf("avge is=%d",s);
	getch();
}
