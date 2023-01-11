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
//its effective optimized solution for diameter TC )(n)  SC - 0(h)
//map ka use karke karenge to usme TC same hai but SC 0(N) ho jati hai map k key au rvalue ko store karne k liye kyoki har node ki height store karte hai
//sabse sasta solution 0(n^2 ) m jisme har node ka dia meter phir each node pe Height nikalnet hai n*n ho jata hai
int diameter(Node* root,int& result){
    if(root==NULL) //   base
    return 0;
    int lh = diameter(root -> left,result);
    int rh = diameter(root -> right,result);
    result = max(result,1+lh+rh); //NOTE:1+lr+lh agar no. of node k basic pe agar number of edge se karna hai to +1 mat karna
    return 1+max(lh,rh);
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
      root->right = new Node(30);
        root->left->left= new Node(40);
          root->left->right = new Node(50);
           root->left->right->right = new Node(90);
           root->left->right->right -> right = new Node(900);
            int result = 0;
           cout<<"diameter of the BT is "<<diameter(root,result);
           return result;

}