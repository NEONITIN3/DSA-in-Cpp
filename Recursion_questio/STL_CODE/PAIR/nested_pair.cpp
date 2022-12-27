#include<bits/stdc++.h>
using namespace std;
void examplepair(){
   // pair<int ,int >p = {1,{3,8}}; 
    // ye galat hai declaration becoz pair hai andar 

    
    //sahi declaration 
    pair<int ,pair<int,int>>p ={1,{3,8}};
    //if you want to access 87 then sec ka sec elemt hai
    cout<<p.second.second ;
}
int main(){
    examplepair();
    return 0;
}