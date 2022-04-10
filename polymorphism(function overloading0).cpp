#include<iostream>
using namespace std;

///agar ham same name ke function ko alag alag purpose k liye e kar paa rahe hai to esse function overloading kahalata hai;
///function overloading hone k liye jaruri nahi hai ki return type same ho its may bhi same but ARGUMENT SAME NAHI HONE CHAHIYE
///void f(int x)  ,  void f(int x) to yaha funcion overloading nahi hogi;
///esse compile time polymorphism;
///ab ham do function banayenge  AREA k name se but ek se area aur dusare se VOLUME create karenge;


float area (int );
int area (int ,int, int);
int  main()
{
    float ar;
    int a,b,c,d,volume;
    cout<<"enter the radius of circle= ";
    cin>>a;
    ar=area(a); //function call
     cout<< ar<<endl;
    cout<<"enter the parameters of rectaangle ";
    cin>>b>>c>>d;
    volume=area(b,c,d);
    cout<< volume;
    return 0;
}
float area (int r) //esase area of circle nikalenge;
{
    cout<<(3.14*r*r);
}
int area (int l,int w, int b)
{
    return (l*w*b);
}
///to guru esse kAHATEHAI function overloading ;
