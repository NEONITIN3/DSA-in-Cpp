
/// i/p  ABCa op -->abcA
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //getline(cin>>ws,s);
    int l=s.length();
    ///s[i] check the upper and lower
    for(int i=0;i<l;i++)
    {
        if(s[i]>='a' &&  s[i]<='z')
        {
            s[i]=s[i]-32;
            }
        else
        {
            s[i]=s[i]+32;
          }
     }
    cout<<s<<endl;
    return 0;
}
