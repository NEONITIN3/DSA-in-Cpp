/*
diameter matalab longest path between two leaf node k beech m jitne node honge wahi diameter hoga


                              10
                             20     30
                         40    50
                                  90

                                  to yaha longest path 10 se -10 au r
                                  lowest 10 se - 30 
                                  90- se hote huwe 30 tak jane pe total node 5 node hai to diameter 5 hoga;
                                  0/p-5;

                                         10
                                   
                                     23        59
                                 34      7       
                              32          56
                            39              89

                            yaha leaf node teen hai 39 89 59 but 39 se 89 ki length baki sab se badi hai 
                            so  diameter is 7 for this
                            */

//approach 
//mujhe jaha tak lag raha hai maxheight + minheight nikal ke +1 (root node k liye hi +1 karte hai)
//lets code
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node *left,*right;
    Node(int current){
        val = current;
        left = right = NULL;
    }
};

int diameter_of_BT(Node* root){
    if(root==NULL) //   base
    return 0;
    int left_height = diameter_of_BT(root -> left);
    int right_height = diameter_of_BT(root -> right);
    int max_height = max(left_height,right_height);
    int min_height = min(left_height,right_height);
    return 1+max_height+min_height;
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
      root->right = new Node(30);
        root->left->left= new Node(40);
          root->left->right = new Node(50);
           root->left->right->right = new Node(90);

           cout<<"diameter of the BT is "<<diameter_of_BT(root);

}