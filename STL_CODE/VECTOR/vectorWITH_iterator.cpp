#include<bits/stdc++.h>
using namespace std;
int main()
{ vector<int>v{12,13,11,34,23};
//vector<int>v(6,1);//size 6 each have 1 as default value 
vector<int>::iterator i=v.begin();

 for(int n=0;n<v.size();n++)
 {
 cout<<*(i)<<" ";
 i++;
 }
}  