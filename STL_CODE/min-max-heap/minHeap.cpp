#include<bits/stdc++.h>
using namespace std;
//Max-heap
int main()
{ 
priority_queue<int>pq;
//priority_queue<int>::iterator j;
//high priority queue m jo jyada number hai uska jyada priority hogi..
//thats why its max heap hai.
pq.push(12);
pq.push(3);
pq.push(2);
pq.push(78);
pq.push(90);
cout<<pq.empty()<<endl;
cout<<pq.size()<<endl;
cout<<pq.top()<<"  its top element of max-heap"<<endl;
for(int i=0;i<pq.size();i++){
    cout<<i<<" ";
}
//cout<<pq.top()<<"its top element of max-heap";
// for(auto i=pq.begin();i!=pq.end();i++)
// cout<<*i<<" ";


//min heap
priority_queue<int,vector<int>,greater<int>>minPQ;
minPQ.push(90);
minPQ.push(234);
minPQ.push(1);
minPQ.push(3);
minPQ.push(5);
minPQ.push(0);
// esme minimum ki priority jyada rahati hai 
//its minheap
cout<<minPQ.top()<<"  jo kam value wala hoga wahi top pe hoga";

//
}  

