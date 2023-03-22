#include<iostream> 
#include<stack>
using namespace std;



int main() {
    int n,m,x;
    int a[100], b[100];
    stack<int> A;
    stack<int> B;

    cin >> n >> m >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    for (int i = n-1; i >= 0; i--) {
        A.push(a[i]);

    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];

    }
    for (int i = m-1; i >= 0; i--) {
        B.push(b[i]);

    }
    int sum = 0;
    int score = 0;
    while (sum < x) {
        if (A.top() >= B.top()) {
            sum += B.top();
            B.pop();
            score ++;
        } else {
            sum += A.top();
            A.pop();
            score ++;
        }
    }
    cout << score;

    return 0;
}