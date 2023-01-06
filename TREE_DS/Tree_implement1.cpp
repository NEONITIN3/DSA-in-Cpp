#include<bits/stdc++.h>
using namespace std;
//struct karo Node data type non-premative data type taki esko baar baar us e
//kar sako
struct Node{
    int key; //root esme jayega 
   struct Node *left;
    struct Node *right;
    Node(int k) {
        key= k;
        left=NULL;
        right=NULL;
    }
};
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right =new  Node(30);
    root->left->left = new Node(40);
    cout<<"root of thr tree "<<root->key<<endl;//root kya hai tree ka 
    //cout<<"left child of root is  "<<root->left<<endl;
}