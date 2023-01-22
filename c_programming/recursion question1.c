///o/p??? find how many time get function called;

#include<stdio.h>
int main()
{
   // int c;
void get (int );
int c;
c=get(6);
printf("%d",c);
return 0;
}
void get(int n)
{
    if(n<1)
        return get(n-1);
        //else  liho ya na likho its understood becoz only on e loop is avalabe
        return get(n-3);
    printf("%d",n);
}
