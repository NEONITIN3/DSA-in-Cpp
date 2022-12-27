#include<iostream>
using namespace std;
///class m default access PRIVATE hota hai
class neo
{
    private: //ya defaulthota hai nahi bhi likhunga to bh le lega
    int a;
    public :

       int b;
        char s[10]={"nititin"};
};
int main()
{
    neo c;
cin>>c.b;
cout<<c.s;
    cout<<"class neo k  b ki value = "<<c.b;
    return 0;

}
