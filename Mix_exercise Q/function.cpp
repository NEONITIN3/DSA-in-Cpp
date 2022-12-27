//function banayenge call by addrese

#include<iostream>
using namespace std;
int sum(int*,int*);  //function declaration wo bhi globaly
int  main()
{
    int x,y,c;
    cout<<"number input karo\n";
    cin>>x>>y;
    //int sum(int*,int*); function declaration in local;
    c=sum(&x,&y); //call the function by address
    cout<<"sum kar k diya pass by address :"<<c;
    return 0;
}
//ab function define karenge
int sum(int *a,int*b)
{
 return (*a+*b);
}
