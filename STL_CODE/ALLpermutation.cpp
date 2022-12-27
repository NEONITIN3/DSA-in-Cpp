//123 all permutation 6
#include<bits/stdc++.h>
using namespace std;
// we know that next_permutation(start,end);
/*will give that agge combination hai yaa nahi 
hoga to usse print kar lenge thats it*/
int main(){
   vector<int> vec = {2,3,1};
    /*
    123 132 321 231 312 213
    */
    next_permutation(vec.begin(), vec.end());
    
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2];
    
   cout<<endl;
       //cout<<s.length();


       //sabhi combination ko print karna hai to 
       //sabse pahale input ko sort kar lena
       int a[]={1,3,2,7}; //4!=24 combination honge 
       //but phale esko sort karo
       int size=sizeof(a)/sizeof(a[0]);
       sort(a,a+size);
       do{
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
       }while(next_permutation(a,a+size));


        return 0;
}