#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void sort_odd_number(vector<int> &numbers){
    
    vector<int>odd_numbers;
    for(vector<int>::size_type i = 0; i < numbers.size(); i++){
        if(numbers[i]%2==1){
            odd_numbers.push_back(numbers[i]);
        }
    }
    
    sort(odd_numbers.begin(), odd_numbers.end());
    
    int j = 0;
    for(vector<int>::size_type i = 0; i < numbers.size(); i++){
        if(numbers[i]%2==1){
            numbers[i] = odd_numbers[j];
            j++;
        }
    }
}

int main(){
    int n; cin>>n;
    vector<int>numbers;
    while(n--){
        int x; cin>>x;
        numbers.push_back(x);
    }
    sort_odd_number(numbers);
    for(vector<int>::size_type i = 0; i < numbers.size(); i++)
        cout<<numbers[i]<<" ";

    return 0;
}