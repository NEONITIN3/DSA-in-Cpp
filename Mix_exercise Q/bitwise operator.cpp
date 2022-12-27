#include<bits/stdc++.h>

using namespace std;

int main() {
	//bit wise operator
	int n=1,m=2;
	//n=1 01
	//m=2 10
	
	cout << (n&m)<<endl;
	cout<< (n|m)<<endl;
	cout<< (n^m)<<endl; //xor
	cout<< ~n <<endl;//01-10 (pahala bit 1 hai to ans - m hoga)
	cout<<~m<<endl;//10-01=1
int x=5;
cout<< (5>>2)<<endl;
cout<< (3<<4);
	

	return 0;
}