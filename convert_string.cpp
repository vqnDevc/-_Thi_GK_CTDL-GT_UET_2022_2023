#include <bits/stdc++.h>
#include <stack>

using namespace std;
int main(){
    string s; cin>>s;
    stack<char>st;
    for(char x:s) st.push(x);
    
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    
    return 0;
}