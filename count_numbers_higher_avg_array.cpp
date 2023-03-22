#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	int a[100];
	int sum = 0;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		sum += a[i];
	}
	int count=0;
	for(int i = 0; i< n;i++){
		if(a[i] > sum/n) count++;
		}
	
	cout<<count;
    return 0;
}
