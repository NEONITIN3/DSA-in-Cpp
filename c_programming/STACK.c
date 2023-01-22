#include<stdio.h>

//#define size 3
int stack[3];
int top = 0;

int isStackFull()
{
   // if(top == size - 1)
          if(top == 3)

    return ("STACK IS FULL");
}

void push(int val)
{
    if(isStackFull())
        return("ALREADY FULL");
    else
      {
          stack[top]=stack[top]+1;
          stack[top]=val;
       }
}

int isStackEmpty()
{
    //Task 1: Write logic for isStackEmpty()
    if(top==-1)
        {
        return ("stack is empty");
    }
    else
    return 0;
}

int pop()
{
    if(isStackEmpty())
        return ("already empty");
    else
   //val=stack[top];
         stack[top]=stack[top]-1;

}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
   printf("%d ",pop());
   pop(40);
    push(40);
  printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());

    return 0;
}
