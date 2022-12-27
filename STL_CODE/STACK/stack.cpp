#include<bits/stdc++.h>
using namespace std;
//LIFO
void explainSTACK(){
    //FIFO
    stack<char>st;
    //deque<int>::iterator tq;
     st.push('1');
     cout<<st.top();

    // for(auto i=st.top();i!=st.end();i++){
    //     cout<<*i<<" ";
    // }
    cout<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty(); // 0 or 1 //0=False 1=True
    //bq.pop();

}
int main()
{ 
explainSTACK();
}  