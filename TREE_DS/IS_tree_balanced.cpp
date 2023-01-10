/*
tree is balanced when left_height - right_height ya to 0 ho ya 1 ho

note= h==3 node= 2^h-1=7
each node ki height 0 1 ho.
                                 10

                        20               30
                  40         50      34      76
            67        78

            jaise es example m

            10 ki height value = left_height-right_height= 3-2=1
            20 ki h= 2-1=1
            40 ki = 1-1= 0
            jitne leaf hai unki to hight l-r=0 hi hogi
            30 ki = 1-1 
            
            ans me kah sakate hai ye balance Binary tree hai;

            //to kah sakate hai sub tree ki height 1 or 0 hai to 
            overall balanced tree hoga

*/
#include<bits/stdc++.h>

using namespace std;

struct node {

    int root ;
    node *left, *right;

    node(int current){
        root=current;
        left = right = NULL;
    }
};

int height(node *root){
    if(root==NULL)
    return 0;
    return 1+max(height())
}
bool Is_balanced_BT(node *root)
{
    if(root==NULL)

}