#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    
    if((int)s2.find(s1) == -1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}