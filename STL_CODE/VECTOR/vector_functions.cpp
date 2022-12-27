#include<bits/stdc++.h>
using namespace std;
void vector_declaration(){
    ///we give the number of element in vector 
    vector<int>v2(5); //its vector of size 5 and each initial value is 0
      for(int i=0;i<v2.size();i++){
    cout<<v2.at(i)<<" ";
    //o/p is 0 0 0 0 0 if you want initial value soething else then 
      }
cout<<endl;
      //different initial value 
      vector<int>v3(5,-1);//each initial value is -1
         for(int i=0;i<v3.size();i++){
    cout<<v3.at(i)<<" ";
         }
         cout<<endl;
//insertion 
//pus_back() and emplace_back() both are for inserting an elemnt 
//emplace_back is fastre than push_back;
v2.emplace_back(23); //its push the elemt at last index 
      for(int i=0;i<v2.size();i++){
    cout<<v2.at(i)<<" "; 
      }
     v2.emplace_back(43);
     v2.emplace_back(89);
     v2.emplace_back(983);
     v2.emplace_back(754);
     //abhi tak hamne v2 ki size 5 thi 5 elemt insert kar diye hai
     cout<<endl;

     //its push the elemt at last index 
      for(int i=0;i<v2.size();i++){
    cout<<v2.at(i)<<" ";
      }

     v3.push_back(43);
     v3.push_back(89);
     v3.push_back(983);
     v3.push_back(754);
     v3.push_back(9832);
     //abhi tak hamne v2 ki size 5 thi 5 elemt insert kar diye hai
     cout<<endl;

     //its push the elemt at last index 
      for(int i=0;i<v3.size();i++){
    cout<<v3.at(i)<<" ";
      }
          cout<<endl;
          //v3.emplace(56);
      cout<<v3.at(7)<<endl;

  cout<<"V4 ELEMENT AS V3 "<<endl;
      /* Copying one vector to another
      */
    // LETS V4 WANT V3 ELEMENTS 
    cout<<"auto loop "<<endl;
    vector<int>v4(v3);

      for(auto i: v4){
    cout<<i<<" ";
      }
      cout<<endl;

      //v2.insert(v2.begin(),5,2);
 for(int i=0;i<v2.size();i++){
    cout<<v2.at(i)<<" ";}

}
int main()
{
    vector_declaration();
}