///refrence is the like internal pointer ;
///represent through----->> & but never said it address;
/// jaha bhi refrense banaoge wahi intialized bhi karna hoga int terms of other var who already define in program;
///never define refrence like --->>. &y=4 its wrong
///int &y=x ab ham x ko y se bhi access kar sakte hai; lets see the programs;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=6;
   int &y=x; //y x ko refrence kar raha hai
    y++;
    cout<<x;
    //x m increment ho aya hoga kyoki hamne Y m increment kar diya hai;
}
