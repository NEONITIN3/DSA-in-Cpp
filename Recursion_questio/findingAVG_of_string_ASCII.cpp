#include <bits/stdc++.h>
using namespace std;
int averageValue(string s)
{
    int sum_char = 0;
 
    for (int i = 0; i < s.length(); i++)
    {
        sum_char += (int)s[i];
    }
 
    return sum_char / s.length();
}
int main() {
	//code
int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
    cout<<averageValue(str)<<endl;
}
	return 0;
}