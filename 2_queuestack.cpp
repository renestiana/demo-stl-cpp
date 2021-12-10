#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename type>

class Queue{
private:
    stack<int> stackA;
    stack<int> stackB;
public:
    type front(){
        if(stackB.empty()&&!stackA.empty()){
            while(!stackA.empty()){
                stackB.push(stackA.top());
                stackA.pop();
            }
        }
        return stackB.top();
    }
    void enqueue(int val){
        stackA.push(val);
    }
    void dequeue(){
        if(stackB.empty()&&!stackA.empty()){
            while(!stackA.empty()){
                stackB.push(stackA.top());
                stackA.pop();
            }
        }
        stackB.pop();
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,menu,val;
    string name;
    Queue<int> myqueue;
    
    cin>>n;
    for(int i=0 ; i<n ; i++){
        menu=0,val=0;        
        cin>>menu;
        
        switch(menu){
            case 1:{
                cin>>val;
                myqueue.enqueue(val);
            }
            break;
            case 2:{
                myqueue.dequeue(); 
            }   
            break;
            case 3:{
                cout << myqueue.front() << endl;
            }                
            break;
        }
    }  
    return 0;
}
