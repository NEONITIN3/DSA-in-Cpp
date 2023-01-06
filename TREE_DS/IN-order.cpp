#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    // Node(int k)//root
    // {
    //     key=k;
    //     left=right=NULL;
    // }
}
void inorderTraversal(Node *root){
    if(root!= NULL)
    {
        inorderTraversal(root->left);
        cout<<(root->key)<<" ";
        inorderTraversal(root->right);
    }
}
int main(){
    Node root = new Node(10);
    root->left= new Node(20);
    root->right =new  Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(40);
    /*
                           10
                    20           30
               40        45

               //in-order= 40 20 45 10 30       
    */
}