#include<bits/stdc++.h>
using namespace std;
/*
arr aur targest sum diya gaya hai
find out karo kitne subset hai
jo ki sum kare to target k equal ho jaye
*/
int subset_count(int a[],int n,int sum){
/*
sum ko last wLE INDEX SE DHATE JA RAH EHAI JAHA BHI SUM==0 HUWA MATLAB SUBSET MIL GAYA 
WAHA COUNT 1 KAR LENGE
YAHI KAAM RECURSIVALI KAR RAHE HAI
*/
    if(n==0) //N==0 MTLB SARE ELMENET KA SUBSET BAN GAYA HAI AB
    return (sum==0)?1:0;
    return  subset_count(a,n-1,sum)+subset_count(a,n-1,sum-a[n-1]);
}
int main(){
int n=6,a[]={1,2,3,4,5,6},target=8;

//5,3 2,6  1,3,4   1,2,5  POSSIBLE SUBSET COUNT IS 4
//here 2 o/p kyoki 2,6 aur 3,5 subset hai jo target sum k equal hai
cout<<"total_count_is_of_subset_sum  "<<subset_count(a,n,target);
}