#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool compare_string(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1==s2;
}

int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    
    if(compare_string(s1,s2)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}