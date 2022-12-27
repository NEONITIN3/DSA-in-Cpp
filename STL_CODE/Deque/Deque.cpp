#include<bits/stdc++.h>
using namespace std;
//deque also a sequence container but here we can store more than one element at same block m
void explainDEQUE(){
    //FIFO
    deque<char>dq={'A','B','C','D','E'};
    deque<int>::iterator tq;
    dq.push_back('Z');
    dq.insert(dq.begin()+1,'X');
    for(auto i=dq.begin();i!=dq.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<dq.size()<<endl;
    cout<<dq.empty(); // 0 or 1 //0=False 1=True
    //bq.pop();

}
int main()
{ 
explainDEQUE();
}  