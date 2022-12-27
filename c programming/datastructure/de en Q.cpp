//program for NITIN ko dequee kar k enqueue karna
#include<stdio.h>
#include<conio.h>

// element ko dalana in queue

void enqueue(char queue[],char element,int& rear,int arraySize)
{
	if(rear== arraySize)
	{
		printf("queue is full:overflow");
		
	}
	else
	{
		queue[rear]=element;
		rear++;
	}
}

//
void dequeue (char queue[],int front,int& rear)
{
	if(front==rear)
	{
		printf("queue is empty:underflow ");
	}
	else
	{
		queue[front]=0;
		front++;
		
	}
	
}
int main() 
{
    char queue[20] = {'N', 'I', 'T', 'I','N'};        
    int front = 0, rear = 5;                
    int arraySize = 20;                // Size of the array
    int N = 5;                    // Number of steps
    char ch;
    for(int i = 0;i < N;++i) 
	{
        
        
        dequeue(queue, front, rear);
        enqueue(queue, ch, rear, arraySize);
    }
    for(int i = front;i < rear;++i)
        printf("%c", queue[i]);
    printf("\n");
    return 0;
}

