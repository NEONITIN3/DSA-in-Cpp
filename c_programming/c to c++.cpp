#include <iostream>


#define N 40

void sum(int*p, int n, int d[])

{

int i;

*p = 0;

for(i = 0; i < n; ++i)

*p = *p + d[i];

}

int main()


{
using namespace std;
int i;

int accum = 0;

int data[N];

for(i = 0; i < N; ++i)

data[i] = i;

sum(&accum, N, data);

cout<<"sum is %d\n"<< accum;

return 0;

}
