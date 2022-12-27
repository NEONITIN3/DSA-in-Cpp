#include<stdio.h>
//need to make fact with recurson;
//1. devide the problem int sub problem
//2. must be define the base condition with is help to termination
//recursion take more memory than for loop (stack)
int fact(int); //global function declaration
int main()
{
    int factorial,x;
    scanf("%d",&x);
    factorial=fact(x); //function cal
    printf("number fact vale=: %d",factorial);
        return 0;
}
//dont think both x are is same both are differet because they are variable of different function m hai\

int fact(int x)
{
    if(x==1)
        return 1;
    else
        return(x*fact(x-1));
}
