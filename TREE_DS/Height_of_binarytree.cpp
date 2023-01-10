//hight basically kya hota hai
/*
maximum lenght jo hogi leaf node se root tak ki wahi height hai
to ham dfs laga k dekhenge left m koun max hai node phir right ka bhi dono m jo max hoga usme +1 kar denge 
                                10
                             20     30
                         40    50
                                  90
                    //   height 4   
                    //max path length from root to leaf m no. of nodeis the height                      
*/
#include<bits/stdc++.h>

using namespace std;
struct node{
    int root;
    node *left ,*right;
    //cunstructor for node
     node(int current){
        root = current;
        left=right=NULL;
    }
};
int height_of_BT(node *current){
    //base case 
    if (current==NULL)
    return 0; //agar esdge k through count karna hai to return -1 kar lena thats its

    //recursive function
    //current->left se max aur right se max le k uska sum+1 se kar de to wahi max height hogi

    return 1+max(height_of_BT(current->left),height_of_BT(current->right));


}
int main(){
    node *root = new node(10);
    root -> left = new node(20);
    root -> right = new node(30);
    root -> left -> left = new node(40);
    root -> left -> right = new node(50);
    root -> left -> right -> right = new node(90);
    cout<<" height of this tree is  "<<height_of_BT(root);
    return 0;
}