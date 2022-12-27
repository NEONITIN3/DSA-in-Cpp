#include<bits/stdc++.h>
using namespace std;
int main()
{ 
//all operation in 0(logn)
//element already sorted and unique hote hai ek lement ek baar hi rahega 
//kyoki ye set hai chahe jitani baar insert kar do wo aayega ek baar hi set k andar
set<int>s;
s.insert(2);
s.insert(2);
s.insert(2);
s.insert(2);
s.insert(89);
s.insert(1);
s.insert(17);
s.insert(12);
cout<< s[0]<<endl;
}  