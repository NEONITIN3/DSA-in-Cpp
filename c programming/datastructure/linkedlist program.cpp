#include<stdio.h>
#include<stdlib.h>

int main()
{
		struct node{
			
			
			int data;
			struct node *next;
		};
		//three node ka linkedlist bana raha hu
    struct node *a, *b, *c;
    //dynamic memory alllocatoion
     a=(node)malloc(sizeof(struct node));
     b=malloc(sizeof(struct node));
     c=malloc(sizeof(struct node));
     
     //ab value inter karenge 
     a->data=100;
     b->data=200;
     c->data=300;
     

    //Don't change the below code
    struct node *temp = c;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}


