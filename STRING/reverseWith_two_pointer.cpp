/* Function to reverse arr[] from start to end*/
#include<bits/stdc++.h>
using namespace std;
string rveresestring(string str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}    
 
 
int main()
{
    string str = "Geeksdt";
     
    int n = str.length();
 
    cout<<rveresestring(str, 0, n-1);
   
     
    return 0;
}