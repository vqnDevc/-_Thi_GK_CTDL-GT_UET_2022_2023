#include<bits/stdc++.h>
#include <stack>

using namespace std;

int main(){
    int n; cin>>n;
    stack<int>st,si;
    
    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        st.push(val);
        if(si.empty()) si.push(val);
        else si.push(st.top() + si.top());
    }
    
    stack<int>si2;
    while(!si.empty()){
        si2.push(si.top());
        si.pop();
    }
    while(!si2.empty()){
        cout<<si2.top()<<" ";
        si2.pop();
    }
    
    return 0;
    
}