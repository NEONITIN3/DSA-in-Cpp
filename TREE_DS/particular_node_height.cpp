#include<bits/stdc++.h>
using namespace std;


/*
                                10
                             20     30
                         40    50
                                  90
                                  node 90 ki height 0;
                              input    root aur node ki value di jayegi;
*/
struct node{
    int val;
    node *left,*right;
    node(int current){
       val = current;
        left = right = NULL;
    }
};

int height_of_node(node *root,int value){
    if(root==NULL)
   { return -1;}
    int dist = -1;
    if((root->val == value)
    || (dist=height_of_node(root->left,value))>=0
    ||(dist=height_of_node(root->right,value))>=0)
       return 1+dist;

    return dist; //when not found

}
int main(){
  node *root = new node(10);
    root -> left = new node(20);
    root -> right = new node(30);
    root -> left -> left = new node(40);
    root -> left -> right = new node(50);
    root -> left -> right -> right = new node(90);
    cout<<" height of particular node in  Btree is "<<height_of_node(root,20);
    return 0;
}



//hight basically kya hota hai
/*
maximum lenght jo hogi leaf node se root tak ki wahi height hai
to ham dfs laga k dekhenge left m koun max hai node phir right ka bhi dono m jo max hoga usme +1 kar denge 
                                10
                             20     30
                         40    50
                                  90
                    //   height 4                         
*/
