#include<stdio.h>
int main()
{
typedef long long int lld; /// ab ham lld se hi long long int ko reprasent kar sakte hai
lld x,y,z,a;
scanf("%lld %lld %lld",&x,&y,&z);
a=x-(y+z);
printf("%lld",a);
return 0;

}
