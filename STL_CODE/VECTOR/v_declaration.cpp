#include<bits/stdc++.h>
using namespace std;
void vector_declaration(){
    //vector<data_type>variable_name;
    vector<int>v;
    //insertion
    v.push_back(8);//insert the elemt 8 in variable
    //cout<<v.size()<<endl; for size of vector

    // 2. way to insert the elment tin the vector and its fast than pushback
    //emplace_back
    v.emplace_back(9);
    //cout<<v.size()<<endl;

    v.emplace_back(23);
      v.emplace_back(24);
        v.emplace_back(25);
          v.emplace_back(26);
            v.emplace_back(27);
    for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<"size of vector  "<<v.size()<<endl;


    ///we give the number of element in vector 
    vector<int>v2(5); //its vector of size 5 and each initial value is 0
      for(int i=0;i<v2.size();i++){
    cout<<v2.at(i)<<" ";
    //o/p is 0 0 0 0 0 if you want initial value soething else then 
      }
cout<<endl;
      //different initial value 
      vector<int>v3(7,-1);//each initial value is -1
         for(int i=0;i<v3.size();i++){
    cout<<v3.at(i)<<" ";
         }

     


}
int main()
{
    vector_declaration();
}