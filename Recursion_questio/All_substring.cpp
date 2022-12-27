#include<bits/stdc++.h>
using namespace std;
void all_substring_print(string &s,string curr="",int i=0)
{
if(i==s.length()) //base case matlab sare substring ho gaye
  {cout<<s<<endl;
  return;}
  all_substring_print(s,curr,i+1);
  all_substring_print(s,curr+s[i],i+1);

}

int main(){
    string s="abc",current=" " ;//total sub string 2^n=8 honge
    int i=0;
     all_substring_print(s);

}