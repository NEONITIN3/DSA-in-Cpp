#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// 1
	// 1 2
	// 1 2 3
	// 1 2 3 4
	// 1 2 3 4 5
	int n;
	cin>> n;
	int row=1;
    while(row<=n)
	{
	 int col =1;
	 while(col<=row)
	 {
		 cout<<col<<" ";
		 col++;
	 }
	 cout<<endl;
	 row++;
	}

	return 0;
}