#include<stdio.h>
/* aajj function bana yenge call define declaration dekhenge
 */
//mult naam ka function bana raha hu
void mult()
{
	int a,b;
	scanf("%d\n%d",&a,&b);
	a=a*b;
	printf("%d",a);
	//kyoki ye void() function hai to value koi return nahi karega print karega 
	
}
//jitni baar esko call karoge uutni baar ye run karega
int main()
{
	void mult(void);// es type k function m declare nahi karege to chal jayega 
	/* ese kahate hai declaration compiler ko 
	pata cahle es liye void mult(void) bata diye 
	hai ki fun hamara void type ka hai 
	mult hamara takes nthing return nothing type ka function hai*/
	mult();
	return 0;
}
