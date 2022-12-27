#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{12,13,11,34,23}; //PRE-VALUE VECTOR

vector<int>::iterator i=v.end(); 
         i--;                          //FOR LAST INDEX VALUE
 cout<<*(i)<<" its end"<<endl;

 vector<int>::iterator j=v.begin();        //FOR start INDEX VALUE
 cout<<*(j)<<" its begin"<<endl;
 // auto is automaticaly assigning the data type for you :)
 for(auto i : v){
    cout<<i<<" ";
 }
 cout<<endl;
//iterator way to print vector 
 for(auto i=v.begin();i!=v.end();i++){
    cout<<*(i)<<" ";
 }
 cout<<endl;
 vector<int>t{10,23,34,56,67};

int n=t.size();
 //erase the element 
 t.erase(t.begin());
 cout<<"its print after erase first index of element"<<endl;

 for(auto i : n){
   //cout<<"its print after erase first index of element";
   cout<<i<<" ";
 }

 //insert the element
 vector<int>v1{12,33,45,32};
 v1.insert(v1.begin(),300); //300,12,33,45,32
 int n1= v1.size();
 for(auto i :v1){
   cout<<i<<" ";
 }
 cout<<endl;
  v1.insert(v1.begin()+1,90);//300,90,12,33,45,32
  //int n2=v1.size();
  for(auto i:v1){
   cout<<i<<" ";

  }
  cout<<endl;
   //v1.insert(v.begin());


//  vector<int>::iterator k=v.crbegin(); //FOR LAST INDEX VALUE
//  cout<<*(k)<<" its crbegin";

//  vector<int>::iterator l=v.cbegin(); //FOR LAST INDEX VALUE
//  cout<<*(l)<<"its cbegin ";

//  vector<int>::iterator m=v.cend(); //FOR LAST INDEX VALUE
//  cout<<*(m)<<" its cend";

//  vector<int>::iterator n=v.rbegin(); //FOR LAST INDEX VALUE
//  cout<<*(n)<<" its rbegin";

//  vector<int>::iterator o=v.rend(); //FOR LAST INDEX VALUE
//  cout<<*(o)<<" its rend ";
//  vector<int>::iterator i=v.reserve(); //FOR LAST INDEX VALUE
//  cout<<*(i)<<" ";

}  