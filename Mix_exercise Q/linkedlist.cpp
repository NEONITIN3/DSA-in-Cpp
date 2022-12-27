#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;//data
    struct node* next;//pointer
};
int main(){
    // 3 variable banao node datatype ka
    // chalo 3 node ka linkedlist banate hai
    struct node* head=NULL; 
     struct node* second=NULL; 
      struct node* third=NULL;
      head= new node;
      second =new node;
      third = new node ; 
      //data dalenge ab
      head->data=1;
      head->next=second;
      second->data=2; //second
      second->next=third;
      third->data=3;  //third
     third->next=NULL;

      while(node!=NULL){
        cout<<node->data<<" ";
       node=node->next;
      }


}