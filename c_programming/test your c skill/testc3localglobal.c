#include<stdio.h>

int x=100;
int main()
{
    int x=20;
    {
    int x=200;
    printf("%d\n",x);
    }
printf("%d",x);
    return 0;

}

