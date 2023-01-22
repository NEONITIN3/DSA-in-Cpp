#include<stdio.h>
int main()
{
	int a=220 ,b=20,*j,*i;
/* j bhi int hai but ye ordinary inty nahi hai ye address store karta hai compiler ye samajh paye 
es liye declare karte samay j k aage * variable name k aage * laga diya jata hai   */	
	j=&a;
	i=&b;
	printf("before updation a=%d\n",a);
	printf("%u\n",j);
	printf("%u\n",i);
	
	*j=10;
	printf("a m *j se value update ho gae,%d",j);
	/* adress print karte wakt %d ki jagah %u use kiya karo %U ki range value 

	%d se kahi jyada hoti hai (0,6553552)  */
	
	return 0;
}


