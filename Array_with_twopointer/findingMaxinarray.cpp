#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int>v{11,23,6,32,3,-90,4};
    //finding the max elementin v;


//in build stl is *max_element(start,end)
cout<<"max in array is "<< *max_element(v.begin(),v.end());
}
