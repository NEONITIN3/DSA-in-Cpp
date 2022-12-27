#include<stdio.h>
int main()
{
	int a=220 ,*j;
/* j bhi int hai but ye ordinary inty nahi hai ye address store karta hai compiler ye samajh paye 
es liye declare karte samay j k aage * variable name k aage * laga diya jata hai   */	
	j=&a;
	printf("%u",j);
	/* adress print karte wakt %d ki jagah %u use kiya karo %U ki range value 

	%d se kahi jyada hoti hai (0,6553552)  */
	
	return 0;
}



