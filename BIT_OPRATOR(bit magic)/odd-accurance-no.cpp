#include<bits/stdc++.h>
using namespace std;
/*
find the odd appear element   or unique element present in array
[2,2,2,2,4,4,4,5,5]
o/p=4


so we know that xor properties that x^x^z=x so we can use that
*/
/*
we can also do it by 0(n2) count the apperiance if any odd then that will be the 
element
*/
int main()
{
    vector<int>v={2,2,2,3,3,5,4,2,5,8,8}; //0/p=4
 //take xor of whole array
 int odd_element=0;
 for(int i=0;i<v.size();i++){
  odd_element=(odd_element^v[i]);
 }
 cout<<"odd appearance element is  unique is = "<<odd_element;
}