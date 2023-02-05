#include<bits/stdc++.h>
using namespace std;


string reverseString(string str){
//agar adha revrese kar de to apane aap purareverse ho jayega
int j = str.length()-1;

for(int i = 0;i<str.length()/2; i++){
    char ch = str[i];
    str[i] = str[j];
    str[j] = ch;
    j--;
 }

 return str;
}

int main(){
    string s = "NEOnitin123@";
   // cin>>s;
    cout<<"reverse of ->  "<<s<<" "<<reverseString(s);
}