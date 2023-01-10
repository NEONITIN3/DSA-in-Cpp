#include<bits/stdc++.h>

using namespace std;

//creating node data type
struct node{
    int data;
    node *left,*right; //two child its a binary tree thats why
    node(int current){
        data=current;
        left=right=NULL;
    }
};
void preorder(node *curr,vector<int> &v){
    if(curr==NULL)
    return;
    v.push_back(curr->data); //jo bhi current walue hai usko vector m puss karo root left phir right
    preorder(curr->left,v);
    preorder(curr->right,v);
}
int main(){
    node *root = new node(20); //root 
    root->left = new node(10);
    root->right = new node(30);
    root->left->right = new node(90);
    root->left->left = new node(100);
    /*
                                               20
                                          10         30
                                     100      90

                                     //20 10 100 90 30         

    */
    /*here is the pre-order of the tree
20 10 100 90 30
    */
    vector<int>v;
    preorder(root,v);
    cout<<"here is the pre-order of the tree "<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
   

}