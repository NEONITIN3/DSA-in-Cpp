#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;

cin>>t;

while(t--)

{

string s,t;

cin>>s>>t;

map<char,int>m;

for(char ch:t)

{

m[ch]++;

}

int flag=0;

for(int i=0;i<s.length();i++)

{

if(m.find(s[i])!=m.end())

{

flag=1;

break;

}

}


 

if(flag==1)

cout<<"YES"<<endl;

else

cout<<"NO"<<endl;

}

}
