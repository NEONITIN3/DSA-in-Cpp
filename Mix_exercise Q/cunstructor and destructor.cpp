#include<iostream>
using namespace std;
class sum
{
    private:
    int a,b;
public :
    ///constructor
    sum(int x ,int z)
    {
          cout<< "mai constructor hu aur sum is = "<<(x+z)<<endl;
    }
    /// destructor


   ~sum()
    {
        cout<<"mai decstructor hu mai memory released kar de hai = ok  :)"<<endl;
    }

};
int main()
{
    sum s(2 ,3);
    return 0;
}
