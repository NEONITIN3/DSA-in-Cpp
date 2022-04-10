
#include<iostream>
using namespace std;
/// main thing class name aur constructor name hamesa same hi rahana chahiye
///name same ho aur argument differ o to hi constructor oveloading hogi;
///yah oject ho objet banata hai
///kewal object banane se hi function call ho jata hai call karne ki jarurat nahi padti ;
class sum
{
    int a,b;///by default yah private mode m hai
public :
    sum(int x,int y) ///parametrized cunstructor
    {
        cout<<"ye to 2 argument wala call huwa aur sum ==  "<<(x+y)<<endl;
                ///a aur b ki value copy ho gae
    }
    sum (int z)
    {
        a=z;
        cout<<"single parameter wala cunstrctr call huwa hai brooo===  "<<z<<endl;
    }
    sum() /// cuntrsctr with no argument
    {
        cout<<"yah to 0 argument wala call huwa hai"<<endl;
    }

};
int main()
{
    sum c1, c2(2,3) , c3( 4 ), c4; /// yaha dekho kewal obj banaya hu aur cunstruct call ho ja raha hai;
    /// jisme koi argument nahi hai wo bina argument wale cunstrctr ko call  karenge
    ///yaha ho rha hai cunstrctr overloading ;
    return 0;
}
