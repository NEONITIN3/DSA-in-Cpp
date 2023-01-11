//particular node ki height means u snode se 
//leaf tak ki length m no.\of node or edge ko count kar lo that will H of BT par node x;
#include<bits/stdc++.h>
using namespace std;
/*
                                10
                             20     30
                         40    50
                                  90
                                  node 10 ki depth 0;
                                  90 ka depth 3 hai yaha ham edge ko hi count kar rahe hai
*/
struct node{
    int val;
    node *left, *right;
    node(int current){
        val=current;
        left = right = NULL;
    }
};

int height_until_node(node* root, int& x){
 
     if(root == NULL)
     return 0;
         int height=1;
     if((root->val==x)
     || (height=1+max(height_until_node(root->left,x),height_until_node(root->right,x)))>=0)
        return height;
     //||  (height=1+height_of_node(root->left,x))>=0);
     return -1;
}
int main(){
  node *root = new node(10);
    root -> left = new node(20);
    root -> right = new node(30);
    root -> left -> left = new node(40);
    root -> left -> right = new node(50);
    root -> left -> right -> right = new node(90);
    int k= 20;
    cout<<" Height_of_node " <<k<<" particular node in  Btree is "<<height_until_node(root,k);
    return 0;
}