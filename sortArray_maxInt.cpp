#include<bits/stdc++.h>
#include<string>
using namespace std;

void solution(vector<string> &str){
    int len = str.size();
    
    // sort(str.begin(),str.end());
    for(int i = 0; i < len-1; i++){
        for(int j = i+1; j < len; j++){
            if(str[i] + str[j] < str[j] + str[i]){
                swap(str[i],str[j]);
            }
        }
    }
}

int main(){
    int n; cin >> n;
    int m = n;
    vector<string> s;
    while(m--){
		string ss; cin>>ss;
        s.push_back(ss);
    }
    
    solution(s);
    int len = s.size();
    for(int i=0; i<len; i++){
        cout << s[i];
    }

    return 0;
}