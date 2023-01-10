/*
min height k liye pahale max height wala concept dekh lo;
ek corner case hai jisme usase socha huwa algo paass nahi karega 
kyoki jab ek he height ki tree hogi like sked tree tab to wahi min hai wahi max hai BT tree ki esi liye jab min naho tree m
to max wale ko hi min maan k chalenge

*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int root;
    Node *left,*right;
    Node(int current){
        root = current;
        left = right = NULL;
    }
};

int Min_height_of_BT(Node *root){
    if(root==NULL)
    return 0;
    int left_height = Min_height_of_BT(root->left);
    int right_height  = Min_height_of_BT(root->right);
    return (min(left_height,right_height)?min(left_height,right_height):max(left_height,right_height))+1;
}
int main(){
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> left -> right -> right = new Node(90);
    /*
                                10
                             20     30
                         40    50
                                  90
    */
    cout<<" min height of BT is "<<Min_height_of_BT(root);
}