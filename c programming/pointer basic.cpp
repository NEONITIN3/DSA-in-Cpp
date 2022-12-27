#include<stdio.h>
int main()
{
    int a=5, *j,**i,***r;
    /*j pointer level one ka , i pointer hai level2 ka,r pointer hai level 3 ka, koi bhi pointer apne se ek kam level wale ka addres hi sttore kar sakte hai
    mtlb j a ka,,,,,i j kaa,,   r i ka adreess store kar sakta hai.*/
   j=&a;
   i=&j;
   r=&i;
   ***r=10;
   //whats the value of a;
   printf("%d",a);
   return 0;
}
