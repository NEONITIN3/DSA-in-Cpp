#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    vector<int>v{1,23,2,17,11,10,4,6,5,87};
    //search for 4 in this array
    int left=0;
    int right= v.size()-1;
    cout<<"size of vector "<<right<<endl;
    while(left<right){
        if(v[left]==41)
        {
            cout<<"find by left pointer ,index of the element is  "<<left<<endl;
        }
        else if (v[right]==41)
        {
            cout<<"find by right pointer, index of the element is  "<<right<<endl;
        }
        left++;
        right--;
    }
    return -1;
}