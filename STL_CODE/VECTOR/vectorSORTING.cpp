#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={88,2,34,12,11,10,34,98,-12,-4908,5,33,918,5};
    cout<<"size of the vector  " <<v.size()<<endl;
    //for sorting in increasing order 
    sort(v.begin(),v.end());
    cout<<"sorting the element in increasing order"<<endl;
    for(auto i : v)
    cout<<i<<" ";
    //sorting vector in descending order
sort(v.begin(),v.end(),greater<int>());
cout<<"printing the vector in decending order by Greater()"<<endl;
 for(auto i : v)
    cout<<i<<" ";

}