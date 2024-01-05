#include <bits/stdc++.h>
using namespace std;
int main(){
	//stack

	//last in first out-->LIFO
    stack<int>st;
    st.push(1);
    //cout<<st.top();

    st.push(2);
    st.push(3);
    st.emplace(5);
    cout<<st.top();

    st.pop();//top will be removed
    st.size();//gives size of stack
    cout<<st.empty();//gives true if stack is empty or false
    stack<int>st1,st2;
    st1.swap(s2);//swaps the stacks s1 and s2

    // Queue

    queue<int>qu;//FIFO-->first in first out
    qu.push(1);
    qu.push(2);
    qu.emplace(5);
    qu.back()+=5;
    //cout<<qu.back()<<endl;
    qu.pop();
    //cout<<qu.front();
    
    // Priority Queue

    priority_queue<int>pq;//it stores in decending order
    pq.push(1);//{1}
    pq.push(10);//{10,1}
    pq.push(5);//{10,5,1}
    pq.emplace(8);//{10,8,5,1}
    cout<<pq.top()<<endl;//prints 10
    pq.pop();//10 will be removed
    cout<<pq.top()<<endl;//8 will be printed

    //minimum heap-- to store in accending oredr
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(10);//{10}
    pq1.push(8);//{8,10}
    cout<<pq1.top();


   	// Deque

   	deque<int>de;
    de.push_back(1);
    //cout<<de[0];
    de.emplace_back(2);
    //cout<<de[0]<<" "<<de[1];
    de.push_front(5);
    //cout<<de[0];
    de.emplace_front(10);
    //cout<<de[0];
    de.pop_front();//removes first element
    de.pop_back();//removes the last element
    cout<<de.back()<<endl;
    cout<<de.front();

    
}
