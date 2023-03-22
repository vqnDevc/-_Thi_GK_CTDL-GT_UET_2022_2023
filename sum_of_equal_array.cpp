#include <bits/stdc++.h>
#include <stack>
using namespace std;

int max(int a, int b){
    if(a == b) return a;
    else return a>b?a:b;
}

void nhap(stack<int>&st, int n, int &sum){
    vector<int>vt;
    for(int i = 0; i < n; i++){
        int tmp; cin>>tmp;
        vt.push_back(tmp);
        sum += tmp;
    }
    for(int i = n-1; i >= 0; i--){
        st.push(vt[i]);
    }
}


int main(){
    int n1,n2,n3; cin>>n1>>n2>>n3;
    stack<int>st1,st2,st3;
    int sum1=0,sum2=0,sum3=0;
    
    nhap(st1,n1,sum1);
    nhap(st2,n2,sum2);
    nhap(st3,n3,sum3);
    
    while(sum1 != sum2 || sum2 != sum3){
        int tmp = max(sum1,max(sum2,sum3));
        if(tmp == sum1){
            sum1 -= st1.top();
            st1.pop();
        }else if(tmp == sum2){
            sum2 -= st2.top();
            st2.pop();
        }else{
            sum3 -= st3.top();
            st3.pop();
        }
    }
    cout<<sum1;
    
    
    return 0;
}