#include<bits/stdc++.h>
using namespace std;


/*//depth means of node means edge/node count from that node to root ;
i mean root se wo kitna nichhe hai wahi depth hai
//root ka depth 0 hi hoga 
                                10
                             20     30
                         40    50
                                  90
                                  node 10 ki depth 0;
                                  90 ka depth 3 hai yaha ham edge ko hi count kar rahe hai
                                  
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

int depth_of_node(node *root,int& value){
    if(root==NULL)
   { return -1;}
    int dist = -1;
    if((root->val == value)
    || (dist=depth_of_node(root->left,value))>=0
    ||(dist=depth_of_node(root->right,value))>=0)
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
    int k= 90;
    cout<<" depth_of_node particular node in  Btree is "<<depth_of_node(root,k);
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
