#include<bits/stdc++.h>
using namespace std;

int B_search(vector<int>v,int target){
int n = v.size();
int low = 0;
int high = n-1;
int mid = 0;
while(low <= high){
    int mid = low + (high-low)/2;
    if(v[mid]==target)
   { return mid;
   }
    else if(v[mid] < target){
        low = mid+1;

    }
    else 
       high = mid-1;
}
//agar nahi mila to
return -1;

}


int main(){
vector<int>v = {12,13,67,88,99,100,3456};

//lets  99 ko serach karna hai
//int target = 99;
cout<<"target is found at index "<<B_search(v,99)<<endl;

// int target = 100;
cout<<"target is found at index "<<B_search(v,100)<<endl;

cout<<"target is found at index "<<B_search(v,110)<<endl;



}