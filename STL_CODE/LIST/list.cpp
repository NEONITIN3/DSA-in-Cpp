#include<bits/stdc++.h>
using namespace std;
void printlist(list<int> li)
{
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void explainLIST(){
    //list is also sequencial cantainer but ye element ko continously address pe store nahi karta hai
    //esi liye yaha seraching slow ho jati hai campare to vectore (vector me memory address countinous rahata hai)
    //but inerstion aur deletion fast hota hai 
    //when we talk about list we generally talk about Doubly linked list;
    //aur farword list ko linked list kahate hai
    //sabhi function jaise VEctor m the waise hi list m bhi kaam karegnge
    //


    //1. declaration
    list<int>l;
    cout<<" neo list"<<endl;
    l.push_back(8);
    l.push_front(23);
    for(int i: l){
        cout<<i<<" ";//23 8
    }
    cout<<endl;
     cout<<" after insertion list"<<endl;

    l.insert(l.begin(),300);
    l.insert(l.end(),2,700);  //kitne times aur kitna value 
    //but yaha begin()+1 m direct insertion nahi ho payega becauese non-countiguous location pe sab store hai
     for(int i: l){
        cout<<i<<" ";//300 23 8 
    }
    cout<<endl;
    list<int>l1={12,33,45,67,89,99,87,54,33,234};
    for(auto i =l1.begin();i!=l1.end();i++){
        cout<<*(i)<<" ";
    }
    //insertion particular index;
    // l1.insert(i+1,1,777);
    //  cout<<endl;
    //list<int>l1={12,33,45,67,89,99,87,54,33,234};
    // for(auto i =l1.begin();i!=l1.end();i++){
    //      l1.insert(i+1,1,777);
    //  cout<<endl;
    //     cout<<*(i)<<" ";
    // } n 
    cout<<endl;
    list<char> list ={ 'F', 'B','U', 'A','K','Z' };
   cout<<"list";
   for( auto x = list.begin(); x != list.end(); ++x)
   cout<< *x << " ";
//    // declaring insert( ) function
//    list.insert(x + 1, 1, 'E');
//    // printing new list after inserting new element
//    cout<< "New List:";
//    for( auto x = list.begin(); x != list.end(); ++x)
//    cout<< " "<<*x;

}
int main()
{ 
explainLIST();
list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);
    
    cout<<"The elements in the list are: ";
    printlist(li);
    cout<<"Reversing the list: ";
    li.reverse();
    printlist(li);
    cout<<"Sorting the list: ";
    li.sort();
    printlist(li);
    cout<<"The size of the list is: "<<li.size()<<endl;
    cout<<"The first element in the list: "<<li.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    li.pop_front();
    printlist(li);
    cout<<"The last element of the list: "<<li.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    li.pop_back();
    printlist(li);
    
return 0;
}  