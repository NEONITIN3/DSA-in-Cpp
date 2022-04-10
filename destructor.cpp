/// dekho dectructor memoy ko rlease kara deta hai ;
/// yah var ko marne se pahle chala deta hai;
/// esme argument pass nahi kar sakte so yaha overoading nahi passible hai
/// eska bhi koi data type nahi hota hai;
/// yah bhi kabhi static nahi ho sakta;
/// symbl ~
/// aur yaha bhi class name aur desctror name same rahana chahiye;
#include<iostream>
using namespace std;
class mult
{
private :
 int a,b;
public :
    ~mult()
    {
        cout<<"hii you are in desctroctor lets happy ==:) "<<endl;
    }

};
int main()
{
    mult s1;

    return 0;
}
