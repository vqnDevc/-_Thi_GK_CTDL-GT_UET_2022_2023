#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    return a.length() < b.length();
}

void printStr(vector<string> &str){
    int len = str.size();
    for(int i=0; i<len; ++i){
        cout << str[i] << endl;
    }
}

int main(){
    int n; cin>>n; 
    cin.ignore();
    
    vector<string> str; 
    while(n--){
        string s; cin>>s;
        str.push_back(s);
    }
    int len = str.size();
    for(int i = 0; i < len-1; i++ ){
        for(int j = i+1; j < len; j++){
            if(str[i].length() > str[j].length() ){
                swap(str[i],str[j]);
            }else if(str[i].length() == str[j].length()){
                if(str[i] > str[j]){
                    swap(str[i],str[j]);
                }
            }else{
                continue;
            }
        }
    }
    // sort(str.begin(),str.end(),cmp);
    printStr(str);
    return 0;
}