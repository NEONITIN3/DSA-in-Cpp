#include<bits/stdc++.h>
using namespace std;
// struct Node{
//     int key;
//     Node *left;
//     Node *right;
//     // Node(int k)//root
//     // {
//     //     key=k;
//     //     left=right=NULL;
//     // }
// }
// void postorderTraversal(Node *root){
//     if(root!= NULL)
//     {
//        postorderTraversal(root->left);
       
//         postorderTraversal(root->right);

//          cout<<(root->key)<<" ";
//     }
// }
// int main(){
//     Node root = new Node(10);
//     root->left= new Node(20);
//     root->right =new  Node(30);
//     root->left->left = new Node(40);
//     root->left->right = new Node(40);
//     /*
//                            10
//                     20           30
//                40        45

//                //post-order= 40 45 20 30 10      
//     */
// }


struct node {
  int data;
  struct node * left, * right;
};

void postOrderTrav(node * curr, vector < int > & postOrder) {
  if (curr == NULL)
    return;

  postOrderTrav(curr -> left, postOrder);
  postOrderTrav(curr -> right, postOrder);
  postOrder.push_back(curr -> data);
}

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root -> right -> right -> left = newNode(9);
  root -> right -> right -> right = newNode(10);

  vector < int > postOrder;
  postOrderTrav(root, postOrder);

  cout << "The postOrder Traversal is : ";
  for (int i = 0; i < postOrder.size(); i++) {
    cout << postOrder[i] << " ";
  }
  return 0;
}
// Output:

// The postOrder Traversal is : 4 8 5 2 6 9 10 7 3 1 