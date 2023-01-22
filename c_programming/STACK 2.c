#include<stdio.h>

#define size 6
int stack[size];
int top = 0;

int isStackFull()
{
   // if(top == size - 1)
          if(top >size)

    return 1;
}

void push(int val)
{
    if(isStackFull())
        return;
    else
      {

          ++top;
          stack[top]=val;

       }


}

int isStackEmpty()
{
    //Task 1: Write logic for isStackEmpty()
    if(top<0){
        return 1;
    }
    else
    return 0;
}

int pop()
{
    if(isStackEmpty())
        return -1;
    else
    return stack[top--];

}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    printf("%d ",pop());
    push(40);
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
return 0;
}
