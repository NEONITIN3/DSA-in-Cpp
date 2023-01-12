//i am going to print all DFS BTree traversal 
//inorder pre-order postorder
#include<bits/stdc++.h>
using namespace std;

//tree structure banao
struct Node{
    int val;
    Node *left,*right;
    Node(int data){
        val = data;
        left = right = NULL;
        
    }
};

//preorderr
void print_Preorder(struct Node* root){
    if(root == NULL)
    return;
    cout<<root -> val<<" ";
    print_Preorder(root -> left);
    print_Preorder(root -> right);
}

//void print_inorder
void print_Inorder(struct Node* root){
    if(root == NULL)
    return;
    print_Inorder(root -> left);
    cout<<root -> val << " ";
    print_Inorder(root -> right);
}



//post order
void print_Postorder(struct Node* root){
    if(root == NULL)
    return;
    print_Postorder(root -> left);
    print_Postorder(root -> right);
    cout<< root -> val <<" ";
}

//main class
 /*   
                              10
                           /      \
                        20          30
                      /    \         \
                    40      50         90
                                      /
                                    100

                  preORDER= 10,20,40,50,30,90,100
                  IN-ORDER= 40,20,50,10,30,100,90
                  POST-ORDER= 40,50,20,100,90,30    

                  aur ye raha after run output
                  pre order of the above tree is
10 20 40 50 30 90 100
In-Order of the given tree is
40 20 50 10 30 100 90
post-Order of the given tree
40 50 20 100 90 30 10            
 */

int main(){
    Node* root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> right -> right = new Node(90);
    root -> right -> right -> left = new Node(100);
    cout<<"pre order of the above tree is "<<endl;
    print_Preorder(root);
    
    cout<<endl;
    cout<< "In-Order of the given tree is " <<endl;
    print_Inorder(root);

    cout<<endl;
    cout<< "post-Order of the given tree " <<endl;
    print_Postorder(root);


}