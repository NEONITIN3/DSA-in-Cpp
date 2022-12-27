#include<bits/stdc++.h>
using namespace std;
 /* 4-100,3-11 dono ko agar AND kare to O aayega 
 simalarly agar jo number diya gaya hai 
 uske ek kam se agar AND kar  le to jo agar 0 ho gaya and karne k baad to
 perpectly 2^x m represent kar sakate hai
 */
//O(1)
int main()
{
int n=8;
//agar 0 ho gaya to yes else not
n&(n-1)?cout<<"uable to reprasent":cout<<"we can represent 2^x me";
}



//we can also do it by counting set bit 
//because every 2^x number have only one count set bit
//to set bit 1 raha pure binar m to yes else no
//but its take O(no. of bit in binary)