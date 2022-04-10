// You are given an unsorted array with both positive and negative elements. You have to find the smallest positive number missing from the array.
// Input:  {2, 3, 7, 6, 8, -1, -10, 15}
// Output: 1
// Input:  { 2, 3, -7, 6, 8, 1, -10, 15 }
// Output: 4
// Input: {1, 1, 0, -1, -2}
// Output: 2
#include<bits/stdc++.h>
using namespace std;
void swap(int* a,int* b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int seperate(int arr[],int n)
{
	int j=0,i;
	for(i=0;i<n;i++)
	{
		if(arr[i]<=0)
		{
			swap(&arr[i],&arr[j]);
			j++;
		}
	}
	return j;
}
int missingpositive(int arr[], int n){
	int i;
	// for(int j=0;j<n;j++)
	// {
	// 	cout<<arr[j]<<" ";
	// }
	// cout<<*arr<<endl;
	for(i=0;i<n;i++)
	{
		if(abs(arr[i])-1<n && arr[(arr[i])-1]>0)
		arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
	}
	for(i=0;i<n;i++)
	if(arr[i]>0)
	{
		return i+1;
	}
	return n+1;
}


int missing(int arr[],int n)
{
	int sep=seperate(arr,n);
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<" ";
	}
	return missingpositive(arr+sep,n-sep);
}


int main() 
{
int n,arr[100];
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
cout<<missing(arr,n);
return 0;
}