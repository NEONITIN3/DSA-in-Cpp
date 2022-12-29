#include<bits/stdc++.h>
using namespace std;
//fixed size array m insertion tabhi ho skata hai jab space bachi ho
void insert_element(int a[],int n,int pos,int x){
    int indx=pos-1;
    for(int i=n-1;i>=indx;i--)
    {
       a[i+1]=a[i];
    }
    a[indx]=x;
cout<<"after inserting "<<endl;
    for(auto j:a)
    cout<<j<<" ";

}
int main()
{
    int a[5]={1,23,45,56}; //element 4 hi diye hai to baki k by default 0 ho jayenge
    cout<<"before inserting"<<endl;
    for(auto i : a)
    cout<<i<<" ";
    //esme insertion ho sakata hai\
    //mano hame position 3 pe insert karna hai jaha es time 45 hai
    // to index=pos-1 ,3-1=2(index ho gaya) 
    //baki sab ko shift kar de aage aur apna kaam ban jayega
    int n =5; //size
    int pos=3;
    int element=20 //position 3 p3 dalna hai
    cout<<insert_element(a,n,pos,element);

}