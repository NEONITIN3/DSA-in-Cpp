#include<bits/stdc++.h>
using namespace std;
int digitsum(int n){
    int sum=0;
    while(n)//yaha ham code bhi check kar le rahe hai n>o tabhi chalega
    
    {
        sum += (n%10);
        n=n/10;

    }
    return sum;
}
int main()
{ 
    int n; cin>>n;
cout<<digitsum(n);
}  