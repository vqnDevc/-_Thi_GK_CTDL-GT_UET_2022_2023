#include <iostream>
using namespace std;



int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > k) {
            k = a[i];
        }
    }
    while (k > n) {
        k = k - n;
    }
    int count = 0;
    while (k > count) {
        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                count++;
            }
        }
        if (k > count) {
            k--;
            count = 0;
        }
    }
    cout << k;
    return 0;
}