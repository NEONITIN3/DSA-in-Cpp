#include<iostream>
using namespace std;
int main()
{
int Arr1[100][100],Arr2[100][100];
unsigned int R,C,r,c,i,j;

cin>>R;
cin>>C;

r = C;
c = R;

for(i=0;i<R;i++)
{
for(j=0;j<C;j++)
cin>>Arr1[i][j];
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
Arr2[i][j]=Arr1[j][i];
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
cout<<Arr2[i][j]<<" ";
cout<<"\n";
}

}
