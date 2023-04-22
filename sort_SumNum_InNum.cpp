#include<bits/stdc++.h>

using namespace std;

void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
    	cout << a[i] << "\n";
	}
	cout << endl;
}

int sumNumber(int n){
    int tmp = 0;
    while(n>0){
        tmp += n%10;
        n /= 10;
    }
    return tmp;
}

void merge(int arr[], int l, int m, int r){
    int i = 0,j = 0, k = l;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1], R[n2];
    
    for(int i=0; i<n1; ++i){
        L[i] = arr[l+i];
    }
    
    for(int i=0; i<n2; ++i){
        R[i] = arr[m+1+i];
    }
    
    while(i < n1 && j < n2){
        if(sumNumber(L[i]) < sumNumber(R[j])){
            arr[k++] = L[i++];
        }else if(sumNumber(L[i]) == sumNumber(R[j]) ){
                if(L[i] <= R[j]){
                    arr[k++] = L[i++];
                }else{
                    arr[k++] = R[j++];
                }
        }else{
            arr[k++] = R[j++];
        }
    }
    
    while(i < n1){
        arr[k++] = L[i++];
    }
    while(j < n2){
        arr[k++] = R[j++];
    }
}

void mergeSort(int a[], int l, int r){
    if(l < r){
        int m = (l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }    
}

int main(){
    int n; cin >> n;
    int a[10000];
    
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    
    mergeSort(a,0,n-1);

    printArray(a,n);
    return 0;
}