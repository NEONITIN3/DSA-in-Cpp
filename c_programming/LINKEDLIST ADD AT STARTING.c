#include<stdio.h>
#include<stdlib.h>
struct node{

int data;
struct node* next;
};
int main()
{
    struct node*  head;
    head->data=677;
    head->next=NULL;


    dalo (head,45);
    struct node * temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("after adding  node at starting =  %d ",temp->data);
        temp=temp->next; ///yah head wale ka address rakhne laga

    }
}
void dalo(struct node * & head,int newdata) ///address lenge head ka
{
    node * temptr;
    temptr=new node(); ///eski wajah se naya node create hoga

    temptr->data=newdata;
    temptr->next=head;
    head=temptr;
}


/*
struct node *head =NULL;
void dalo (struct node* head,int data)
{
    struct node* newhead ;
    newhead= new node();
    newhead->data=data;
    newhead->next=head;
    head=newhead;
}*/
